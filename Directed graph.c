#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    struct timespec starts,ends;

    printf("---------------Directed_graph----------------\n");

    int n1=1000,n2=2000,n3=3000,n4=4000,n5=5000;
    /*printf("Enter the input: \n");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);*/

    int i,j;

    int *arr_1[n1],*arr_2[n2],*arr_3[n3],*arr_4[n4],*arr_5[n5];
    int *in_arr,*out_arr;
    int in_degree=0,out_degree=0;
    long long time1=0,time2=0,time3=0,time4=0,time5=0;


    in_degree=0,out_degree=0;   /* when n=1000 */

    in_arr = (int*)malloc(n1 * sizeof(int));
    out_arr = (int*)malloc(n1 * sizeof(int));

    for(i=0; i<n1 ; i++){
        arr_1[i]=(int*)malloc(n1 * sizeof(int));
    }
    for(i=0;i<n1;i++){
        in_arr[i]=0;
        out_arr[i]=0;
        for(j=0;j<n1;j++){
            arr_1[i][j]=rand()%2;
        }
    }

    clock_gettime(CLOCK_REALTIME,&starts);
    /*in_degree*/
     for(i=0;i<n1;i++){
         for(j=0;j<n1;j++){
            if(arr_1[i][j]==1){
                in_arr[i]++;
            }
         }
     }
     /* out_degree */

     for(i=0;i<n1;i++){
         for(j=0;j<n1;j++){
            if(arr_1[i][j]==1){
                out_arr[i]++;
            }
         }
     }
     clock_gettime(CLOCK_REALTIME,&ends);

      for(i=0;i<n1;i++){
      in_degree+=in_arr[i];
      out_degree+=out_arr[i];
      }

      /* calculate total time */

      time1=(ends.tv_sec-starts.tv_sec)*1000+(ends.tv_nsec-starts.tv_nsec);
      printf("\n\nTOtal In-degree:%6d \t\t TOtal Out-degree:%6d \t for input n=%d\n",in_degree,out_degree,n1 );
      printf("Total time :%ld ms\t",time1);

       in_degree=0,out_degree=0;   /* when n=2000 */

    in_arr = (int*)malloc(n2 * sizeof(int));
    out_arr = (int*)malloc(n2 * sizeof(int));

    for(i=0; i<n2 ; i++){
        arr_2[i]=(int*)malloc(n2 * sizeof(int));
    }
    for(i=0;i<n2;i++){
        in_arr[i]=0;
        out_arr[i]=0;
        for(j=0;j<n2;j++){
            arr_2[i][j]=rand()%2;
        }
    }

    clock_gettime(CLOCK_REALTIME,&starts);
    /*in_degree*/
     for(i=0;i<n2;i++){
         for(j=0;j<n2;j++){
            if(arr_2[i][j]==1){
                in_arr[i]++;
            }
         }
     }
     /* out_arr */

     for(i=0;i<n2;i++){
         for(j=0;j<n2;j++){
            if(arr_2[i][j]==1){
                out_arr[i]++;
            }
         }
     }
     clock_gettime(CLOCK_REALTIME,&ends);

      for(i=0;i<n2;i++){
      in_degree+=in_arr[i];
      out_degree+=out_arr[i];
      }

      /* calculate total time */

      time2=(ends.tv_sec-starts.tv_sec)*1000+(ends.tv_nsec-starts.tv_nsec);
      printf("\n\nTOtal In-degree:%6d \t TOtal Out-degree:%6d \t for input n=%d\n",in_degree,out_degree,n2 );
      printf("Total time :%ld ms\t",time2);


       in_degree=0,out_degree=0;   /* when n=3000 */

    in_arr = (int*)malloc(n3 * sizeof(int));
    out_arr = (int*)malloc(n3 * sizeof(int));

    for(i=0; i<n3 ; i++){
        arr_3[i]=(int*)malloc(n3 * sizeof(int));
    }
    for(i=0;i<n3;i++){
        in_arr[i]=0;
        out_arr[i]=0;
        for(j=0;j<n3;j++){
            arr_3[i][j]=rand()%2;
        }
    }

    clock_gettime(CLOCK_REALTIME,&starts);
    /*in_degree*/
     for(i=0;i<n3;i++){
         for(j=0;j<n3;j++){
            if(arr_3[i][j]==1){
                in_arr[i]++;
            }
         }
     }
     /* out_arr */

     for(i=0;i<n3;i++){
         for(j=0;j<n3;j++){
            if(arr_3[i][j]==1){
                out_arr[i]++;
            }
         }
     }
     clock_gettime(CLOCK_REALTIME,&ends);

      for(i=0;i<n3;i++){
      in_degree+=in_arr[i];
      out_degree+=out_arr[i];
      }

      /* calculate total time */

      time3=(ends.tv_sec-starts.tv_sec)*1000+(ends.tv_nsec-starts.tv_nsec);
      printf("\n\nTOtal In-degree:%6d \t TOtal Out-degree:%6d \t for input n=%d\n",in_degree,out_degree,n3 );
      printf("Total time :%ld ms\t",time3);


      in_degree=0,out_degree=0;   /* when n=4000 */

    in_arr = (int*)malloc(n4 * sizeof(int));
    out_arr = (int*)malloc(n4 * sizeof(int));

    for(i=0; i<n4 ; i++){
        arr_4[i]=(int*)malloc(n4 * sizeof(int));
    }
    for(i=0;i<n4;i++){
        in_arr[i]=0;
        out_arr[i]=0;
        for(j=0;j<n4;j++){
            arr_4[i][j]=rand()%2;
        }
    }

    clock_gettime(CLOCK_REALTIME,&starts);
    /*in_degree*/
     for(i=0;i<n4;i++){
         for(j=0;j<n4;j++){
            if(arr_4[i][j]==1){
                in_arr[i]++;
            }
         }
     }
     /* out_arr */

     for(i=0;i<n4;i++){
         for(j=0;j<n4;j++){
            if(arr_4[i][j]==1){
                out_arr[i]++;
            }
         }
     }
     clock_gettime(CLOCK_REALTIME,&ends);

      for(i=0;i<n4;i++){
      in_degree+=in_arr[i];
      out_degree+=out_arr[i];
      }

      /* calculate total time */

      time4=(ends.tv_sec-starts.tv_sec)*1000+(ends.tv_nsec-starts.tv_nsec);
      printf("\n\nTOtal In-degree:%6d \t TOtal Out-degree:%6d \t for input n=%d\n",in_degree,out_degree,n4 );
      printf("Total time :%ld ms\t",time4);


      in_degree=0,out_degree=0;   /* when n=5000 */

    in_arr = (int*)malloc(n5 * sizeof(int));
    out_arr = (int*)malloc(n5 * sizeof(int));

    for(i=0; i<n5 ; i++){
        arr_5[i]=(int*)malloc(n5 * sizeof(int));
    }
    for(i=0;i<n5;i++){
        in_arr[i]=0;
        out_arr[i]=0;
        for(j=0;j<n5;j++){
            arr_5[i][j]=rand()%2;
        }
    }

    clock_gettime(CLOCK_REALTIME,&starts);
    /*in_degree*/
     for(i=0;i<n5;i++){
         for(j=0;j<n5;j++){
            if(arr_5[i][j]==1){
                in_arr[i]++;
            }
         }
     }
     /* out_arr */

     for(i=0;i<n5;i++){
         for(j=0;j<n5;j++){
            if(arr_5[i][j]==1){
                out_arr[i]++;
            }
         }
     }
     clock_gettime(CLOCK_REALTIME,&ends);

      for(i=0;i<n5;i++){
      in_degree+=in_arr[i];
      out_degree+=out_arr[i];
      }

      /* calculate total time */

      time5=(ends.tv_sec-starts.tv_sec)*1000+(ends.tv_nsec-starts.tv_nsec);
      printf("\n\nTOtal In-degree:%6d \t TOtal Out-degree:%6d \t for input n=%d\n",in_degree,out_degree,n5 );
      printf("Total time :%ld ms\t",time5);




}
