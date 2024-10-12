# include "iGraphics.h"
#include <stdbool.h>
#include <stdio.h>
#include<stdlib.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
bool p1 = false;
bool p2=false;
bool p3=false;
bool p1_extra=false;
bool p2_extra=false;
bool p3_extra=false;
bool p1_cross=false;
bool p2_cross=false;
bool p3_cross=false;
bool p1_tick=false;
bool p2_tick=false;
bool p3_tick=false;
bool s1 = true;
bool state=true;
bool musicOn=true;
int boool[4]= {0};
int cnt=60;
int cnt2=60;
int i=0;
int i1=1;
int g=0;
int g1=1;
int k;
char str[100];
int flag1=1;
int flag2=1;
int flag_1,c,score=0;
char timer[100];
bool timer_bool;
int h_score;
int score2;
char scr_match3[50];
int pictoletindex=1;
int x1 = 0;
int x=-10, y = 400, r = 20,dx=10, x_left=363, x_right=555;
int color_red[6],color_blue[6],color_green[6];

int color_red_1=252, color_green_1=170, color_blue_1=153;
int color_red_2=252, color_green_2=170, color_blue_2=153;
int color_red_3=252, color_green_3=170, color_blue_3=153;
int color_red_4=252, color_green_4=170, color_blue_4=153;
int color_red_5=252, color_green_5=170, color_blue_5=153;
int color_red_6=252, color_green_6=170, color_blue_6=153;
int color_red_7=252, color_green_7=170, color_blue_7=153;
int color_red_8=252, color_green_8=170, color_blue_8=153;
//int color_red


int done_l_1=0,done_l_2=0,done_l_3=0,done_r_4=0,done_r_5=0,done_r_6=0,done_r_7,done_r_8;
//int done_r_4_2=0,done_r_5_2=0,done_r_6_2=0,done_r_7_2=0;
int circle_x = 500, circle_y = 400, circle2_x=450, circle2_y=325, circle3_x=550, circle3_y=325;
int A1x=500,A1y=400,Alx, Aly;
float a=0,b=0;
int mouse_x,mouse_y,mou_x,mou_y;
int flag_l_1=0, flag_l_2 = 0,flag_l_3, flag_r_4, flag_r_5, flag_r_6,flag_r_7,flag_r_8;


int game_state1=0, game_state2=0, game_state3=1;
int gamestate2_1=0;
int gamestate2_2=0;
int gamestate1_1=0;
int gamestate1_2=0;
int game_state=0;
int gamestate4=0,gamestate4_1=0,gamestate4_2=0,gamestate4_3=0;
int gamestate1_1_1 = 0;
int s[30]= {1};
int j=1;

char bc[30][40] = { "bc\\crisscross\\A.jpg", "bc\\crisscross\\B.jpg","bc\\crisscross\\C.jpg","bc\\crisscross\\D.jpg","bc\\crisscross\\E.jpg","bc\\crisscross\\G.jpg","bc\\crisscross\\H.jpg","bc\\crisscross\\I.jpg","bc\\crisscross\\J.jpg","bc\\crisscross\\K.jpg", "bc\\crisscross\\M.jpg", "bc\\crisscross\\N.jpg", "bc\\crisscross\\O.jpg", "bc\\crisscross\\R.jpg", "bc\\crisscross\\S.jpg", "bc\\crisscross\\T.jpg", "bc\\crisscross\\U.jpg","bc\\crisscross\\V.jpg", "bc\\crisscross\\W.jpg", "bc\\crisscross\\Y.jpg"};

int bcindex =1;
char chobi[27][60]= {"bc\\alph to pic\\A.bmp", "bc\\alph to pic\\B.bmp","bc\\alph to pic\\C.bmp","bc\\alph to pic\\D.bmp","bc\\alph to pic\\E.bmp","bc\\alph to pic\\F.bmp","bc\\alph to pic\\G.bmp","bc\\alph to pic\\H.bmp","bc\\alph to pic\\I.bmp","bc\\alph to pic\\J.bmp","bc\\alph to pic\\K.bmp","bc\\alph to pic\\L.bmp","bc\\alph to pic\\M.bmp","bc\\alph to pic\\N.bmp","bc\\alph to pic\\O.bmp","bc\\alph to pic\\P.bmp","bc\\alph to pic\\Q.bmp","bc\\alph to pic\\R.bmp","bc\\alph to pic\\S.bmp","bc\\alph to pic\\T.bmp","bc\\alph to pic\\U.bmp","bc\\alph to pic\\V.bmp","bc\\alph to pic\\W.bmp","bc\\alph to pic\\X.bmp","bc\\alph to pic\\Y.bmp","bc\\alph to pic\\Z.bmp" };
char chobi2[27][40]= {"bc\\pic to alph\\A.jpg", "bc\\pic to alph\\B.jpg","bc\\pic to alph\\C.jpg","bc\\pic to alph\\D.jpg","bc\\pic to alph\\E.jpg","bc\\pic to alph\\F.jpg","bc\\pic to alph\\G.jpg","bc\\pic to alph\\H.jpg","bc\\pic to alph\\I.jpg","bc\\pic to alph\\J.jpg","bc\\pic to alph\\K.jpg","bc\\pic to alph\\L.jpg","bc\\pic to alph\\M.jpg","bc\\pic to alph\\N.jpg","bc\\pic to alph\\O.jpg","bc\\pic to alph\\P.jpg","bc\\pic to alph\\Q.jpg","bc\\pic to alph\\R.jpg","bc\\pic to alph\\S.jpg","bc\\pic to alph\\T.jpg","bc\\pic to alph\\U.jpg","bc\\pic to alph\\V.jpg","bc\\pic to alph\\W.jpg","bc\\pic to alph\\X.jpg","bc\\pic to alph\\Y.jpg","bc\\pic to alph\\Z.jpg"};



int v=0;
int ans[30]= {3,2,1,3,2,4,3,1,3,1,4,2,3,1,3,4,2,4,1,3,2,4,3,2,4,3,3};
int ans2[30]= {3,1,4,2,1,3,2,4,3,1,2,4,1,3,2,1,3,4,1,2,4,1,3,4,3,2,3};
//score
int highscore_alph_comp=0;
int highscore_alph_fun=0;
int highscore_pic_comp=0;
int highscore_pic_fun=0;
char scr[100];
char scr_match[50];
char scr_match2[50];
char scr_match_alph_comp[50];
char scr_match_alph_fun[50];
char scr_match_pic_comp[50];
char scr_match_pic_fun[50];
int score_match=0;

char bc3[30][60] = {"bc\\crisscross2\\a.jpg", "bc\\crisscross2\\b.jpg", "bc\\crisscross2\\c.jpg", "bc\\crisscross2\\d.jpg", "bc\\crisscross2\\e.jpg", "bc\\crisscross2\\f.jpg", "bc\\crisscross2\\g.jpg", "bc\\crisscross2\\h.jpg", "bc\\crisscross2\\i.jpg", "bc\\crisscross2\\j.jpg", "bc\\crisscross2\\k.jpg", "bc\\crisscross2\\m.jpg", "bc\\crisscross2\\n.jpg", "bc\\crisscross2\\o.jpg", "bc\\crisscross2\\r.jpg", "bc\\crisscross2\\s.jpg", "bc\\crisscross2\\t.jpg", "bc\\crisscross2\\u.jpg", "bc\\crisscross2\\v.jpg", "bc\\crisscross2\\w.jpg", "bc\\crisscross2\\y.jpg"};
char bc2[30][60] = {"bc\\crisscross3\\a.jpg", "bc\\crisscross3\\b.jpg", "bc\\crisscross3\\c.jpg", "bc\\crisscross3\\d.jpg", "bc\\crisscross3\\e.jpg", "bc\\crisscross3\\f.jpg", "bc\\crisscross3\\g.jpg", "bc\\crisscross3\\h.jpg", "bc\\crisscross3\\i.jpg", "bc\\crisscross3\\j.jpg","bc\\crisscross3\\k.jpg", "bc\\crisscross3\\m.jpg", "bc\\crisscross3\\n.jpg", "bc\\crisscross3\\o.jpg", "bc\\crisscross3\\r.jpg", "bc\\crisscross3\\s.jpg", "bc\\crisscross3\\t.jpg", "bc\\crisscross3\\u.jpg", "bc\\crisscross3\\v.jpg", "bc\\crisscross3\\w.jpg", "bc\\crisscross3\\y.jpg"};


void restart()
{
    printf("restart\n");
    cnt = 60;
    i = 0;
    i1 = pictoletindex;
    score = 0;
    x1 = 0;
    a = 0;
    b = 0;
    game_state1 = 0;
    game_state2 = 0;
    game_state3 = 1;
    gamestate2_1 = 0;
    gamestate2_2 = 0;
    gamestate1_1 = 0;
    gamestate1_2 = 0;
    gamestate1_1_1 = 0;
    j=1;
    game_state = 1;
    v=0;
    flag1=1;
    flag2=1;
    printf("game_state=%d, game_state1=%d,game_state2=%d\n",game_state,game_state1,game_state2);
}


