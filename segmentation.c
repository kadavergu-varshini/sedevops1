#include <stdio.h>

struct Segment
{
	int base;
	int limit;
};

int main()
{
 int numSegment,logicalAddress,segmentNumber,offset;
 printf("Enter number of segments:");
 scanf("%d",&numSegment);
 struct Segment segment[numSegment];
 printf("Enter base & limit for each segment:\n");
 for(int i=0;i<numSegment;i++)
 {
   printf("Segment %d -Base:",i);
   scanf("%d",&segment[i].base);
   printf("Segement %d -limit:",i);
   scanf("%d",&segment[i].limit);
 }
 
 printf("Enter logical address(Segment Number Offset):");
 scanf("%d %d",&segmentNumber,&offset);
 
 if(segmentNumber >= numSegment || offset >= segment[segmentNumber].limit)
 {
   printf("Error : Invalid logical address\n");
   return 1;
 }
 
 int physicalAddress=segment[segmentNumber].base + offset;
 printf("Physical Address : %d\n",physicalAddress);
 return 0;
} 
