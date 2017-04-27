#include<process.h>
#include<stdio.h>
#include<GL/glut.h>
#include<windows.h>
#include<math.h>

int i;

void Write(char *string)
{
    while(*string)
    {
                  glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *string++);
                 
    }
}



void icon(GLint x,GLint y)
{
    //icon 1
     glColor3f(0.0,0.1,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(20,20);
     glVertex2d(80,20);
     glColor3f(0.5,0.1,0.3);
     glVertex2d(80,80);
     glVertex2d(20,80);
     glEnd();
     
    
     //tetra
     glBegin(GL_TRIANGLES);
     glColor3f(1.0,0.0,0.0);
     glVertex2d(30,30);
     glColor3f(0.0,0.9,0.0);
     glVertex2d(70,30);
     glColor3f(0.0,0.0,1.9);
     glVertex2d(50,70);
     glEnd();
     
     // icon2
      glColor3f(1.4,1.2,4.3);
     glBegin(GL_POLYGON);
     glVertex2d(20,100);
     glVertex2d(80,100);
     glColor3f(0.5,0.1,0.3);
     glVertex2d(80,180);
     glVertex2d(20,180);
     glEnd();
     
     glBegin(GL_QUADS);
     glColor3f(1.0,0.0,0.0);
     glVertex2d(35,115);
     glColor3f(0.5,1.0,0.0);
     glVertex2d(60,120);
     glColor3f(0.0,0.0,1.0);
     glVertex2d(60,160);
     glColor3f(1.0,1.9,1.0);
     glVertex2d(35,170);
     glEnd(); 
     
     //icon3
     glColor3f(1.0,0.1,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(20,200);
     glVertex2d(80,200);
     glColor3f(0.5,0.1,0.3);
     glVertex2d(80,260);
     glVertex2d(20,260);
     glEnd();
     
     glBegin(GL_LINES);
     glColor3f(1.0,1.0,1.0);
     glVertex2d(30,210);
     glVertex2d(70,210);
     glVertex2d(30,220);
     glVertex2d(70,220);
     glVertex2d(30,230);
     glVertex2d(70,230);
     glVertex2d(30,240);
     glVertex2d(70,240);
     glVertex2d(30,250);
     glVertex2d(70,250);
     
     glVertex2d(30,210);
     glVertex2d(30,250);
     glVertex2d(70,210);
     glVertex2d(70,250);
     
     
     glVertex2d(40,210);
     glVertex2d(40,250);
     glVertex2d(50,210);
     glVertex2d(50,250);
     glVertex2d(60,210);
     glVertex2d(60,250);
     glEnd();
     
     //icon4
     glColor3f(0.0,0.0,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(20,280);
     glVertex2d(80,280);
     glColor3f(1.5,0.2,0.5);
     glVertex2d(80,340);
     glVertex2d(20,340);
     glEnd();
     
     
     glBegin(GL_QUADS);
     glColor3f(0.0,0.0,1.5);
     glVertex2d(40,290);
     glVertex2d(60,290);
     glColor3f(0.0,0.0,1.5);
     glColor3f(1.0,1.0,1.0);
     glVertex2d(60,310);
     glVertex2d(40,310);
     glEnd(); 
     
     glBegin(GL_TRIANGLES);
     glColor3f(0.0,0.0,1.5);
     glVertex2d(40,310);
     glVertex2d(60,310);
     glColor3f(1.0,1.0,1.0);
     glVertex2d(50,330);
     glEnd(); 
      
      //icon5
     glColor3f(1.0,1.0,2.3);
     glBegin(GL_POLYGON);
     glVertex2d(20,360);
     glVertex2d(80,360);
     glColor3f(1.5,1.2,0.5);
     glVertex2d(80,420);
     glVertex2d(20,420);
     glEnd();
     
  
     
     
     glBegin(GL_QUADS);
     glColor3f(1.0,0.0,0.0);
     glVertex2d(40,370);
     glColor3f(1.0,1.0,0.0);
     glVertex2d(60,370);
     glColor3f(0.0,0.0,1.4);
     glVertex2d(60,400);
     glColor3f(0.0,1.9,2.0);
     glVertex2d(40,400);
     glEnd(); 
     
     //icon6
      
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.1,0.3);
     glVertex2d(420,20);
     glVertex2d(480,20);
     glColor3f(0.0,0.0,0.0);
     glColor3f(0.5,0.1,0.3);
     glVertex2d(480,80);
     glVertex2d(420,80);
     glEnd();
     
     glColor3f(1.0,1.0,1.0);
     glBegin(GL_LINE_LOOP);
     glVertex2d(430,30);
     glVertex2d(450,30);
     glVertex2d(450,60);
     glVertex2d(430,60);
     glEnd();
     
     glBegin(GL_LINES);
     glVertex2d(425,25);
     glVertex2d(453,64);
     glEnd();
       
     glColor3f(1.0,1.0,1.0);
     glBegin(GL_LINE_LOOP);
     glVertex2d(455,30);
     glVertex2d(475,30);
     glVertex2d(475,60);
     glVertex2d(455,60);
     glEnd();
       
     glBegin(GL_LINES);
     glVertex2d(455,30);
     glVertex2d(475,60);
     glEnd();
     
     
       
       
       
       
                           
     
     //icon7
     glColor3f(1.4,1.2,4.3);
      
     glBegin(GL_POLYGON);
     glVertex2d(420,100);
     glVertex2d(480,100);
     glColor3f(0.5,0.1,0.3);
     glVertex2d(480,160);
     glVertex2d(420,160);
     glEnd();
     
     
     glColor3f(0.0,0.0,0.0);
     glBegin(GL_LINE_LOOP);
     glVertex2d(425,105);
     glVertex2d(445,105);
     glVertex2d(445,127);
     glVertex2d(425,127);
     glEnd();
     glBegin(GL_LINES);
     glVertex2d(421,102);
     glVertex2d(449,131);
     glEnd();
       
     glColor3f(0.0,0.0,0.0);
     glBegin(GL_LINE_LOOP);
     glVertex2d(455,130);
     glVertex2d(475,130);
     glVertex2d(475,155);
     glVertex2d(455,155);
     glEnd();
       
     glBegin(GL_LINES);
     glVertex2d(455,130);
     glVertex2d(475,155);
     glEnd();
     
     //icon8
     glColor3f(1.0,0.1,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(420,190);
     glVertex2d(480,190);
     glColor3f(0.5,0.1,0.3);
     glVertex2d(480,250);
     glVertex2d(420,250);
     glEnd();
     
   
     glColor3f(1.0,1.0,0.0); 
     glBegin(GL_LINE_LOOP); 
     glVertex2d(455,200);
     glVertex2d(475,200);
     glVertex2d(475,240);
     glVertex2d(455,240);
     glEnd();
       
     glBegin(GL_LINE_LOOP);
     glVertex2d(457,204);
     glVertex2d(477,204);
     glVertex2d(477,244);
     glVertex2d(457,244);
     glEnd();
      
     glBegin(GL_LINE_LOOP);
     glVertex2d(459,208);
     glVertex2d(479,208);
     glVertex2d(479,248);
     glVertex2d(459,248);
     glEnd();
    
     glBegin(GL_LINE_LOOP);
     glVertex2d(455,200);
     glVertex2d(457,204);
     glVertex2d(459,208);
     glEnd();
     
     glBegin(GL_LINE_LOOP);
     glVertex2d(475,200);
     glVertex2d(477,204);
     glVertex2d(479,208);
     glEnd();
     
     glBegin(GL_LINE_LOOP);
     glVertex2d(475,240);
     glVertex2d(477,244);
     glVertex2d(479,248);
     glEnd();
     
     glBegin(GL_LINE_LOOP);
     glVertex2d(455,240); 
     glVertex2d(457,244);
     glVertex2d(459,248);
     glEnd();

     
     //icon9
     glColor3f(1.4,1.2,4.3);
     glBegin(GL_POLYGON);
     glVertex2d(420,270);
     glVertex2d(480,270);
     glColor3f(1.5,0.2,0.5);
     glVertex2d(480,330);
     glVertex2d(420,330);
     glEnd();
     
     //icon10
     glColor3f(1.0,1.0,2.3);
     glBegin(GL_POLYGON);
     glVertex2d(420,360);
     glVertex2d(480,360);
     glColor3f(1.5,1.2,0.5);
     glVertex2d(480,420);
     glVertex2d(420,420);
     glEnd();
     
     glBegin(GL_POLYGON);
     glColor3f(0.0,0.0,0.0);
     glVertex2d(450,370);
     glVertex2d(460,390);
     glVertex2d(450,410);
     glVertex2d(440,390);
     glEnd(); 
     
     
     glColor3f(0.0,0.0,0.3);
     glBegin(GL_POLYGON);
     glVertex2d(150,440);
     glVertex2d(360,440);
     glColor3f(0.5,1.2,0.5);
     glVertex2d(360,480);
     glVertex2d(150,480);
     glEnd();
     
     
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0,0.0);
     glVertex2f(360,460);
     glVertex2f(450,460);
     glVertex2f(450,465);
     glVertex2f(360,465);
     glEnd();
     
         
          
}




void sphere()
{
       glPushMatrix();
       glColor3f(1.0,0.0,0.0);
       glTranslated(320,460,10);
       glScaled(2,4,6);
       glutSolidSphere(2,10,10);
       glPopMatrix();
       
       glPushMatrix();
       glColor3f(1.0,1.0,1.0);
       glTranslated(308,470,10);
       glScaled(2,4,6);
       glutSolidSphere(2,10,10);
       glPopMatrix();
       
        glPushMatrix();
       glColor3f(1.0,0.0,0.0);
       glTranslated(302,450,10);
       glScaled(2,4,6);
       glutSolidSphere(2,10,10);
       glPopMatrix();
       
        glPushMatrix();
       glColor3f(1.0,1.0,1.0);
       glTranslated(330,450,10);
       glScaled(2,4,6);
       glutSolidSphere(2,10,10);
       glPopMatrix();
       
        glPushMatrix();
       glColor3f(1.0,0.0,0.0);
       glTranslated(340,470,10);
       glScaled(2,4,6);
       glutSolidSphere(2,10,10);
       glPopMatrix();
       
       
        glPushMatrix();
       glColor3f(1.0,1.0,1.0);
       glTranslated(350,450,10);
       glScaled(2,4,6);
       glutSolidSphere(2,10,10);
       glPopMatrix();
       
    
    
     //icon 8
      
       glPushMatrix();
       glColor3f(1.0,1.0,1.0);
       glTranslated(436,210,10);
       glScaled(9,12,10);
       glutSolidSphere(2,16,16);
       glPopMatrix();
       
       
       glPushMatrix();
       glColor3f(1.0,1.0,1.0);
       glTranslated(436,215,10);
       glScaled(9,12,10);
       glutSolidSphere(2,16,16);
       glPopMatrix();
       
              
       glPushMatrix();
       glColor3f(1.0,1.0,1.0);
       glTranslated(436,225,10);
       glScaled(9,12,10);
       glutSolidSphere(2,16,16);
       glPopMatrix();
       
       glPushMatrix();
       glColor3f(1.0,1.0,1.0);
       glTranslated(436,220,10);
       glScaled(9,12,10);
       glutSolidSphere(2,16,16);
       glPopMatrix();
}  


void Mouse(int btn,int state,int x,int y)
{
     
                                        
            if(btn==GLUT_LEFT_BUTTON&&state==GLUT_DOWN)
    {
		printf("\n%d,%d",x,y);
		if(x>=1100&&x<=1600&&y>=300&&y<=403)
        {
		 spawnl(P_NOWAIT, "cyl n par.exe","cyl n par.exe", NULL );
			return;
       }
		
		if(x>=1100&&x<=1600&&y>=400&&y<=500)
        {
                                         
			spawnl(P_NOWAIT, "Lian.exe","Lian.exe", NULL );
			return;
        }
		
		if(x>=13&&x<=230&&y>=100&&y<=200)
        {
                                          
			spawnl(P_NOWAIT, "cube.exe","cube.exe", NULL );
			return;
      }
     	if(x>=13&&x<=230&&y>=219&&y<=300)
         {
                                          
		spawnl(P_NOWAIT, "house.exe","house.exe", NULL );
			return;
        }
			
		if(x>=1100&&x<=1600&&y>=600&&y<=700)
        {
                                          
  			spawnl(P_NOWAIT, "Cohen.exe","Cohen.exe", NULL );
			return;
        }
		if(x>=13&&x<=230&&y>=345&&y<=388)
        {
                                          
			
			spawnl(P_NOWAIT, "mesh.exe","mesh.exe", NULL );
			return;
        }
        
	
			
			if(x>=1100&&x<=1600&&y>=208&&y<=350)
        {
                                          
			
			spawnl(P_NOWAIT, "teapot.exe","teapot.exe", NULL );
			return;
        }
        
		
		if(x>=13&&x<=230&&y>=471&&y<=514)
        {
                                          
		
			spawnl(P_NOWAIT, "color cube.exe","color cube.exe", NULL );
			return;
        }
			
		if(x>=1100&&x<=1600&&y>=100&&y<=200)
        {
                                          
		
			spawnl(P_NOWAIT, "polygon.exe","polygon.exe", NULL );
			return;
        }
        
        
		if(x>=13&&x<=230&&y>=597&&y<=640)
        {
		
			spawnl(P_NOWAIT, "3d gask.exe","3d gask.exe", NULL );
			return;
		
        }
        if(x>=180&&x<=1000&&y>=10&&y<=80)
       
     {  spawnl(P_NOWAIT, "Laser.exe","Laser.exe", NULL );
			return;
   	 }
        
	}
}


void init(void)
{
     glPointSize(3);
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluOrtho2D(0.0,499.0,0.0,499.0);
     
     
}


void Cube()
{ 
    

    glPushMatrix();
    glTranslated(0.7,0.2,1);
    glScaled(1.2,1.6,1.0);
    glColor3f(0.1,0.0,0.1);
    glRotated(60,0,1,0);
    glutWireCube(0.1);
    glPopMatrix();
    
    glPushMatrix();
    glTranslated(1.1,0.2,1.1);
    glScaled(1.2,1.6,1.0);
    glColor3f(0.1,0.0,0.1);
    glRotated(60,0,1,0);
    glutWireCube(0.1);
    glPopMatrix();
    
    
}

     



void display(void)
{
    
    GLint x=0,y=0;
    
    glClear(GL_COLOR_BUFFER_BIT);

     
     
      
    
     glBegin(GL_POLYGON);
     {
       glColor3f(1.0,0.0,1.0);
       glVertex2d(130,50);
       glColor3f(1.0,1.0,1.0);
       glVertex2d(380,50);
       glColor3f(0.0,0.0,1.0);
       glVertex2d(380,420);
       glColor3f(1.0,1.0,1.0);
       glVertex2d(130,420);
          
          glEnd();
          
       }
       
       icon(x,y); 
       
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(140,350);
    Write(" COMPUTER GRAPHICS MINI PROJECT WITH OPENGL ");
    glColor3f(0.0,0.0,0.0);
    glRasterPos2f(160,300);
    Write(" A MENU BASED PACKAGE !!");
	glColor3f(0.0,0.0,0.0);
    glRasterPos2f(160,250);
    Write(" UNDER THE GUIDANCE OF VIMALA MAM..");
	glColor3f(0.1,0.0,0.1);
    glRasterPos2f(300,100);
    Write("BY: NEHA KHAN");
	glColor3f(0.1,0.0,0.1);
    glRasterPos2f(310,75);
    Write("14GAEC9030");
    glColor3f(0.1,0.0,0.1);
    glRasterPos2f(310,54);
    Write("V Sem , CSE");
    
    
     glColor3f(1.0,1.0,1.0);    
     glRasterPos2f(10,40);
     Write("1.");                                                                                                                                        
                    
     glColor3f(1.0,1.0,1.0);    
     glRasterPos2f(10,130);
     Write("2.");  
     
     glColor3f(1.0,1.0,1.0);    
     glRasterPos2f(10,220);
     Write("3.");       
     
     
     glColor3f(1.0,1.0,1.0);    
     glRasterPos2f(10,300);
     Write("4.");                                                                                                                                        
                    
     glColor3f(1.0,1.0,1.0);    
     glRasterPos2f(10,380);
     Write("5."); 
     
     glColor3f(1.0,1.0,1.0);    
     glRasterPos2f(410,40);
     Write("6.");       
      
     glColor3f(1.0,1.0,1.0);    
     glRasterPos2f(410,130);
     Write("7.");       
     
     glColor3f(1.0,1.0,1.0);    
     glRasterPos2f(410,220);
     Write("8.");                                                                                                                                        
                    
     glColor3f(1.0,1.0,1.0);    
     glRasterPos2f(410,300);
     Write("9.");  
     
     glColor3f(1.0,1.0,1.0);    
     glRasterPos2f(408,380);
     Write("10.");
     
     
     glColor3f(1.0,1.0,1.0);    
     glRasterPos2f(135,450);
     Write("11.");
     
    
     glColor3f(1.0,1.0,1.0);    
     glRasterPos2f(160,450);
     Write("LASER -- Working and its principle..");        
     
         sphere();                
          
    double winht=1.0;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-winht*64/48,winht*64/48.0,-winht,winht,0.1,100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(2.3,1.3,2,0,0.25,0.0,0,1.0,0.0);

    //teapot
    glPushMatrix();
    glTranslated(2.4,1.25,0.67);
    glScaled(1.2,1.5,1);
    glColor3f(0.1,0.0,0.1);
    glRotated(60,0,1,0);
    glutWireTeapot(0.085);
    glPopMatrix();
    
     Cube();
     glFlush();
    
}  

       


void keys(unsigned char key,int x,int y)
{   
     
     if(key==27||key=='q') 

	
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);
    glRasterPos2f(220,250);
	Write("Thank You!!");
	glFlush();
	TerminateProcess(PROCESS_TERMINATE,GetExitCodeProcess);
	while(i<1999999999)
    {
		i++;
    }
	
	exit(0);
	
}	
	

int main(int argc,char **argv)
{

  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowPosition(0,0);
  glutInitWindowSize(1350,690);
  glutCreateWindow("Mini Project-Menu based Package!!");
  glutDisplayFunc(display);
  glutMouseFunc(Mouse);
  glutKeyboardFunc(keys);
  init();
  glutMainLoop();
  return 0;
}
         
          
          
                                                                                                    
                                                                                                                 
     