void pic_to_alph()
{
    if(game_state1 == 1)
    {
//    iShowBMP(0,0,"bc\\pic to alph\\fun.jpg");
        iShowBMP(0,0,"bc\\pic to alph\\A (1).jpg");

        if((a>0 && a<106) && (b>457 && b<563))
        {

            game_state = 1;
            game_state1 = 0;
            a=0;
            b=0;

        }

        if((a>327 && a<672) && (b>158 && b<258))
        {
            gamestate1_1 = 1;
            game_state1 = 0;
            a=0;
            b=0;

        }
        else if((a>327 && a< 672) && (b>293 && b<410))
        {
            gamestate1_2 = 1;
            game_state1 = 0;
            a=0;
            b=0;
        }
    }

    if(gamestate1_1>0 && gamestate1_2 == 0)
    {
       // printf("gamestate1_1\n");
        //timer_bool = true;
        sprintf(scr,"Score : %d",score);
        sprintf(timer,"timer : %d",cnt);
        //iShowBMP(0,0,chobi[game_state2 - 1]);
        iShowBMP(0,0,chobi2[pictoletindex]);
        iSetColor(0,0,0);
        iText(800,500,scr,GLUT_BITMAP_TIMES_ROMAN_24);
        iText(100,500,timer,GLUT_BITMAP_TIMES_ROMAN_24);

        if(cnt == 0)
        {

            gamestate1_1_1 = 1;
            gamestate1_1=0;
        }

        if( (a>=56 && a<=214) && (b>=40 && b<=218))
        {
            v=1;
        }
        else if( (a>=278 && a<=436) && (b>=40 && b<=218))
        {
            v=2;
        }
        else if( (a>=500 && a<=658) && (b>=40 && b<=218))
        {
            v=3;
        }
        else if((a>=738 && a<=890) && (b>=40 && b<=218))
        {
            v=4;
        }

        else if((a>=896 && a<=992) && (b>=238 && b<=335))
        {

            if( v == 0 ) score -= 15;
//      s[0]=pictoletindex;
            a=0;
            b=0;
            v=0;

            i1=rand()%26;
            for(k=0; k<j; k++)
            {
                if(j==26) break;
                if(s[k]==i1)
                {
//               printf("regenerating-%d",i1);
                    i1=rand()%26;
                    k=-1;
                }
            }
            s[j]=i1;

            printf("(%d)%d ",j,s[j]);


            printf("\n");
            //s[j] = i1;
            c=0;
            flag1=1;
            flag2=1;

            pictoletindex = i1;
            if(j == 26)
            {
                gamestate1_1_1 = 1;
                //gamestate1_1=0;
            }
            j++;



        }

        if(flag2 == 1 && v != 0)
        {
            if(v == ans2[i1])
            {
                flag_1 = 1;
                flag1 = 0;
                c=v;
                score += 20;
            }
            else
            {
                flag_1 = 0;
                flag1 = 0;
                c=v;
                score -= 20;
            }

        }

        if(flag1 == 0 )
        {
            flag2 = 0;
            if(flag_1 == 1)
            {
                if(c == 1)
                {
                    iShowBMP2(50,50,"bc\\Tick2.bmp",0);
                }
                if(c == 2)
                {
                    iShowBMP2(315,50,"bc\\Tick2.bmp",0);
                }
                if(c == 3)
                {
                    iShowBMP2(570,50,"bc\\Tick2.bmp",0);
                }
                if(c == 4)
                {
                    iShowBMP2(825,50,"bc\\Tick2.bmp",0);
                }
            }
            else
            {
                if(ans2[i1] == 1 && v!=0)
                {
                    iShowBMP2(50,50,"bc\\Tick2.bmp",0);
                    //iShowBMP2(50,50,"bc\\Tick2.bmp",0);
                }
                else if(ans2[i1] == 2 && v!=0)
                {
                    iShowBMP2(315,50,"bc\\Tick2.bmp",0);
                }
                else if(ans2[i1] == 3 && v!=0)
                {
                    iShowBMP2(570,50,"bc\\Tick2.bmp",0);
                }
                else if(ans2[i1] == 4 && v!=0)
                {
                    iShowBMP2(825,50,"bc\\Tick2.bmp",0);
                }

                if(c == 1)
                {
                    iShowBMP2(50,60,"bc\\cross2.bmp",0);
                }
                else if(c == 2)
                {
                    iShowBMP2(315,60,"bc\\cross2.bmp",0);
                }
                else if(c == 3)
                {
                    iShowBMP2(570,60,"bc\\cross2.bmp",0);
                }
                else if(c == 4)
                {
                    iShowBMP2(825,60,"bc\\cross2.bmp",0);
                }

            }
        }
    }

    if(gamestate1_2>0)
    {
        //timer_bool = true;
        sprintf(scr,"Score : %d",score);
        //sprintf(timer,"timer : %d",cnt);
        iShowBMP(0,0,chobi2[gamestate1_2 - 1]);
        //iShowBMP(0,0,chobi[game_state2]);
        iSetColor(0,0,0);
        iText(800,500,scr,GLUT_BITMAP_TIMES_ROMAN_24);
        //iText(100,500,timer,GLUT_BITMAP_TIMES_ROMAN_24);

        if(cnt == 0) game_state = 1;

        if( (a>=56 && a<=214) && (b>=40 && b<=218))
        {
            v=1;
        }
        else if( (a>=278 && a<=436) && (b>=40 && b<=218))
        {
            v=2;
        }
        else if( (a>=500 && a<=658) && (b>=40 && b<=218))
        {
            v=3;
        }
        else if((a>=738 && a<=890) && (b>=40 && b<=218))
        {
            v=4;
        }

        else if((a>=896 && a<=992) && (b>=228 && b<=335))
        {

            a=0;
            b=0;
            v=0;
            i++;
            c=0;
            flag1=1;
            flag2=1;
            if(gamestate1_2 == 26)
            {
                gamestate1_1_1 = 1;
                //gamestate1_2=0;
                gamestate1_1 = 0;
            }
            gamestate1_2 ++;
            //gamestate1_1 = 0;
            printf("%d\n",i);

        }

        if(flag2 == 1 && v != 0)
        {
            if(v == ans2[i])
            {
                flag_1 = 1;
                flag1 = 0;
                c=v;
                score += 20;
            }
            else
            {
                flag_1 = 0;
                flag1 = 0;
                c=v;
                score -= 20;
            }

        }

        if(flag1 == 0 )
        {
            flag2 = 0;
            if(flag_1 == 1)
            {
                if(c == 1)
                {
                    iShowBMP2(50,50,"bc\\Tick2.bmp",0);
                }
                if(c == 2)
                {
                    iShowBMP2(315,50,"bc\\Tick2.bmp",0);
                }
                if(c == 3)
                {
                    iShowBMP2(570,50,"bc\\Tick2.bmp",0);
                }
                if(c == 4)
                {
                    iShowBMP2(825,50,"bc\\Tick2.bmp",0);
                }
            }
            else
            {
                if(ans2[i] == 1 && v!=0)
                {
                    iShowBMP2(50,50,"bc\\Tick2.bmp",0);
                }
                else if(ans2[i] == 2 && v!=0)
                {
                    iShowBMP2(315,50,"bc\\Tick2.bmp",0);
                }
                else if(ans2[i] == 3 && v!=0)
                {
                    iShowBMP2(530,50,"bc\\Tick2.bmp",0);//570,50
                }
                else if(ans2[i] == 4 && v!=0)
                {
                    iShowBMP2(825,50,"bc\\Tick2.bmp",0);
                }

                if(c == 1)
                {
                    iShowBMP2(50,60,"bc\\cross2.bmp",0);
                }
                else if(c == 2)
                {
                    iShowBMP2(315,60,"bc\\cross2.bmp",0);
                }
                else if(c == 3)
                {
                    iShowBMP2(570,60,"bc\\cross2.bmp",0);
                }
                else if(c == 4)
                {
                    iShowBMP2(825,60,"bc\\cross2.bmp",0);
                }

            }
        }
    }



    if(gamestate1_1_1 == 1)
    {

        sprintf(scr_match_alph_comp,"%d",highscore_alph_comp);
        sprintf(scr_match_alph_fun,"%d",highscore_alph_fun);
        sprintf(scr_match,"%d",score);

        if(cnt <= 0)
        {
        if(score > highscore_alph_comp )
            highscore_alph_comp = score;
        iShowBMP(0,0,"bc\\Time over.jpg");
        iSetColor(255,255,255);
        iText(310,223,scr_match_alph_comp,GLUT_BITMAP_TIMES_ROMAN_24);
        }
        else if (cnt >0)
        {
            if(score > highscore_alph_fun )
            highscore_alph_fun = score;
            iShowBMP(0,0,"bc\\Well done.jpg");
            iSetColor(255,255,255);
            iText(310,223,scr_match_alph_fun,GLUT_BITMAP_TIMES_ROMAN_24);
        }
        iSetColor(255,255,255);
        iText(310,333,scr_match,GLUT_BITMAP_TIMES_ROMAN_24);



        if((a>= 550 && a<= 850) && (b>=45 && b<= 120))
        {
           for(int o=0; o<=26; o++)
            {
                s[o]=pictoletindex;
            }

            restart();

        }
        if((a>= 135 && a<= 435) && (b>=45 && b<= 120))
        {
            for(int o=0; o<=26; o++)
            {
                s[o]=pictoletindex;
            }

            restart();
            game_state1 = 1;
            game_state = 2;

        }

    }

}

void alph_to_pic()
{
    // x1=1;
    if(game_state2 == 1)
    {
        //iShowBMP(0,0,"bc\\pic to alph\\fun.jpg");

        iShowBMP(0,0,"bc\\pic to alph\\A (1).jpg");


        if((a>327 && a<672) && (b>158 && b<258))
        {
            printf("process 1\n");
            gamestate2_1 = 1;
            game_state2 = 0;
            //game_state1=0;
            a=0;
            b=0;
            // x1 = 1;

        }
        if((a>327 && a< 672) && (b>293 && b<410))
        {
            gamestate2_2 = 1;
             game_state2 = 0;
            a=0;
            b=0;
        }
        else if((a>0 && a<106) && (b>457 && b<563))
        {

            game_state = 1;
            //game_state2 = 0;
            //game_state1=0;
            a=0;
            b=0;

        }
    }

    if(gamestate2_1 > 0 && gamestate2_2 == 0)
    {
        //timer_bool = true;
        sprintf(scr,"Score : %d",score);
        sprintf(timer,"timer : %d",cnt);
        //iShowBMP(0,0,chobi[game_state2 - 1]);
        iShowBMP(0,0,chobi[pictoletindex]);
        iSetColor(0,0,0);
        iText(800,500,scr,GLUT_BITMAP_TIMES_ROMAN_24);
        iText(100,500,timer,GLUT_BITMAP_TIMES_ROMAN_24);

        if(cnt == 0)
        {
            gamestate1_1_1 = 1;
            gamestate2_1 = 0;
        }

        if( (a>=15 && a<=215) && (b>=170 && b<=355))
        {
            v=1;
        }
        else if( (a>=270 && a<=470) && (b>=150 && b<=355))
        {
            v=2;
        }
        else if( (a>=525 && a<=725) && (b>=150 && b<=355))
        {
            v=3;
        }
        else if((a>=780 && a<=980) && (b>=150 && b<=355))
        {
            v=4;
        }

        else if((a>=850 && a<=965) && (b>=9 && b<=125))
        {

            if( v == 0) score -= 15;
            // s[0]=1;
            a=0;
            b=0;
            v=0;
            //int k;
            i1=rand()%26;
            for(k=0; k<j; k++)
            {
                if(j == 26)break;
                if(s[k]==i1)
                {
                    i1=rand()%26;
                    k=-1;
                }
            }
            s[j]=i1;

            // printf("(%d)%d ",j,s[j]);


            printf("\n");
            c=0;
            flag1=1;
            flag2=1;
            pictoletindex = i1;
            if(j == 26)
            {
                gamestate1_1_1 = 1;
                gamestate2_1 = 0;
            }
            j++;

        }

        if(flag2 == 1 && v != 0)
        {
            if(v == ans[i1])
            {
                flag_1 = 1;
                flag1 = 0;
                c=v;
                score += 20;
            }
            else
            {
                flag_1 = 0;
                flag1 = 0;
                c=v;
                score -= 20;
            }

        }

        if(flag1 == 0 )
        {
            flag2 = 0;
            if(flag_1 == 1)
            {
                if(c == 1)
                {
                    iShowBMP2(50,50,"bc\\Tick2.bmp",0);
                }
                if(c == 2)
                {
                    iShowBMP2(315,50,"bc\\Tick2.bmp",0);
                }
                if(c == 3)
                {
                    iShowBMP2(570,50,"bc\\Tick2.bmp",0);
                }
                if(c == 4)
                {
                    iShowBMP2(825,50,"bc\\Tick2.bmp",0);
                }
            }
            else
            {
                if(ans[i1] == 1 && v!=0)
                {
                    iShowBMP2(50,50,"bc\\Tick2.bmp",0);
                }
                else if(ans[i1] == 2 && v!=0)
                {
                    iShowBMP2(315,50,"bc\\Tick2.bmp",0);
                }
                else if(ans[i1] == 3 && v!=0)
                {
                    iShowBMP2(570,50,"bc\\Tick2.bmp",0);
                }
                else if(ans[i1] == 4 && v!=0)
                {
                    iShowBMP2(825,50,"bc\\Tick2.bmp",0);
                }

                if(c == 1)
                {
                    iShowBMP2(50,60,"bc\\cross2.bmp",0);
                }
                else if(c == 2)
                {
                    iShowBMP2(315,60,"bc\\cross2.bmp",0);
                }
                else if(c == 3)
                {
                    iShowBMP2(570,60,"bc\\cross2.bmp",0);
                }
                else if(c == 4)
                {
                    iShowBMP2(825,60,"bc\\cross2.bmp",0);
                }

            }
        }
    }
    if(gamestate2_2 > 0)
    {
        //timer_bool = true;
        sprintf(scr,"Score : %d",score);
        //sprintf(timer,"timer : %d",cnt);
        //iShowBMP(0,0,chobi[gamestate2_2 - 1]);
        iShowBMP(0,0,chobi[i]);
        //iShowBMP(0,0,chobi[game_state2]);
        iSetColor(0,0,0);
        iText(800,500,scr,GLUT_BITMAP_TIMES_ROMAN_24);
        //iText(100,500,timer,GLUT_BITMAP_TIMES_ROMAN_24);

        //if(cnt == 0) game_state = 1;

        if( (a>=15 && a<=215) && (b>=170 && b<=355))
        {
            v=1;
        }
        else if( (a>=270 && a<=470) && (b>=150 && b<=355))
        {
            v=2;
        }
        else if( (a>=525 && a<=725) && (b>=150 && b<=355))
        {
            v=3;
        }
        else if((a>=780 && a<=980) && (b>=150 && b<=355))
        {
            v=4;
        }

        else if((a>=850 && a<=965) && (b>=9 && b<=125))
        {

            a=0;
            b=0;
            v=0;
            //i++;
            c=0;
            flag1=1;
            flag2=1;
            if(i == 25)
            {
                gamestate1_1_1 = 1;
                gamestate2_2=0;
            }
            i++;
            gamestate2_2 ++;
            printf("Gamestate2_2 = %d\n",gamestate2_2);
            printf("i = %d\n",i);
        }

        if(flag2 == 1 && v != 0)
        {
            if(v == ans[i])
            {
                flag_1 = 1;
                flag1 = 0;
                c=v;
                score += 20;
            }
            else
            {
                flag_1 = 0;
                flag1 = 0;
                c=v;
                score -= 20;
            }

        }

        if(flag1 == 0 )
        {
            flag2 = 0;
            if(flag_1 == 1)
            {
                if(c == 1)
                {
                    iShowBMP2(50,50,"bc\\Tick2.bmp",0);
                }
                if(c == 2)
                {
                    iShowBMP2(315,50,"bc\\Tick2.bmp",0);
                }
                if(c == 3)
                {
                    iShowBMP2(570,50,"bc\\Tick2.bmp",0);
                }
                if(c == 4)
                {
                    iShowBMP2(825,50,"bc\\Tick2.bmp",0);
                }
            }
            else
            {
                if(ans[i] == 1 && v!=0)
                {

                    iShowBMP2(50,50,"bc\\Tick2.bmp",0);
                }
                else if(ans[i] == 2 && v!=0)
                {
                    iShowBMP2(315,50,"bc\\Tick2.bmp",0);
                }
                else if(ans[i] == 3 && v!=0)
                {
                    iShowBMP2(570,50,"bc\\Tick2.bmp",0);
                }
                else if(ans[i] == 4 && v!=0)
                {
                    iShowBMP2(825,50,"bc\\Tick2.bmp",0);
                }

                if(c == 1)
                {
                    iShowBMP2(50,60,"bc\\cross2.bmp",0);
                }
                else if(c == 2)
                {
                    iShowBMP2(315,60,"bc\\cross2.bmp",0);
                }
                else if(c == 3)
                {
                    iShowBMP2(570,60,"bc\\cross2.bmp",0);
                }
                else if(c == 4)
                {
                    iShowBMP2(825,60,"bc\\cross2.bmp",0);
                }

            }
        }
    }
    if(gamestate1_1_1 == 1)
    {
        sprintf(scr_match_pic_comp,"%d",highscore_pic_comp);
        sprintf(scr_match_pic_fun,"%d",highscore_pic_fun);
        sprintf(scr_match,"%d",score);

        if(cnt <= 0)
        {
        if(score > highscore_pic_comp )
            highscore_pic_comp = score;

        printf("High score= %d",highscore_pic_comp);
        iShowBMP(0,0,"bc\\Time over.jpg");
        iSetColor(255,255,255);
        iText(310,223,scr_match_pic_comp,GLUT_BITMAP_TIMES_ROMAN_24);

        }
        else if (cnt >0)
        {
            if(score > highscore_pic_fun )
            highscore_pic_fun = score;
            iShowBMP(0,0,"bc\\Well done.jpg");
        iSetColor(255,255,255);
        iText(310,223,scr_match_pic_fun,GLUT_BITMAP_TIMES_ROMAN_24);
        }

        iSetColor(255,255,255);
        iText(310,333,scr_match,GLUT_BITMAP_TIMES_ROMAN_24);

        if((a>= 550 && a<= 850) && (b>=45 && b<= 120))
        {
           for(int o=0; o<=26; o++)
            {
                s[o]=pictoletindex;
            }
            restart();

        }

        if((a>= 135 && a<= 435) && (b>=45 && b<= 120))
        {
            for(int o=0; o<=26; o++)
            {
                s[o]=pictoletindex;
            }

            restart();
            game_state2 = 1;
            game_state = 3;

        }

    }
}





