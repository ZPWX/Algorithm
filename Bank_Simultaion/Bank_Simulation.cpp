/**
 * typedef struct {
 *  int OccurTime;       //事件发生时刻
 *  int NType;           //事件类型
 * }Event,ElenType;     //事件类型，有序链表LinkList的数据元素的类型
 * 
 * typedef LinkList EventList    //事件链表类型，定义为有序链表
 *
 * typedef struct {
 *  int ArrivalTime;        //到达时间
 *  int Duration;           //办理事物所需要的时间
 * }QElemType;              //队列数据元素类型
 *
 *      //变量成员
 *EventList ev;                 //事件表
 *Event     en;                 //事件
 *LinkQueue q[4];               //4个客户队列
 *QElemType customer;           //客户记录
 *int TotalTime,CustomerNum;    //累计客户逗留时间，客户数
 *
 *int OpenForDay(){
 *  //初始化
 *  TotalTime=0;CustomerNum=0;  //初始化累计时间、客户数
 *  InitList(ev);               //初始化事件链表为开哦你
 *  en.OccurTime=0;en.NType=0;  //假定第一个到达的新客户到达事件
 *  OrderInsert(ev,en,++i) InitQueue(q[i]); //置空队列
 * }//OpenForDay
 *
 * void CustomerArrived(){
 *  //处理客户到达事件，en.NType=0;
 *  ++CustomerNum;
 *  Random(durTime,intertime);      //生成随机数
 *  t=en.OccurTime+intertime;       //下一客户到达时刻
 *  if(t<CloseTime)                 //银行尚未关门，插入事件表
 *      OrderInsert(ev,(t,0),(*cmp)());
 *  i=Minimum(q);                   //求出长度最短的队列
 *  EnQueue(q[i],(en.OccurTime,duitime));
 *  if(QueueLength(q[i])==1)
 *      OrderInsert(ev,(en.OccurTime+durtime,1),(*cmp)());
 *              //假定第i个队列的一个离开事件并插入事件表
 * }//CustomerArrived
 *
 * void CustomerDeparture(){
 *  //处理客户离开事件
 *  i=en.NType; DelQueue(q[i],cusotmer);        //删除第i个队列的排头排客户
 *  TotalTime+=en.OccurTime-customer.ArrivalTime;
 *                                      //累计客户逗留时间
 *  if(!QueueEmpty(q[i])){          //假定第i队列的一个离开事件并插入事件表
 *      GetHead(q[i],customer);
 *      OrderInsert(ev,(en.OccurTime+customer.Duration,i),(*cmp)());
 *  }
 * }//CustomerDeparture
 *
 * void Bank_Simulation(int ClosrTime){
 *  OpenForDay;
 *  while(!EmptyEventList(ev)){
 *      DelFirst(GetHead(ev),p);en=GetCurElem(p);
 *      if(en.NType==0)
 *          CusotmerArrived;            //处理客户到达事件
 *      else
 *          CustomerDeparture;          //处理客户离开事件
 *  }
 *  //计算并输出平均逗留时间
 * printf("The AverageTime is %f\n",TotalTime/CustomerNum);
 * }//Bank_Simulation
 */
#include <iostream>
#include <cstdio>
#include <cmath>
#include <deque>

using namespace std;

typedef struct yh
{
    double x, y, l;
} node;

int main()
{
    node a, b;
    double n, i, t, sum, ave;
    deque<node>q1;
    deque<node>q2;
    cin>>t;
    while(t--)
    {
            sum = 0;
            cin>>n;
            for(i = 0; i < n; i++)
            {
                        cin>>a.x>>a.y;
                        if(!q1.empty())
                        {
                                        while(!q1.empty())
                                        {
                                                            b = q1.front();
                                                            if(b.l > a.x)
                                                                break;
                                                            sum = sum + (b.l - b.x);
                                                            q1.pop_front();
                                                        }
                                    }
                        if(!q2.empty())
                        {
                                        while(!q2.empty())
                                        {
                                                            b = q2.front();
                                                            if(b.l > a.x)
                                                                break;
                                                            sum = sum + (b.l - b.x);
                                                            q2.pop_front();
                                                        }
                                    }
                        if(q1.size() <= q2.size())
                        {
                                        if(q1.empty())
                                            a.l = a.x + a.y;
                                        else
                                        {
                                                            b = q1.back();
                                                            a.l = b.l + a.y;
                                                        }
                                        q1.push_back(a);
                                    }
                        else
                        {
                                        if(q2.empty())
                                            a.l = a.x + a.y;
                                        else
                                        {
                                                            b = q2.back();
                                                            a.l = b.l + a.y;
                                                        }
                                        q2.push_back(a);
                                    }
                    }
            while(!q1.empty())
            {
                        b = q1.front();
                        sum = sum + (b.l - b.x);
                        q1.pop_front();
                    }
            while(!q2.empty())
            {
                        b = q2.front();
                        sum = sum + (b.l - b.x);
                        q2.pop_front();
                    }
            ave = sum / n;
            printf("%.2lf\n",ave);
        }
    return 0;
}
