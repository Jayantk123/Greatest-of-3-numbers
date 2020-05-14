      #include<stdio.h>
      #include<conio.h>

      void main()
      {
      int a,b,c;
      clrscr();

      printf("Enter Three Numbers\n");
      scanf("%d%d%d",&a,&b,&c);

      if(a>b && a>c)
      {
      printf("%d is Greatest number",a);
       }
      else if(b>c)
      {
      printf("%d is Greatest number",b);
      }
      else
      {
      printf("%d is Greatest number",c);
      }

      getch();
      }