int arr()
{
    for(int i=0; i<6; i++)
    {
        color_red[i]=252;
        color_green[i]=170;
        color_blue[i]=153;
    }
}

int flag_left_1(int mou_x, int mou_y)
{
    if((mou_x<=x_left+10 && mou_x>=x_left-10) )

    {
        if(mou_y >= 450 && mou_y <= 470)
        {
            return 1;
        }

    }
    else
    {
        return 0;
    }
}

int flag_left_2(int mou_x, int mou_y)
{
    if((mou_x<=x_left+10 && mou_x>=x_left-10) )

    {
        if(mou_y >= 270 && mou_y <= 290)
        {
            return 1;
        }

    }
    else
    {
        return 0;
    }
}

int flag_left_3(int mou_x, int mou_y)
{
    if((mou_x<=x_left+10 && mou_x>=x_left-10) )

    {
        if(mou_y >= 105 && mou_y <= 125)
        {
            return 1;
        }

    }
    else return 0;

}

int flag_right_4(int mou_x, int mou_y)
{
    if(mou_x <=x_right+10 && mou_x>= x_right-10)
    {
        if(mou_y >= 450 && mou_y <= 470)
        {
            return 1;
        }
    }
    else return 0;
}

int flag_right_5(int mou_x, int mou_y)
{
    if(mou_x <=x_right+10 && mou_x>= x_right-10)
    {
        if(mou_y >= 270 && mou_y <= 290)
        {
            return 1;
        }
    }
    else return 0;
}

int flag_right_6(int mou_x,int mou_y)
{
    if(mou_x <=x_right+10 && mou_x>= x_right-10)
    {
        if(mou_y >= 105 && mou_y <= 125)
        {
            return 1;
        }
    }
    else return 0;
}

int flag_right_7_2(int mou_x,int mou_y)
{
    if(mou_x <=x_right+10 && mou_x>= x_right-10)
    {
        if(mou_y >= 73 && mou_y <= 93)
        {
            return 1;
        }
    }
    else return 0;
}

int flag_right_6_2(int mou_x,int mou_y)
{
    if(mou_x <=x_right+10 && mou_x>= x_right-10)
    {
        if(mou_y >= 205 && mou_y <= 225)
        {
            return 1;
        }
    }
    else return 0;
}

int flag_right_5_2(int mou_x,int mou_y)
{
    if(mou_x <=x_right+10 && mou_x>= x_right-10)
    {
        if(mou_y >=337  && mou_y <= 357)
        {
            return 1;
        }
    }
    else return 0;
}

int flag_right_4_2(int mou_x,int mou_y)
{
    if(mou_x <=x_right+10 && mou_x>= x_right-10)
    {
        if(mou_y >= 469 && mou_y <= 489)
        {
            return 1;
        }
    }
    else return 0;
}

int flag_right_8_3(int mou_x,int mou_y)
{
    if(mou_x <=x_right+10 && mou_x>= x_right-10)
    {
        if(mou_y >= 73 && mou_y <= 93)
        {
            return 1;
        }
    }
    else return 0;
}

int flag_right_7_3(int mou_x,int mou_y)
{
    if(mou_x <=x_right+10 && mou_x>= x_right-10)
    {
        if(mou_y >= 172 && mou_y <= 192)
        {
            return 1;
        }
    }
    else return 0;
}

int flag_right_5_3(int mou_x,int mou_y)
{
    if(mou_x <=x_right+10 && mou_x>= x_right-10)
    {
        if(mou_y >= 370 && mou_y <= 390)
        {
            return 1;
        }
    }
    else return 0;
}

int flag_right_6_3(int mou_x,int mou_y)
{
    if(mou_x <=x_right+10 && mou_x>= x_right-10)
    {
        if(mou_y >=271  && mou_y <= 291)
        {
            return 1;
        }
    }
    else return 0;
}

int flag_right_4_3(int mou_x,int mou_y)
{
    if(mou_x <=x_right+10 && mou_x>= x_right-10)
    {
        if(mou_y >= 469 && mou_y <= 489)
        {
            return 1;
        }
    }
    else return 0;
}

void tick()
{
    iShowBMP2(420,0,"bc\\Tick2.bmp",0);
}

void cross()
{
    iShowBMP2(420,0,"bc\\cross2.bmp",0);
}

void matching(int p,int q,int  r,int s,int t,int u,int *x,int *y,int *z)
{
    sprintf(scr_match,"Score : %d",score_match);


    iShowBMP(0,0,"bc\\crisscross\\bg2.jpg");
    iShowBMP2(205,392,bc[p],0);
    iShowBMP2(205,227,bc[q],0);
    iShowBMP2(205,62,bc[r],0);

    iShowBMP2(590,392,bc2[s],0);
    iShowBMP2(590,227,bc2[t],0);
    iShowBMP2(590,62,bc2[u],0);


    //iShowBMP2(896,238,"bc\\crisscross\\next option.jpg",0);


    iText(800,500,scr_match,GLUT_BITMAP_TIMES_ROMAN_24);

    iSetColor(color_red_1,color_green_1,color_blue_1);
    iFilledCircle(x_left,460,10,1000);
    iSetColor(0,0,0);
    iCircle(x_left,460,10,1000);

    iSetColor(color_red_2,color_green_2,color_blue_2);
    iFilledCircle(x_left,280,10,1000);
    iSetColor(0,0,0);
    iCircle(x_left,280,10,1000);

    iSetColor(color_red_3,color_green_3,color_blue_3);
    iFilledCircle(x_left,115,10,1000);
    iSetColor(0,0,0);
    iCircle(x_left,115,10,1000);

    iSetColor(color_red_4,color_green_4,color_blue_4);
    iFilledCircle(x_right,460,10,1000);
    iSetColor(0,0,0);
    iCircle(x_right,460,10,1000);

    iSetColor(color_red_5,color_green_5,color_blue_5);
    iFilledCircle(x_right,280,10,1000);
    iSetColor(0,0,0);
    iCircle(x_right,280,10,1000);

    iSetColor(color_red_6,color_green_6,color_blue_6);
    iFilledCircle(x_right,115,10,1000);
    iSetColor(0,0,0);
    iCircle(x_right,115,10,1000);

    flag_l_1= flag_left_1(mouse_x,mouse_y);
    flag_l_2= flag_left_2(mouse_x,mouse_y);
    flag_l_3= flag_left_3(mouse_x,mouse_y);
    flag_r_4= flag_right_4(mouse_x, mouse_y);
    flag_r_5 = flag_right_5(mouse_x, mouse_y);
    flag_r_6 = flag_right_6(mouse_x, mouse_y);

    if(flag_l_1 == 1 && done_l_1==0)
    {
        color_red_1 = 0;
        color_blue_1= 0;
        color_green_1 = 255;
        p1=true;
        p1_cross=false;
        p2_cross=false;
        p3_cross=false;
        p1_tick=false;
        p2_tick=false;
        p3_tick=false;
    }

    if(p1==1 || p1_extra==1 )
    {
        if(p1_extra != 1)
        {
            iLine(x_left,460,mouse_x,mouse_y);
        }
        else
        {
            if(gamestate4_1 > 0)
            {
                if(x == &flag_r_6)
                    iLine(x_left,460,x_right,115);
                if(x == &flag_r_5)
                    iLine(x_left,460,x_right,280);
                if(x == &flag_r_4)
                    iLine(x_left,460,x_right,460);
            }
        }

        if(x == &flag_r_6)
        {
            if(*x == 1 && done_r_6==0)
            {
                color_red_6 = 0;
                color_blue_6= 0;
                color_green_6 =255;
                p1=false;
                //iShowBMP2(420,0,"bc\\Tick2.bmp",0);
                p1_extra = true;
                done_l_1++;
                done_r_6++;
                p1_tick=true;
                score_match += 20;
            }
            else if((flag_r_4 == 1 || flag_r_5 == 1 || flag_l_2 == 1 || flag_l_3 == 1) && p1_extra !=1)
            {
                color_red_1 = 252;
                color_blue_1= 170;
                color_green_1 = 153;
                p1=false;
                p1_cross=true;
                score_match -= 15;
                flag_r_4 == 0;
                flag_r_5 == 0;
                flag_l_2 == 0;
                flag_l_3 == 0;

            }
        }
        else if( x == &flag_r_5)
        {
            if(*x == 1 && done_r_5==0)
            {
                color_red_5 = 0;
                color_blue_5= 0;
                color_green_5 =255;
                p1=false;
                //iShowBMP2(420,0,"bc\\Tick2.bmp",0);
                p1_extra = true;
                done_l_1++;
                done_r_5++;
                p1_tick=true;
                score_match += 20;
            }
            else if((flag_r_4 == 1 || flag_r_6 == 1 || flag_l_2 == 1 || flag_l_3 == 1) && p1_extra !=1)
            {
                color_red_1 = 252;
                color_blue_1= 170;
                color_green_1 = 153;
                p1=false;
                p1_cross=true;
                score_match -= 15;
                flag_r_4= 0;
                flag_r_6 = 0;
                flag_l_2 = 0;
                flag_l_3 = 0;

            }
        }

        else if( x == &flag_r_4)
        {
            if(*x == 1 && done_r_4==0)
            {
                color_red_4 = 0;
                color_blue_4= 0;
                color_green_4 =255;
                p1=false;
                //iShowBMP2(420,0,"bc\\Tick2.bmp",0);
                p1_extra = true;
                done_l_1++;
                done_r_4++;
                p1_tick=true;
                score_match += 20;
            }
            else if((flag_r_5 == 1 || flag_r_6 == 1 || flag_l_2 == 1 || flag_l_3 == 1) && p1_extra !=1)
            {
                color_red_1 = 252;
                color_blue_1= 170;
                color_green_1 = 153;
                p1=false;
                p1_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_6 = 0;
                flag_l_2 = 0;
                flag_l_3 = 0;

            }
        }
    }

    if(p1_cross == true)
    {
        p2_tick=false;
        p3_tick=false;
        iShowBMP2(420,0,"bc\\cross2.bmp",0);
        //score_match -= 20;
    }
    if(p1_tick)
    {
        tick();
        //score_match += 20;
    }


    if(flag_l_2 == 1 && done_l_2==0)
    {
        color_red_2 = 0;
        color_blue_2= 0;
        color_green_2 = 255;

        p2=true;
        p1_cross=false;
        p2_cross=false;
        p3_cross=false;
        p1_tick=false;
        p2_tick=false;
        p3_tick=false;
    }

    if(p2==1 || p2_extra==1)
    {
        if(p2_extra != 1)
        {
            iLine(x_left,280,mouse_x,mouse_y);
        }
        else
        {
            if(gamestate4_1)
            {
                if(y == &flag_r_6)
                    iLine(x_left,280,x_right,115);
                if(y == &flag_r_5)
                    iLine(x_left,280,x_right,280);
                if(y == &flag_r_4)
                    iLine(x_left,280,x_right,460);
            }
        }

        if( y == &flag_r_6)
        {
            if(*y == 1 && done_r_6==0)
            {
                color_red_6 = 0;
                color_blue_6= 0;
                color_green_6 =255;
                p2=false;
                p2_extra = true;
                done_l_2++;
                done_r_6++;
                p2_tick=true;
                score_match += 20;
            }
            else if((flag_r_5 == 1 || flag_r_4 == 1 || flag_l_1 == 1 || flag_l_3 == 1) && p2_extra !=1)
            {
                color_red_2 = 252;
                color_blue_2= 170;
                color_green_2 = 153;
                p2=false;
                p2_cross=true;
                flag_r_4 == 0;
                flag_r_5 == 0;
                flag_l_1 == 0;
                flag_l_3 == 0;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_4 = 0;
                flag_l_1 = 0;
                flag_l_3 = 0;

            }
        }

        if( y == &flag_r_5)
        {
            if(*y == 1 && done_r_5==0)
            {
                color_red_5 = 0;
                color_blue_5= 0;
                color_green_5 =255;
                p2=false;
                p2_extra = true;
                done_l_2++;
                done_r_5++;
                p2_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_4 == 1 || flag_l_1 == 1 || flag_l_3 == 1) && p2_extra !=1)
            {
                color_red_2 = 252;
                color_blue_2= 170;
                color_green_2 = 153;
                p2=false;
                p2_cross=true;
                flag_r_4 == 0;
                flag_r_6 == 0;
                flag_l_1 == 0;
                flag_l_3 == 0;
                score_match -= 15;
                flag_r_6 = 0;
                flag_r_4 = 0;
                flag_l_1 = 0;
                flag_l_3 = 0;

            }
        }

        if( y == &flag_r_4)
        {
            if(*y == 1 && done_r_4==0)
            {
                color_red_4 = 0;
                color_blue_4= 0;
                color_green_4 =255;
                p2=false;
                p2_extra = true;
                done_l_2++;
                done_r_4++;
                p2_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_5 == 1 || flag_l_1 == 1 || flag_l_3 == 1) && p2_extra !=1)
            {
                color_red_2 = 252;
                color_blue_2= 170;
                color_green_2 = 153;
                p2=false;
                p2_cross=true;
                flag_r_5 == 0;
                flag_r_6 == 0;
                flag_l_1 == 0;
                flag_l_3 == 0;
                score_match -= 15;
                flag_r_6= 0;
                flag_r_5 = 0;
                flag_l_1 = 0;
                flag_l_3 = 0;
            }
        }
    }
    if(p2_cross == true)
    {
        p1_tick=false;
        p3_tick=false;
        iShowBMP2(420,0,"bc\\cross2.bmp",0);
        //score_match -= 20;
    }
    if(p2_tick)
    {
        tick();
//score_match -= 20;
    }

    if(flag_l_3 == 1 && done_l_3 ==0 )
    {

        color_red_3 = 0;
        color_blue_3= 0;
        color_green_3 = 255;
        p3=true;
        p1_cross=false;
        p2_cross=false;
        p3_cross=false;
        p1_tick=false;
        p2_tick=false;
        p3_tick=false;
    }

    if(p3==1 || p3_extra==1)
    {
        if(p3_extra != 1)
        {
            iLine(x_left,115,mouse_x,mouse_y);
        }
        else
        {
            if(gamestate4_1)
            {
                if(z == &flag_r_6)
                    iLine(x_left,115,x_right,115);
                if(z == &flag_r_5)
                    iLine(x_left,115,x_right,280);
                if(z == &flag_r_4)
                    iLine(x_left,115,x_right,460);
            }
        }
        if( z == &flag_r_6)
        {
            if(*z == 1 && done_r_6==0)
            {
                color_red_6 = 0;
                color_blue_6= 0;
                color_green_6 =255;
                p3=false;
                p3_extra = true;
                done_l_3++;
                done_r_6++;
                p3_tick=true;
                score_match += 20;
            }
            else if((flag_r_4 == 1 || flag_r_5 == 1 || flag_l_1 == 1 || flag_l_2 == 1) && p3_extra != 1)
            {
                color_red_3 = 252;
                color_blue_3= 170;
                color_green_3 = 153;
                p3=false;
                p3_cross=true;
                score_match -= 15;
                flag_r_5 == 0;
                flag_r_4 == 0;
                flag_l_1 == 0;
                flag_l_2 == 0;
            }
        }

        if( z == &flag_r_5)
        {
            if(*z == 1 && done_r_5==0)
            {
                color_red_5 = 0;
                color_blue_5= 0;
                color_green_5 =255;
                p3=false;
                p3_extra = true;
                done_l_3++;
                done_r_5++;
                p3_tick=true;
                score_match += 20;
            }
            else if((flag_r_4 == 1 || flag_r_6 == 1 || flag_l_1 == 1 || flag_l_2 == 1) && p3_extra != 1)
            {
                color_red_3 = 252;
                color_blue_3= 170;
                color_green_3 = 153;
                p3=false;
                p3_cross=true;
                score_match -= 15;
                flag_r_4 == 0;
                flag_r_6 == 0;
                flag_l_1 == 0;
                flag_l_2 == 0;
            }
        }

        if( z == &flag_r_4)
        {
            if(*z == 1 && done_r_4==0)
            {
                color_red_4 = 0;
                color_blue_4= 0;
                color_green_4 =255;
                p3=false;
                p3_extra = true;
                done_l_3++;
                done_r_4++;
                p3_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_5 == 1 || flag_l_1 == 1 || flag_l_2 == 1) && p3_extra != 1)
            {
                color_red_3 = 252;
                color_blue_3= 170;
                color_green_3 = 153;
                p3=false;
                p3_cross=true;
                score_match -= 15;
                flag_r_5 == 0;
                flag_r_6 == 0;
                flag_l_1 == 0;
                flag_l_2 == 0;

            }
        }
    }

    if(p3_cross == true)
    {
        p2_tick=false;
        p1_tick=false;
        iShowBMP2(420,0,"bc\\cross2.bmp",0);
        //score_match -= 20;

    }
    if(p3_tick)
    {
        tick();
        //score_match += 20;
    }

    if(done_l_1 && done_l_2 && done_l_3)
    {
        if((a>=923 && a<=1000) && (b>=243 && b<=320))
        {
            gamestate4_1 ++;
//        if(gamestate4_1 == 5)
//        {
//            iShowBMP(0,0,"bc\\Well done.jpg");
//            iText(200,800,scr_match,GLUT_BITMAP_TIMES_ROMAN_24);
//
//        }
            done_l_1 = 0;
            done_l_2 = 0;
            done_l_3 = 0;
            p1=false;
            p2 = false;
            p3 = false;
            p1_extra = false;
            p2_extra = false;
            p3_extra = false;
            p1_tick = false;
            p2_tick = false;
            p3_tick = false;
            p1_cross = false;
            p2_cross = false;
            p3_cross = false;
            done_l_1=0;
            done_l_2=0;
            done_l_3=0;
            done_r_4=0;
            done_r_5=0;
            done_r_6=0;
            color_red_1=252;
            color_green_1=170;
            color_blue_1=153;
            color_red_2=252;
            color_green_2=170;
            color_blue_2=153;
            color_red_3=252;
            color_green_3=170;
            color_blue_3=153;
            color_red_4=252;
            color_green_4=170;
            color_blue_4=153;
            color_red_5=252;
            color_green_5=170;
            color_blue_5=153;
            color_red_6=252;
            color_green_6=170;
            color_blue_6=153;
        }
    }



    if(gamestate4_1 == 5)
    {

        sprintf(scr_match2,"%d",score_match);
        iShowBMP(0,0,"bc\\crisscross\\2.jpg");
        iSetColor(255,255,255);
        iText(350,310,scr_match2,GLUT_BITMAP_TIMES_ROMAN_24);

        if((a>= 135 && a<= 435) && (b>=45 && b<= 120))
        {
            gamestate4_1 = 0;
            gamestate4 = 1;
            score_match = 0;
        }

        if((a>= 550 && a<= 850) && (b>=45 && b<= 120))
        {
            gamestate4_1 = 0;
            gamestate4 = 0;
            game_state = 1;
            score_match = 0;
        }


    }

    if((a>=0 && a<=67) && (b>=506 && b<=563))
    {

        gamestate4_1 = 0;
        gamestate4 = 0;
        game_state = 4;
        score_match = 0;
        done_l_1 = 0;
        done_l_2 = 0;
        done_l_3 = 0;
        p1=false;
        p2 = false;
        p3 = false;
        p1_extra = false;
        p2_extra = false;
        p3_extra = false;
        p1_tick = false;
        p2_tick = false;
        p3_tick = false;
        p1_cross = false;
        p2_cross = false;
        p3_cross = false;
        done_l_1=0;
        done_l_2=0;
        done_l_3=0;
        done_r_4=0;
        done_r_5=0;
        done_r_6=0;
        color_red_1=252;
        color_green_1=170;
        color_blue_1=153;
        color_red_2=252;
        color_green_2=170;
        color_blue_2=153;
        color_red_3=252;
        color_green_3=170;
        color_blue_3=153;
        color_red_4=252;
        color_green_4=170;
        color_blue_4=153;
        color_red_5=252;
        color_green_5=170;
        color_blue_5=153;
        color_red_6=252;
        color_green_6=170;
        color_blue_6=153;
    }



}

void matching_5(int p,int q,int  r,int s,int t,int u,int v,int w,int *x,int *y,int *z)
{
    sprintf(scr_match,"Score : %d",score_match);

    iShowBMP(0,0,"bc\\crisscross\\bg2.jpg");
    iShowBMP2(205,392,bc[p],0);
    iShowBMP2(205,227,bc[q],0);
    iShowBMP2(205,62,bc[r],0);

    iShowBMP2(590,436,bc3[s],0);
    iShowBMP2(590,337,bc3[t],0);//10 kore barano hoyeche
    iShowBMP2(590,238,bc3[u],0);
    iShowBMP2(590,139,bc3[v],0);
    iShowBMP2(590,40,bc3[w],0);
    //iShowBMP2(896,238,"bc\\crisscross\\next option.jpg",0);

    iText(800,500,scr_match,GLUT_BITMAP_TIMES_ROMAN_24);


//left
    iSetColor(color_red_1,color_green_1,color_blue_1);
    iFilledCircle(x_left,460,10,1000);
    iSetColor(0,0,0);
    iCircle(x_left,460,10,1000);

    iSetColor(color_red_2,color_green_2,color_blue_2);
    iFilledCircle(x_left,280,10,1000);
    iSetColor(0,0,0);
    iCircle(x_left,280,10,1000);

    iSetColor(color_red_3,color_green_3,color_blue_3);
    iFilledCircle(x_left,115,10,1000);
    iSetColor(0,0,0);
    iCircle(x_left,115,10,1000);

//right
    iSetColor(color_red_4,color_green_4,color_blue_4);
    iFilledCircle(x_right,479,10,1000);
    iSetColor(0,0,0);
    iCircle(x_right,479,10,1000);

    iSetColor(color_red_5,color_green_5,color_blue_5);
    iFilledCircle(x_right,380,10,1000);
    iSetColor(0,0,0);
    iCircle(x_right,380,10,1000);

    iSetColor(color_red_6,color_green_6,color_blue_6);
    iFilledCircle(x_right,281,10,1000);
    iSetColor(0,0,0);
    iCircle(x_right,281,10,1000);

    iSetColor(color_red_7,color_green_7,color_blue_7);
    iFilledCircle(x_right,182,10,1000);
    iSetColor(0,0,0);
    iCircle(x_right,182,10,1000);

    iSetColor(color_red_8,color_green_8,color_blue_8);
    iFilledCircle(x_right,83,10,1000);
    iSetColor(0,0,0);
    iCircle(x_right,83,10,1000);

    flag_l_1= flag_left_1(mouse_x,mouse_y);
    flag_l_2= flag_left_2(mouse_x,mouse_y);
    flag_l_3= flag_left_3(mouse_x,mouse_y);
    flag_r_4= flag_right_4_3(mouse_x, mouse_y);
    flag_r_5= flag_right_5_3(mouse_x, mouse_y);
    flag_r_6= flag_right_6_3(mouse_x, mouse_y);
    flag_r_7= flag_right_7_3(mouse_x, mouse_y);
    flag_r_8= flag_right_8_3(mouse_x,mouse_y);

    if(flag_l_1 == 1 && done_l_1==0)
    {
        color_red_1 = 0;
        color_blue_1= 0;
        color_green_1 = 255;
        p1=true;
        p1_cross=false;
        p2_cross=false;
        p3_cross=false;
        p1_tick=false;
        p2_tick=false;
        p3_tick=false;
    }

    if(p1==1 || p1_extra==1 )
    {
        if(p1_extra != 1)
        {
            iLine(x_left,460,mouse_x,mouse_y);
        }
        else
        {
            if(gamestate4_3 > 0)
            {
                if(x == &flag_r_8)
                    iLine(x_left,460,x_right,83);
                if(x == &flag_r_7)
                    iLine(x_left,460,x_right,182);
                if(x == &flag_r_6)
                    iLine(x_left,460,x_right,281);
                if(x == &flag_r_5)
                    iLine(x_left,460,x_right,380);
                if(x == &flag_r_4)
                    iLine(x_left,460,x_right,479);
            }
        }

        if(x == &flag_r_6)
        {
            if(*x == 1 && done_r_6 == 0)
            {
                color_red_6 = 0;
                color_blue_6= 0;
                color_green_6 =255;
                p1=false;
                //iShowBMP2(420,0,"bc\\Tick2.bmp",0);
                p1_extra = true;
                done_l_1++;
                done_r_6++;
                p1_tick=true;
                score_match += 20;
            }
            else if((flag_r_4 == 1 || flag_r_5 == 1  || flag_r_7 == 1 || flag_r_8 == 1 || flag_l_2 == 1 || flag_l_3 == 1) && p1_extra !=1)
            {
                color_red_1 = 252;
                color_blue_1= 170;
                color_green_1 = 153;
                p1=false;
                p1_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_4 = 0;
                flag_r_7 = 0;
                flag_r_8 = 0;
                flag_l_2 = 0;
                flag_l_3 = 0;
            }
        }
        else if( x == &flag_r_5)
        {
            if(*x == 1 && done_r_5==0)
            {
                color_red_5 = 0;
                color_blue_5= 0;
                color_green_5 =255;
                p1=false;
                //iShowBMP2(420,0,"bc\\Tick2.bmp",0);
                p1_extra = true;
                done_l_1++;
                done_r_5++;
                p1_tick=true;
                score_match += 20;
            }
            else if((flag_r_4 == 1 || flag_r_6 == 1  || flag_r_7 == 1 || flag_r_8== 1 || flag_l_2 == 1 || flag_l_3 == 1) && p1_extra !=1)
            {
                color_red_1 = 252;
                color_blue_1= 170;
                color_green_1 = 153;
                p1=false;
                p1_cross=true;
                score_match -= 15;
                flag_r_4 = 0;
                flag_r_6 = 0;
                flag_r_7 = 0;
                flag_r_8 = 0;
                flag_l_2 = 0;
                flag_l_3 = 0;
            }
        }

        else if( x == &flag_r_4)
        {
            if(*x == 1 && done_r_4==0)
            {
                color_red_4 = 0;
                color_blue_4= 0;
                color_green_4 =255;
                p1=false;
                //iShowBMP2(420,0,"bc\\Tick2.bmp",0);
                p1_extra = true;
                done_l_1++;
                done_r_4++;
                p1_tick=true;
                score_match += 20;
            }
            else if((flag_r_5 == 1 || flag_r_6 == 1  || flag_r_7== 1 || flag_r_8 == 1 || flag_l_2 == 1 || flag_l_3 == 1) && p1_extra !=1)
            {
                color_red_1 = 252;
                color_blue_1= 170;
                color_green_1 = 153;
                p1=false;
                p1_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_6 = 0;
                flag_r_7= 0;
                flag_r_8 = 0;
                flag_l_2 = 0;
                flag_l_3 = 0;
            }
        }

        else if( x == &flag_r_7)
        {
            if(*x == 1 && done_r_7==0)
            {
                color_red_7 = 0;
                color_blue_7= 0;
                color_green_7 =255;
                p1=false;
                //iShowBMP2(420,0,"bc\\Tick2.bmp",0);
                p1_extra = true;
                done_l_1++;
                done_r_7++;
                p1_tick=true;
                score_match += 20;
            }
            else if((flag_r_5 == 1 || flag_r_6 == 1 || flag_r_4 == 1 || flag_r_8 == 1  || flag_l_2 == 1 || flag_l_3 == 1) && p1_extra !=1)
            {
                color_red_1 = 252;
                color_blue_1= 170;
                color_green_1 = 153;
                p1=false;
                p1_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_6 = 0;
                flag_r_4 = 0;
                flag_r_8 = 0;
                flag_l_2 = 0;
                flag_l_3 = 0;
            }
        }

        else if( x == &flag_r_8)
        {
            if(*x == 1 && done_r_8==0)
            {
                color_red_8 = 0;
                color_blue_8= 0;
                color_green_8 =255;
                p1=false;
                //iShowBMP2(420,0,"bc\\Tick2.bmp",0);
                p1_extra = true;
                done_l_1++;
                done_r_8++;
                p1_tick=true;
                score_match += 20;
            }
            else if((flag_r_5 == 1 || flag_r_6 == 1 || flag_r_4 == 1 || flag_r_7 == 1  || flag_l_2 == 1 || flag_l_3 == 1) && p1_extra !=1)
            {
                color_red_1 = 252;
                color_blue_1= 170;
                color_green_1 = 153;
                p1=false;
                p1_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_4 = 0;
                flag_r_6 = 0;
                flag_r_7 = 0;
                flag_l_2 = 0;
                flag_l_3 = 0;
            }
        }
    }

    if(p1_cross == true)
    {
        p2_tick=false;
        p3_tick=false;
        iShowBMP2(420,0,"bc\\cross2.bmp",0);
    }
    if(p1_tick)
    {
        tick();
    }


    if(flag_l_2 == 1 && done_l_2==0)
    {
        color_red_2 = 0;
        color_blue_2= 0;
        color_green_2 = 255;

        p2=true;
        p1_cross=false;
        p2_cross=false;
        p3_cross=false;
        p1_tick=false;
        p2_tick=false;
        p3_tick=false;
    }

    if(p2==1 || p2_extra==1)
    {
        if(p2_extra != 1)
        {
            iLine(x_left,280,mouse_x,mouse_y);
        }
        else
        {
            if(gamestate4_3 > 0)
            {
                if(y == &flag_r_8)
                    iLine(x_left,280,x_right,83);
                if(y == &flag_r_7)
                    iLine(x_left,280,x_right,182);
                if(y == &flag_r_6)
                    iLine(x_left,280,x_right,281);
                if(y == &flag_r_5)
                    iLine(x_left,280,x_right,380);
                if(y == &flag_r_4)
                    iLine(x_left,280,x_right,479);
            }
        }

        if( y == &flag_r_6)
        {
            if(*y == 1 && done_r_6==0)
            {
                color_red_6 = 0;
                color_blue_6= 0;
                color_green_6 =255;
                p2=false;
                p2_extra = true;
                done_l_2++;
                done_r_6++;
                p2_tick=true;
                score_match += 20;
            }
            else if((flag_r_5 == 1 || flag_r_4 == 1 || flag_r_7 == 1 || flag_r_8 == 1 || flag_l_1 == 1 || flag_l_3 == 1) && p2_extra !=1)
            {
                color_red_2 = 252;
                color_blue_2= 170;
                color_green_2 = 153;
                p2=false;
                p2_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_4 = 0;
                flag_r_7 = 0;
                flag_r_8 = 0;
                flag_l_1 = 0;
                flag_l_3 = 0;
            }
        }

        if( y == &flag_r_5)
        {
            if(*y == 1 && done_r_5==0)
            {
                color_red_5 = 0;
                color_blue_5= 0;
                color_green_5 =255;
                p2=false;
                p2_extra = true;
                done_l_2++;
                done_r_5++;
                p2_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_4 == 1 || flag_r_7 == 1 || flag_r_8 == 1 || flag_l_1 == 1 || flag_l_3 == 1) && p2_extra !=1)
            {
                color_red_2 = 252;
                color_blue_2= 170;
                color_green_2 = 153;
                p2=false;
                p2_cross=true;
                score_match -= 15;
                flag_r_6 = 0;
                flag_r_4 = 0;
                flag_r_7 = 0;
                flag_r_8 = 0;
                flag_l_1 = 0;
                flag_l_3 = 0;
            }
        }

        if( y == &flag_r_4)
        {
            if(*y == 1 && done_r_4==0)
            {
                color_red_4 = 0;
                color_blue_4= 0;
                color_green_4 =255;
                p2=false;
                p2_extra = true;
                done_l_2++;
                done_r_4++;
                p2_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_5 == 1 || flag_r_7 == 1 || flag_r_8 == 1 || flag_l_1 == 1 || flag_l_3 == 1) && p2_extra !=1)
            {
                color_red_2 = 252;
                color_blue_2= 170;
                color_green_2 = 153;
                p2=false;
                p2_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_6 = 0;
                flag_r_7 = 0;
                flag_r_8 = 0;
                flag_l_1 = 0;
                flag_l_3 = 0;
            }

        }

        if( y == &flag_r_7)
        {
            if(*y == 1 && done_r_7==0)
            {
                color_red_7 = 0;
                color_blue_7= 0;
                color_green_7 =255;
                p2=false;
                p2_extra = true;
                done_l_2++;
                done_r_7++;
                p2_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_5 == 1 || flag_r_4 == 1 || flag_r_8 == 1 || flag_l_1 == 1 || flag_l_3 == 1) && p2_extra !=1)
            {
                color_red_2 = 252;
                color_blue_2= 170;
                color_green_2 = 153;
                p2=false;
                p2_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_6 = 0;
                flag_r_8 = 0;
                flag_r_4 = 0;
                flag_l_1 = 0;
                flag_l_3 = 0;
            }

        }

        if( y == &flag_r_8)
        {
            if(*y == 1 && done_r_8==0)
            {
                color_red_8 = 0;
                color_blue_8= 0;
                color_green_8 =255;
                p2=false;
                p2_extra = true;
                done_l_2++;
                done_r_8++;
                p2_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_5 == 1 || flag_r_4 == 1 || flag_r_7 == 1 || flag_l_1 == 1 || flag_l_3 == 1) && p2_extra !=1)
            {
                color_red_2 = 252;
                color_blue_2= 170;
                color_green_2 = 153;
                p2=false;
                p2_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_4 = 0;
                flag_r_6 = 0;
                flag_r_7 = 0;
                flag_l_1 = 0;
                flag_l_3 = 0;
            }

        }
    }
    if(p2_cross == true)
    {
        p1_tick=false;
        p3_tick=false;
        iShowBMP2(420,0,"bc\\cross2.bmp",0);
    }
    if(p2_tick)
        tick();

    if(flag_l_3 == 1 && done_l_3 ==0 )
    {

        color_red_3 = 0;
        color_blue_3= 0;
        color_green_3 = 255;
        p3=true;
        p1_cross=false;
        p2_cross=false;
        p3_cross=false;
        p1_tick=false;
        p2_tick=false;
        p3_tick=false;
    }

    if(p3==1 || p3_extra==1)
    {
        if(p3_extra != 1)
        {
            iLine(x_left,115,mouse_x,mouse_y);
        }
        else
        {
            if(gamestate4_3 > 0)
            {
                if(z == &flag_r_8)
                    iLine(x_left,115,x_right,83);
                if(z == &flag_r_7)
                    iLine(x_left,115,x_right,182);
                if(z == &flag_r_6)
                    iLine(x_left,115,x_right,281);
                if(z == &flag_r_5)
                    iLine(x_left,115,x_right,380);
                if(z == &flag_r_4)
                    iLine(x_left,115,x_right,479);
            }
        }
        if( z == &flag_r_6)
        {
            if(*z == 1 && done_r_6==0)
            {
                color_red_6 = 0;
                color_blue_6= 0;
                color_green_6 =255;
                p3=false;
                p3_extra = true;
                done_l_3++;
                done_r_6++;
                p3_tick=true;
                score_match += 20;
            }
            else if((flag_r_4 == 1 || flag_r_5 == 1 || flag_r_7 == 1 || flag_r_8 == 1 || flag_l_1 == 1 || flag_l_2 == 1) && p3_extra != 1)
            {
                color_red_3 = 252;
                color_blue_3= 170;
                color_green_3 = 153;
                p3=false;
                p3_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_4 = 0;
                flag_r_7 = 0;
                flag_r_8 = 0;
                flag_l_1 = 0;
                flag_l_2 = 0;
            }
        }

        if( z == &flag_r_5)
        {
            if(*z == 1 && done_r_5==0)
            {
                color_red_5 = 0;
                color_blue_5= 0;
                color_green_5 =255;
                p3=false;
                p3_extra = true;
                done_l_3++;
                done_r_5++;
                p3_tick=true;
                score_match += 20;
            }
            else if((flag_r_4 == 1 || flag_r_6 == 1 || flag_r_7 == 1 || flag_r_8 == 1 || flag_l_1 == 1 || flag_l_2 == 1) && p3_extra != 1)
            {
                color_red_3 = 252;
                color_blue_3= 170;
                color_green_3 = 153;
                p3=false;
                p3_cross=true;
                score_match -= 15;
                flag_r_7 = 0;
                flag_r_4 = 0;
                flag_r_6 = 0;
                flag_r_8 = 0;
                flag_l_1 = 0;
                flag_l_2 = 0;
            }
        }

        if( z == &flag_r_4)
        {
            if(*z == 1 && done_r_4==0)
            {
                color_red_4 = 0;
                color_blue_4= 0;
                color_green_4 =255;
                p3=false;
                p3_extra = true;
                done_l_3++;
                done_r_4++;
                p3_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_5 == 1 || flag_r_7 == 1 || flag_r_8 == 1 || flag_l_1 == 1 || flag_l_2 == 1) && p3_extra != 1)
            {
                color_red_3 = 252;
                color_blue_3= 170;
                color_green_3 = 153;
                p3=false;
                p3_cross=true;
                score_match -= 15;
                flag_r_7 = 0;
                flag_r_5 = 0;
                flag_r_6 = 0;
                flag_r_8 = 0;
                flag_l_1 = 0;
                flag_l_2 = 0;

            }
        }

        if( z == &flag_r_7)
        {
            if(*z == 1 && done_r_7==0)
            {
                color_red_7 = 0;
                color_blue_7= 0;
                color_green_7 =255;
                p3=false;
                p3_extra = true;
                done_l_3++;
                done_r_7++;
                p3_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_5 == 1 || flag_r_4 == 1 || flag_r_8 == 1 || flag_l_1 == 1 || flag_l_2 == 1) && p3_extra != 1)
            {
                color_red_3 = 252;
                color_blue_3= 170;
                color_green_3 = 153;
                p3=false;
                p3_cross=true;
                score_match -= 15;
                flag_r_6= 0;
                flag_r_5 = 0;
                flag_r_4 = 0;
                flag_r_8 = 0;
                flag_l_1 = 0;
                flag_l_2 = 0;

            }
        }

        if( z == &flag_r_8)
        {
            if(*z == 1 && done_r_8==0)
            {
                color_red_8 = 0;
                color_blue_8= 0;
                color_green_8 =255;
                p3=false;
                p3_extra = true;
                done_l_3++;
                done_r_8++;
                p3_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_5 == 1 || flag_r_4 == 1 || flag_r_7 == 1 || flag_l_1 == 1 || flag_l_2 == 1) && p3_extra != 1)
            {
                color_red_3 = 252;
                color_blue_3= 170;
                color_green_3 = 153;
                p3=false;
                p3_cross=true;
                score_match -= 15;
                flag_r_6= 0;
                flag_r_5 = 0;
                flag_r_4 = 0;
                flag_r_7 = 0;
                flag_l_1 = 0;
                flag_l_2 = 0;
            }
        }
    }

    if(p3_cross == true)
    {
        p2_tick=false;
        p1_tick=false;
        iShowBMP2(420,0,"bc\\cross2.bmp",0);

    }
    if(p3_tick)
        tick();

    if(done_l_1 && done_l_2 && done_l_3)
    {

        if((a>=896 && a<=992) && (b>=238 && b<=335))
        {
            gamestate4_3 ++;

            done_l_1 = 0;
            done_l_2 = 0;
            done_l_3 = 0;
            p1=false;
            p2 = false;
            p3 = false;
            p1_extra = false;
            p2_extra = false;
            p3_extra = false;
            p1_tick = false;
            p2_tick = false;
            p3_tick = false;
            p1_cross = false;
            p2_cross = false;
            p3_cross = false;
            done_r_4=0;
            done_r_5=0;
            done_r_6=0;
            done_r_7=0;
            done_r_8=0;
            color_red_1=252;
            color_green_1=170;
            color_blue_1=153;
            color_red_2=252;
            color_green_2=170;
            color_blue_2=153;
            color_red_3=252;
            color_green_3=170;
            color_blue_3=153;
            color_red_4=252;
            color_green_4=170;
            color_blue_4=153;
            color_red_5=252;
            color_green_5=170;
            color_blue_5=153;
            color_red_6=252;
            color_green_6=170;
            color_blue_6=153;
            color_red_7=252;
            color_green_7=170;
            color_blue_7=153;
            color_red_8=252;
            color_green_8=170;
            color_blue_8=153;

        }

    }

    if(gamestate4_3 == 5)
    {
        sprintf(scr_match2,"%d",score_match);

        iShowBMP(0,0,"bc\\crisscross\\2.jpg");
        iSetColor(255,255,255);
        iText(350,310,scr_match2,GLUT_BITMAP_TIMES_ROMAN_24);
        if((a>= 135 && a<= 435) && (b>=45 && b<= 120))
        {
            gamestate4_3 = 0;
            gamestate4 = 1;
            score_match = 0;
        }

        if((a>= 550 && a<= 850) && (b>=45 && b<= 120))
        {
            gamestate4_3 = 0;
            gamestate4 = 0;
            game_state = 1;
            score_match = 0;
        }
    }

    if((a>=0 && a<=67) && (b>=506 && b<=563))
    {

        gamestate4_3 = 0;
        gamestate4 = 0;
        game_state = 4;
        score_match = 0;
        done_l_1 = 0;
        done_l_2 = 0;
        done_l_3 = 0;
        p1=false;
        p2 = false;
        p3 = false;
        p1_extra = false;
        p2_extra = false;
        p3_extra = false;
        p1_tick = false;
        p2_tick = false;
        p3_tick = false;
        p1_cross = false;
        p2_cross = false;
        p3_cross = false;
        done_r_4=0;
        done_r_5=0;
        done_r_6=0;
        done_r_7=0;
        done_r_8=0;
        color_red_1=252;
        color_green_1=170;
        color_blue_1=153;
        color_red_2=252;
        color_green_2=170;
        color_blue_2=153;
        color_red_3=252;
        color_green_3=170;
        color_blue_3=153;
        color_red_4=252;
        color_green_4=170;
        color_blue_4=153;
        color_red_5=252;
        color_green_5=170;
        color_blue_5=153;
        color_red_6=252;
        color_green_6=170;
        color_blue_6=153;
        color_red_7=252;
        color_green_7=170;
        color_blue_7=153;
        color_red_8=252;
        color_green_8=170;
        color_blue_8=153;
    }



}

void matching_4(int p,int q,int  r,int s,int t,int u,int v,int *x,int *y,int *z)
{
    sprintf(scr_match,"Score : %d",score_match);

    iShowBMP(0,0,"bc\\crisscross\\bg2.jpg");
    iShowBMP2(205,392,bc[p],0);
    iShowBMP2(205,227,bc[q],0);
    iShowBMP2(205,62,bc[r],0);

    iShowBMP2(590,426,bc2[s],0);
    iShowBMP2(590,294,bc2[t],0);
    iShowBMP2(590,162,bc2[u],0);
    iShowBMP2(590,30,bc2[v],0);
    //  iShowBMP2(896,238,"bc\\crisscross\\next option.jpg",0);


    iText(800,500,scr_match,GLUT_BITMAP_TIMES_ROMAN_24);



//left
    iSetColor(color_red_1,color_green_1,color_blue_1);
    iFilledCircle(x_left,460,10,1000);
    iSetColor(0,0,0);
    iCircle(x_left,460,10,1000);

    iSetColor(color_red_2,color_green_2,color_blue_2);
    iFilledCircle(x_left,280,10,1000);
    iSetColor(0,0,0);
    iCircle(x_left,280,10,1000);

    iSetColor(color_red_3,color_green_3,color_blue_3);
    iFilledCircle(x_left,115,10,1000);
    iSetColor(0,0,0);
    iCircle(x_left,115,10,1000);

//right
    iSetColor(color_red_4,color_green_4,color_blue_4);
    iFilledCircle(x_right,479,10,1000);
    iSetColor(0,0,0);
    iCircle(x_right,479,10,1000);

    iSetColor(color_red_5,color_green_5,color_blue_5);
    iFilledCircle(x_right,347,10,1000);
    iSetColor(0,0,0);
    iCircle(x_right,347,10,1000);

    iSetColor(color_red_6,color_green_6,color_blue_6);
    iFilledCircle(x_right,215,10,1000);
    iSetColor(0,0,0);
    iCircle(x_right,215,10,1000);

    iSetColor(color_red_7,color_green_7,color_blue_7);
    iFilledCircle(x_right,83,10,1000);
    iSetColor(0,0,0);
    iCircle(x_right,83,10,1000);

    flag_l_1= flag_left_1(mouse_x,mouse_y);
    flag_l_2= flag_left_2(mouse_x,mouse_y);
    flag_l_3= flag_left_3(mouse_x,mouse_y);
    flag_r_4= flag_right_4_2(mouse_x, mouse_y);
    flag_r_5= flag_right_5_2(mouse_x, mouse_y);
    flag_r_6= flag_right_6_2(mouse_x, mouse_y);
    flag_r_7= flag_right_7_2(mouse_x, mouse_y);

    if(flag_l_1 == 1 && done_l_1==0)
    {
        color_red_1 = 0;
        color_blue_1= 0;
        color_green_1 = 255;
        p1=true;
        p1_cross=false;
        p2_cross=false;
        p3_cross=false;
        p1_tick=false;
        p2_tick=false;
        p3_tick=false;
    }

    if(p1==1 || p1_extra==1 )
    {
        if(p1_extra != 1)
        {
            iLine(x_left,460,mouse_x,mouse_y);
        }
        else
        {
            if(gamestate4_2 > 0)
            {
                if(x == &flag_r_7)
                    iLine(x_left,460,x_right,83);
                if(x == &flag_r_6)
                    iLine(x_left,460,x_right,215);
                if(x == &flag_r_5)
                    iLine(x_left,460,x_right,347);
                if(x == &flag_r_4)
                    iLine(x_left,460,x_right,479);
            }
        }

        if(x == &flag_r_6)
        {
            if(*x == 1 && done_r_6 == 0)
            {
                color_red_6 = 0;
                color_blue_6= 0;
                color_green_6 =255;
                p1=false;
                //iShowBMP2(420,0,"bc\\Tick2.bmp",0);
                p1_extra = true;
                done_l_1++;
                done_r_6++;
                p1_tick=true;
                score_match += 20;
            }
            else if((flag_r_4 == 1 || flag_r_5 == 1  || flag_r_7 == 1 || flag_l_2 == 1 || flag_l_3 == 1) && p1_extra !=1)
            {
                color_red_1 = 252;
                color_blue_1= 170;
                color_green_1 = 153;
                p1=false;
                p1_cross=true;
                score_match -= 15;
                flag_r_4 = 0;
                flag_r_5 = 0;
                flag_r_7 = 0;
                flag_l_2 = 0;
                flag_l_3 = 0;
            }
        }
        else if( x == &flag_r_5)
        {
            if(*x == 1 && done_r_5==0)
            {
                color_red_5 = 0;
                color_blue_5= 0;
                color_green_5 =255;
                p1=false;
                //iShowBMP2(420,0,"bc\\Tick2.bmp",0);
                p1_extra = true;
                done_l_1++;
                done_r_5++;
                p1_tick=true;
                score_match += 20;
            }
            else if((flag_r_4 == 1 || flag_r_6 == 1  || flag_r_7 == 1 || flag_l_2 == 1 || flag_l_3 == 1) && p1_extra !=1)
            {
                color_red_1 = 252;
                color_blue_1= 170;
                color_green_1 = 153;
                p1=false;
                p1_cross=true;
                score_match -= 15;
                flag_r_4 = 0;
                flag_r_6 = 0;
                flag_r_7 = 0;
                flag_l_2 = 0;
                flag_l_3 = 0;
            }
        }

        else if( x == &flag_r_4)
        {
            if(*x == 1 && done_r_4==0)
            {
                color_red_4 = 0;
                color_blue_4= 0;
                color_green_4 =255;
                p1=false;
                //iShowBMP2(420,0,"bc\\Tick2.bmp",0);
                p1_extra = true;
                done_l_1++;
                done_r_4++;
                p1_tick=true;
                score_match += 20;
            }
            else if((flag_r_5 == 1 || flag_r_6 == 1  || flag_r_7== 1 || flag_l_2 == 1 || flag_l_3 == 1) && p1_extra !=1)
            {
                color_red_1 = 252;
                color_blue_1= 170;
                color_green_1 = 153;
                p1=false;
                p1_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_6 = 0;
                flag_r_7 = 0;
                flag_l_2 = 0;
                flag_l_3 = 0;
            }
        }

        else if( x == &flag_r_7)
        {
            if(*x == 1 && done_r_7==0)
            {
                color_red_7 = 0;
                color_blue_7= 0;
                color_green_7 =255;
                p1=false;
                //iShowBMP2(420,0,"bc\\Tick2.bmp",0);
                p1_extra = true;
                done_l_1++;
                done_r_7++;
                p1_tick=true;
                score_match +=20;
            }
            else if((flag_r_5 == 1 || flag_r_6 == 1 || flag_r_4 == 1  || flag_l_2 == 1 || flag_l_3 == 1) && p1_extra !=1)
            {
                color_red_1 = 252;
                color_blue_1= 170;
                color_green_1 = 153;
                p1=false;
                p1_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_6 = 0;
                flag_r_4 = 0;
                flag_l_2 = 0;
                flag_l_3 = 0;
            }
        }
    }

    if(p1_cross == true)
    {
        p2_tick=false;
        p3_tick=false;
        iShowBMP2(420,0,"bc\\cross2.bmp",0);
    }
    if(p1_tick)
    {
        tick();
    }


    if(flag_l_2 == 1 && done_l_2==0)
    {
        color_red_2 = 0;
        color_blue_2= 0;
        color_green_2 = 255;

        p2=true;
        p1_cross=false;
        p2_cross=false;
        p3_cross=false;
        p1_tick=false;
        p2_tick=false;
        p3_tick=false;
    }

    if(p2==1 || p2_extra==1)
    {
        if(p2_extra != 1)
        {
            iLine(x_left,280,mouse_x,mouse_y);
        }
        else
        {
            if(gamestate4_2 > 0)
            {
                if(y == &flag_r_7)
                    iLine(x_left,280,x_right,83);
                if(y == &flag_r_6)
                    iLine(x_left,280,x_right,215);
                if(y == &flag_r_5)
                    iLine(x_left,280,x_right,347);
                if(y == &flag_r_4)
                    iLine(x_left,280,x_right,479);
            }
        }

        if( y == &flag_r_6)
        {
            if(*y == 1 && done_r_6==0)
            {
                color_red_6 = 0;
                color_blue_6= 0;
                color_green_6 =255;
                p2=false;
                p2_extra = true;
                done_l_2++;
                done_r_6++;
                p2_tick=true;
                score_match += 20;
            }
            else if((flag_r_5 == 1 || flag_r_4 == 1 || flag_r_7 == 1|| flag_l_1 == 1 || flag_l_3 == 1) && p2_extra !=1)
            {
                color_red_2 = 252;
                color_blue_2= 170;
                color_green_2 = 153;
                p2=false;
                p2_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_7 = 0;
                flag_r_4 = 0;
                flag_l_1 = 0;
                flag_l_3 = 0;
            }
        }

        if( y == &flag_r_5)
        {
            if(*y == 1 && done_r_5==0)
            {
                color_red_5 = 0;
                color_blue_5= 0;
                color_green_5 =255;
                p2=false;
                p2_extra = true;
                done_l_2++;
                done_r_5++;
                p2_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_4 == 1 || flag_r_7 == 1 || flag_l_1 == 1 || flag_l_3 == 1) && p2_extra !=1)
            {
                color_red_2 = 252;
                color_blue_2= 170;
                color_green_2 = 153;
                p2=false;
                p2_cross=true;
                score_match -= 15;
                flag_r_6 = 0;
                flag_r_7 = 0;
                flag_r_4 = 0;
                flag_l_1 = 0;
                flag_l_3 = 0;
            }
        }

        if( y == &flag_r_4)
        {
            if(*y == 1 && done_r_4==0)
            {
                color_red_4 = 0;
                color_blue_4= 0;
                color_green_4 =255;
                p2=false;
                p2_extra = true;
                done_l_2++;
                done_r_4++;
                p2_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_5 == 1 || flag_r_7 == 1 || flag_l_1 == 1 || flag_l_3 == 1) && p2_extra !=1)
            {
                color_red_2 = 252;
                color_blue_2= 170;
                color_green_2 = 153;
                p2=false;
                p2_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_6 = 0;
                flag_r_7 = 0;
                flag_l_1 - 0;
                flag_l_3 = 0;
            }

        }

        if( y == &flag_r_7)
        {
            if(*y == 1 && done_r_7==0)
            {
                color_red_7 = 0;
                color_blue_7= 0;
                color_green_7 =255;
                p2=false;
                p2_extra = true;
                done_l_2++;
                done_r_7++;
                p2_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_5 == 1 || flag_r_4 == 1 || flag_l_1 == 1 || flag_l_3 == 1) && p2_extra !=1)
            {
                color_red_2 = 252;
                color_blue_2= 170;
                color_green_2 = 153;
                p2=false;
                p2_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_6 = 0;
                flag_r_4 = 0;
                flag_l_1 = 0;
                flag_l_3 = 0;
            }

        }
    }
    if(p2_cross == true)
    {
        p1_tick=false;
        p3_tick=false;
        iShowBMP2(420,0,"bc\\cross2.bmp",0);
    }
    if(p2_tick)
        tick();

    if(flag_l_3 == 1 && done_l_3 ==0 )
    {

        color_red_3 = 0;
        color_blue_3= 0;
        color_green_3 = 255;
        p3=true;
        p1_cross=false;
        p2_cross=false;
        p3_cross=false;
        p1_tick=false;
        p2_tick=false;
        p3_tick=false;
    }

    if(p3==1 || p3_extra==1)
    {
        if(p3_extra != 1)
        {
            iLine(x_left,115,mouse_x,mouse_y);
        }
        else
        {
            if(gamestate4_2 > 0)
            {
                if(z == &flag_r_7)
                    iLine(x_left,115,x_right,83);
                if(z == &flag_r_6)
                    iLine(x_left,115,x_right,215);
                if(z == &flag_r_5)
                    iLine(x_left,115,x_right,347);
                if(z == &flag_r_4)
                    iLine(x_left,115,x_right,479);
            }
        }
        if( z == &flag_r_6)
        {
            if(*z == 1 && done_r_6==0)
            {
                color_red_6 = 0;
                color_blue_6= 0;
                color_green_6 =255;
                p3=false;
                p3_extra = true;
                done_l_3++;
                done_r_6++;
                p3_tick=true;
                score_match += 20;
            }
            else if((flag_r_4 == 1 || flag_r_5 == 1 || flag_r_7 == 1 || flag_l_1 == 1 || flag_l_2 == 1) && p3_extra != 1)
            {
                color_red_3 = 252;
                color_blue_3= 170;
                color_green_3 = 153;
                p3=false;
                p3_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_4 = 0;
                flag_r_7 = 0;
                flag_l_1 = 0;
                flag_l_2 = 0;
            }
        }

        if( z == &flag_r_5)
        {
            if(*z == 1 && done_r_5==0)
            {
                color_red_5 = 0;
                color_blue_5= 0;
                color_green_5 =255;
                p3=false;
                p3_extra = true;
                done_l_3++;
                done_r_5++;
                p3_tick=true;
                score_match += 20;
            }
            else if((flag_r_4 == 1 || flag_r_6 == 1 || flag_r_7 == 1 || flag_l_1 == 1 || flag_l_2 == 1) && p3_extra != 1)
            {
                color_red_3 = 252;
                color_blue_3= 170;
                color_green_3 = 153;
                p3=false;
                p3_cross=true;
                score_match -=15;
                flag_r_4 = 0;
                flag_r_6 = 0;
                flag_r_7 = 0;
                flag_l_1 = 0;
                flag_l_2 = 0;
            }
        }

        if( z == &flag_r_4)
        {
            if(*z == 1 && done_r_4==0)
            {
                color_red_4 = 0;
                color_blue_4= 0;
                color_green_4 =255;
                p3=false;
                p3_extra = true;
                done_l_3++;
                done_r_4++;
                p3_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_5 == 1 || flag_r_7 == 1 || flag_l_1 == 1 || flag_l_2 == 1) && p3_extra != 1)
            {
                color_red_3 = 252;
                color_blue_3= 170;
                color_green_3 = 153;
                p3=false;
                p3_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_6 = 0;
                flag_r_7 = 0;
                flag_l_1 = 0;
                flag_l_2 = 0;
            }
        }

        if( z == &flag_r_7)
        {
            if(*z == 1 && done_r_7==0)
            {
                color_red_7 = 0;
                color_blue_7= 0;
                color_green_7 =255;
                p3=false;
                p3_extra = true;
                done_l_3++;
                done_r_7++;
                p3_tick=true;
                score_match += 20;
            }
            else if((flag_r_6 == 1 || flag_r_5 == 1 || flag_r_4 == 1 || flag_l_1 == 1 || flag_l_2 == 1) && p3_extra != 1)
            {
                color_red_3 = 252;
                color_blue_3= 170;
                color_green_3 = 153;
                p3=false;
                p3_cross=true;
                score_match -= 15;
                flag_r_5 = 0;
                flag_r_6 = 0;
                flag_r_4 = 0;
                flag_l_1 = 0;
                flag_l_2 = 0;
            }
        }
    }

    if(p3_cross == true)
    {
        p2_tick=false;
        p1_tick=false;
        iShowBMP2(420,0,"bc\\cross2.bmp",0);

    }
    if(p3_tick)
        tick();

    if(done_l_1 && done_l_2 && done_l_3)
    {
        if((a>=896 && a<=992) && (b>=238 && b<=335))
        {
            gamestate4_2 ++;
            done_l_1 = 0;
            done_l_2 = 0;
            done_l_3 = 0;
            p1=false;
            p2 = false;
            p3 = false;
            p1_extra = false;
            p2_extra = false;
            p3_extra = false;
            p1_tick = false;
            p2_tick = false;
            p3_tick = false;
            p1_cross = false;
            p2_cross = false;
            p3_cross = false;
            done_l_1=0;
            done_l_2=0;
            done_l_3=0;
            done_r_4=0;
            done_r_5=0;
            done_r_6=0,done_r_7=0;
            color_red_1=252;
            color_green_1=170;
            color_blue_1=153;
            color_red_2=252;
            color_green_2=170;
            color_blue_2=153;
            color_red_3=252;
            color_green_3=170;
            color_blue_3=153;
            color_red_4=252;
            color_green_4=170;
            color_blue_4=153;
            color_red_5=252;
            color_green_5=170;
            color_blue_5=153;
            color_red_6=252;
            color_green_6=170;
            color_blue_6=153;
            color_red_7=252;
            color_green_7=170;
            color_blue_7=153;
        }

    }

    if(gamestate4_2 == 5)
    {
        sprintf(scr_match2,"%d",score_match);

        iShowBMP(0,0,"bc\\crisscross\\2.jpg");
        iSetColor(255,255,255);
        iText(350,310,scr_match2,GLUT_BITMAP_TIMES_ROMAN_24);
//            if((a>= 135 && a<= 435) && (b>=45 && b<= 120))
//            {
//                gamestate4_1 = 0;
//                gamestate4 = 1;
//                score_match = 0;
//            }

        if((a>= 550 && a<= 850) && (b>=45 && b<= 120))
        {
            gamestate4_2 = 0;
            gamestate4 = 0;
            game_state = 1;
            score_match = 0;
        }


    }

    if((a>=0 && a<=67) && (b>=506 && b<=563))
    {

        gamestate4_2 = 0;
        gamestate4 = 0;
        game_state = 4;
        score_match = 0;
        done_l_1 = 0;
        done_l_2 = 0;
        done_l_3 = 0;
        p1=false;
        p2 = false;
        p3 = false;
        p1_extra = false;
        p2_extra = false;
        p3_extra = false;
        p1_tick = false;
        p2_tick = false;
        p3_tick = false;
        p1_cross = false;
        p2_cross = false;
        p3_cross = false;
        done_l_1=0;
        done_l_2=0;
        done_l_3=0;
        done_r_4=0;
        done_r_5=0;
        done_r_6=0,done_r_7=0;
        color_red_1=252;
        color_green_1=170;
        color_blue_1=153;
        color_red_2=252;
        color_green_2=170;
        color_blue_2=153;
        color_red_3=252;
        color_green_3=170;
        color_blue_3=153;
        color_red_4=252;
        color_green_4=170;
        color_blue_4=153;
        color_red_5=252;
        color_green_5=170;
        color_blue_5=153;
        color_red_6=252;
        color_green_6=170;
        color_blue_6=153;
        color_red_7=252;
        color_green_7=170;
        color_blue_7=153;
    }
}


void alph_matching()
{
    if(gamestate4 == 1)
    {
        iShowBMP(0,0,"bc\\crisscross\\level.jpg");


        if((a>328 && a<672) && (b>381 && b<485))
        {
            gamestate4_1 = 1;
            gamestate4 = 0;
            a=0;
            b=0;
        }
        else if((a>328 && a<672) && (b>220 && b<325))
        {
            gamestate4_2 = 1;
            gamestate4 = 0;
            a=0;
            b=0;
        }
        else if((a>328 && a<672) && (b>57 && b<160))
        {
            gamestate4_3 = 1;
            gamestate4 = 0;
            a=0;
            b=0;
        }

    }

    if(gamestate4_1)
    {
        if(gamestate4_1 == 1)
            matching(0,1,2,1,2,0,&flag_r_6,&flag_r_4,&flag_r_5);//a,b,c

        if(gamestate4_1 == 2)
            matching(13,14,15,16,14,15,&flag_r_5,&flag_r_6,&flag_r_4);

        if(gamestate4_1 == 3)
            matching(4,5,7,6,4,8,&flag_r_5,&flag_r_4,&flag_r_6);

        if(gamestate4_1 == 4)
            matching(9,11,12,12,13,10,&flag_r_6,&flag_r_4,&flag_r_5);

        if(gamestate4_1 == 5)
            matching(3,10,19,20,11,3,&flag_r_6,&flag_r_5,&flag_r_4);

    }
    else if(gamestate4_2)
    {
        if(gamestate4_2 == 1)
            matching_4(5,6,7,8,11,6,7,&flag_r_6,&flag_r_7,&flag_r_4);//g,h,i


        if(gamestate4_2 == 2)
            matching_4(0,2,4,2,0,8,4,&flag_r_5,&flag_r_4,&flag_r_7);//a,c,e


        if(gamestate4_2 == 3)
            matching_4(8,10,12,10,11,13,9,&flag_r_7,&flag_r_5,&flag_r_6);//j,m,o

        if(gamestate4_2 == 4)
            matching_4(9,11,19,12,20,10,7,&flag_r_6,&flag_r_4,&flag_r_5);//k,n,y

        if(gamestate4_2 == 5)
            matching_4(3,15,1,19,1,3,16,&flag_r_6,&flag_r_7,&flag_r_5);
    }

    else if(gamestate4_3)
    {
        if(gamestate4_3 == 1)
            matching_5(2,3,4,1,2,3,4,5,&flag_r_5,&flag_r_6,&flag_r_7);

        if(gamestate4_3 == 2)
            matching_5(6,7,9,10,19,7,17,8,&flag_r_6,&flag_r_8,&flag_r_4);


        if(gamestate4_3 == 3)
            matching_5(1,3,13,14,4,10,1,3,&flag_r_7,&flag_r_8,&flag_r_4);

        if(gamestate4_3 == 4)
            matching_5(0,5,10,11,15,6,0,16,&flag_r_7,&flag_r_6,&flag_r_4);

        if(gamestate4_3 == 5)
            matching_5(0,1,2,4,5,3,8,9,&flag_r_6,&flag_r_4,&flag_r_5);
    }

}

void iDraw()
{
    iClear();
    if( game_state == 0)
    {
        iShowBMP(0,0,"bc\\menu\\START.jpg");
        //iShowBMP2(923,520,"bc\\Sound\\On.bmp",255);

        if( (a>=115 && a<=540) && (b>=315 && b<=402) )
        {
            game_state = 1;
            a=0;
            b=0;
        }
        else if((a>=115 && a<=540) && (b>=211 && b<=296))
        {
            game_state = 10;
            a=0;
            b=0;
        }
        else if((a>=115 && a<=540) && (b>=105 && b<=190))
        {
            game_state = 11;
            a=0;
            b=0;
        }
    }
    else if(game_state == 11)
    {
        iShowBMP(0,0,"bc\\\menu\\Your paragraph text (1).jpg");
        //back
        if( (a>=0 && a<=91) && (b>=472 && b<=563) )
        {
            game_state = 0;
            a=0;
            b=0;
        }

    }
    else if(game_state == 10)
    {
        iShowBMP(0,0,"bc\\menu\\2.jpg");
        if( (a>=0 && a<=76) && (b>=233 && b<=363) )
        {
            game_state = 0;
            a=0;
            b=0;
        }
        else if((a>=923 && a<=1000) && (b>=233 && b<=363))
        {
            game_state = 15;
            a=0;
            b=0;
        }

    }
    else if(game_state == 15)
    {
        iShowBMP(0,0,"bc\\menu\\3.jpg");
        if( (a>=0 && a<=76) && (b>=233 && b<=363) )
        {
            game_state = 10;
            a=0;
            b=0;
        }
        else if((a>=923 && a<=1000) && (b>=233 && b<=363))
        {
            game_state = 0;
            a=0;
            b=0;
        }

    }

    else if(game_state == 1)
    {
        iShowBMP(0,0,"bc\\menu\\Menu_2.bmp");
        //printf("game_state = 1\n");
        //back
        if( (a>=23 && a<=166) && (b>=453 && b<=510) )
        {
            game_state = 0;
            a=0;
            b=0;
        }
        else if( (a>=68 && a<=456) && (b>=243 && b<=328) )
        {
            game_state = 2;
            printf("game_state = 2\n");
            a=0;
            b=0;
        }
        else if( (a>=68 && a<=456) && (b>=143 && b<=228) )
        {
            game_state = 3;
            a=0;
            b=0;

        }
        else if( (a>=68 && a<=456) && (b>=36 && b<=124) )
        {
            game_state = 4;
            a=0;
            b=0;
        }
    }

    if(game_state == 3)
    {
        if(gamestate2_1 == 0 && gamestate2_2 == 0 && gamestate1_1 ==0 && gamestate1_2 == 0)
            game_state2 = 1;

        alph_to_pic();
    }

    if(game_state == 2)
    {
        if(gamestate1_1 == 0 && gamestate1_2 == 0 && gamestate2_1 ==0 && gamestate2_2 == 0)
            game_state1 = 1;

        pic_to_alph();
    }

    if(game_state == 4)
    {
        if(gamestate4_1 == 0 && gamestate4_2 == 0 && gamestate4_3 == 0)
            gamestate4 = 1;
        alph_matching();
    }

}


void iMouseMove(int mx, int my)
{
    printf("x = %d, y= %d\n",mx,my);

    mouse_x=mx;
    mouse_y=my;

}

void counter2();
void counter();
void cnt_plus();

void iMouse(int button, int state, int mx, int my)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        a=mx;
        b=my;
        // if(game_state == 2  && (mx>327 && mx<672) && (my>158 && my<258))
        if(game_state1 == 1 && (mx>327 && mx<672) && (my>158 && my<258))
        {
            x1 = 1;
            printf("3: %d\n", x1);

        }
        //if(game_state == 3 && (mx>327 && mx<672) && (my>158 && my<258))
        if(game_state2 == 1 && (mx>327 && mx<672) && (my>158 && my<258))
        {
            x1 = 1;
            printf("4: %d\n", x1);
        }

    }




    if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {

    }
    if(state == GLUT_UP)
    {
        mou_x=mx;
        mou_y=my;
    }

}


void iKeyboard(unsigned char key)
{
    if (key == 'q')
    {
        exit(0);
    }

    else if(key == 'u')
    {
        //x+=10;
        y+=10;
    }
    else if(key =='d')
    {
        //x-=10;
        y-=10;
    }
    else if(key == 'r')
    {
        x+=10;
    }
    else if(key == 'l')
    {
        x-=10;
    }
}


void iSpecialKeyboard(unsigned char key)
{

    if (key == GLUT_KEY_END)
    {
        exit(0);
    }
}
void counter2()
{
    if(x1 == 1)
        cnt2--;
}
void counter()
{
    if(x1 == 1)
    {
        cnt--;
    }
}




int main()
{

    iSetTimer(300,counter);
    arr();
    if(musicOn)
        PlaySound("bc\\chi.wav", NULL, SND_LOOP | SND_ASYNC);
    iInitialize(1000, 563, "Hello world");
    return 0;
}
