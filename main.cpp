
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

//Definimos variables
double rotate_y=0;
double rotate_x=0;
double rotate_z=0;

GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;
GLfloat scale = 0.5f;

void cubito(float c1, float c2, float c3){
	 // Primera cara, se identifica por multiples colores
    glBegin(GL_POLYGON);
	glColor3f( c1, c2, c3 );
    glVertex3f(  -0.9, -0.25, -0.1 );      // V1 Blanco
    glVertex3f(  -0.6, -0.25, -0.1 );      // V2 Amarillo
     glColor3f( 1.0, 0.0, 0.0 );
     glVertex3f(-0.6, -0.45, -0.1 );      // V3 es azul
    glVertex3f(-0.9, -0.45, -0.1 );      // V4 rojo
    glEnd();

    // LADO TRASERO: lado blanco
    glBegin(GL_POLYGON);
    glColor3f( 1.0,  1.0, 1.0 ); 
    glVertex3f(  -0.9, -0.25, 0.1 );      // V5
    glVertex3f(  -0.6, -0.25, 0.1 );      // V6
     glVertex3f(-0.6, -0.45, 0.1 );      // V7
    glVertex3f(-0.9, -0.45, 0.1 );  //v8
    glEnd();

    // LADO DERECHO: lado verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  0.0 ); 
     glVertex3f(  -0.9, -0.25, -0.1 );  //v1
    glVertex3f(  -0.6, -0.25, -0.1 ); //v2
     glVertex3f(  -0.6, -0.25, 0.1 );  //v6
     glVertex3f(  -0.9, -0.25, 0.1 );  //v5
    glEnd();

    // LADO INFERIOR: lado Amarillo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,  0.0 );
    glVertex3f(-0.9, -0.45, 0.1 ); //v8
    glVertex3f(-0.6, -0.45, 0.1 );//v7
    glVertex3f(-0.6, -0.45, -0.1 );  //v3
    glVertex3f(-0.9, -0.45, -0.1 ); //v4
    glEnd();

    // LADO SUPERIOR: lado azul
    glBegin(GL_POLYGON);
    glColor3f(0.0,  0.0,  1.0 );
    glVertex3f(  -0.6, -0.25, 0.1 ); //v6
    glVertex3f(  -0.6, -0.25, -0.1 ); //v2
    glVertex3f(-0.6, -0.45, -0.1 );   //v3
    glVertex3f(-0.6, -0.45, 0.1 ); //v7
    glEnd();

    // LADO IZQUIERDO: lado rojo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
     glVertex3f(  -0.9, -0.25, -0.1 );  //v1
   glVertex3f(  -0.9, -0.25, 0.1 ); //v5
     glVertex3f(-0.9, -0.45, 0.1 ); //v8
     glVertex3f(-0.9, -0.45, -0.1 ); //v4
    glEnd();

}
void cubito2(float c1, float c2, float c3){
	 // Primera cara, se identifica por multiples colores
    glBegin(GL_POLYGON);
	glColor3f( c1, c2, c3 );
    glVertex3f(  0.5, -0.5, -0.1 );      // V1 Blanco
    glVertex3f(0.7, -0.5, -0.1 );      // V2 Amarillo
     glColor3f( 1.0, 0.0, 0.0 );
     glVertex3f(0.7, -0.7, -0.1 );      // V3 es azul
    glVertex3f(0.5, -0.7, -0.1 );      // V4 rojo
    glEnd();

    // LADO TRASERO: lado blanco
    glBegin(GL_POLYGON);
    glColor3f( 1.0,  1.0, 1.0 ); 
     glVertex3f(0.5, -0.5, 0.1 );      // V5 Blanco
    glVertex3f(0.7, -0.5, 0.1 );      // V6 Amarill
     glVertex3f(0.7, -0.7, 0.1 );      // V7 es azul
    glVertex3f(0.5, -0.7, 0.1 );      // V8 rojo     // V8 rojo
    glEnd();

    // LADO DERECHO: lado verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  0.0 ); 
     glVertex3f(  0.5, -0.5, -0.1 );   //v1
    glVertex3f(0.7, -0.5, -0.1 ); //v2
      glVertex3f(0.7, -0.5, 0.1 );//v6
     glVertex3f(0.5, -0.5, 0.1 );  //v5
    glEnd();

    // LADO INFERIOR: lado Amarillo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,  0.0 );
     glVertex3f(0.5, -0.7, 0.1 );  //v8
    glVertex3f(0.7, -0.7, 0.1 ); //v7
    glVertex3f(0.7, -0.7, -0.1 );  //v3
    glVertex3f(0.5, -0.7, -0.1 );  //v4
    glEnd();

    // LADO SUPERIOR: lado azul
    glBegin(GL_POLYGON);
    glColor3f(0.0,  0.0,  1.0 );
     glVertex3f(0.7, -0.5, 0.1 );//v6
    glVertex3f(0.7, -0.5, -0.1 ); //v2
    glVertex3f(0.7, -0.7, -0.1 );//v3
    glVertex3f(0.7, -0.7, 0.1 ); //v7
    glEnd();

    // LADO IZQUIERDO: lado rojo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(  0.5, -0.5, -0.1 );//v1
   glVertex3f(0.5, -0.5, 0.1 ); //v5
      glVertex3f(0.5, -0.7, 0.1 );   //v8
     glVertex3f(0.5, -0.7, -0.1 );  //v4
    glEnd();

}

void display()
{
    //  Borrar pantalla y Z-buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    // Resetear transformaciones
    glLoadIdentity();
     gluLookAt(0.3,-0.10,0.1, //punto de vista 
             0.2,0.0,0.0, 
             0.0,1.0,0.0); 
        
        
    /* glBegin(GL_LINES);
	glColor3f( 1.0, 1.0, 1.0 ); //BLANCA ES X
    glVertex3f(  1.0, 0.0, 0.0 ); 
    glVertex3f(  -1.0, 0.0, 0.0 );
     glColor3f( 1.0, 1.0, 0.0 ); //AMARILLO ES Y
     glVertex3f( 0.0, 1.0, 0.0 );
    glVertex3f( 0.0, -1.0, 0.0 );
    glColor3f( 1.0, 0.0, 1.0 ); //ROJO ES Z
     glVertex3f( 0.0, 0.0, 1.0 );      // V3 es azul
    glVertex3f( 0.0, 0.0, -1.0 );      // V4 rojo
    glEnd();*/
    glScalef(scale, scale, scale);
    
    cubito(1,0,0);
    cubito2(1,1,0);
    //**************** BASE PRINCIPAL 
    // Primera cara, se identifica por multiples colores
    glBegin(GL_POLYGON);
	glColor3f( 1.0, 1.0, 1.0 );
    glVertex3f(  -0.25, -0.3, -0.1 );      // V1 Blanco
    glVertex3f(  0.2, -0.3, -0.1 );      // V2 Amarillo
     glColor3f( 1.0, 0.0, 0.0 );
     glVertex3f( 0.2, -0.5, -0.1 );      // V3 es azul
    glVertex3f( -0.25, -0.5, -0.1 );      // V4 rojo
    glEnd();

    // LADO TRASERO: lado blanco
    glBegin(GL_POLYGON);
    glColor3f( 1.0,  1.0, 1.0 ); 
    glVertex3f(  -0.25, -0.3, 0.1 ); //v5
    glVertex3f(  0.2, -0.3, 0.1 );  //v6
     glVertex3f( 0.2, -0.5, 0.1 );  //v7
    glVertex3f( -0.25, -0.5, 0.1 ); //v8
    glEnd();

    // LADO DERECHO: lado verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  0.0 ); 
    glVertex3f(-0.25, -0.3, -0.1  ); //v1
    glVertex3f(0.2, -0.3, -0.1 ); //v2
    glVertex3f(0.2, -0.3, 0.1); //v6
    glVertex3f(-0.25, -0.3, 0.1 ); //v5
    glEnd();

    // LADO INFERIOR: lado Amarillo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,  0.0 );
    glVertex3f(-0.25, -0.5, 0.1 ); //v8
    glVertex3f(0.2, -0.5, 0.1 ); //v7
    glVertex3f(0.2, -0.5, -0.1 ); //v3
    glVertex3f(-0.25, -0.5, -0.1); //v4
    glEnd();

    // LADO SUPERIOR: lado azul
    glBegin(GL_POLYGON);
    glColor3f(0.0,  0.0,  1.0 );
    glVertex3f(0.2, -0.3, 0.1 ); //v6
    glVertex3f(0.2, -0.3, -0.1); //v2
    glVertex3f(0.2, -0.5, -0.1); //v3
    glVertex3f(0.2, -0.5, 0.1 ); //v7
    glEnd();

    // LADO IZQUIERDO: lado rojo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(-0.25, -0.3, -0.1 ); //v1
    glVertex3f(-0.25, -0.3, 0.1 ); //v5
    glVertex3f(-0.25, -0.5, 0.1  ); //v8
    glVertex3f(-0.25, -0.5, -0.1 ); //v4
    glEnd();
      glFlush();
      
    //************************** BASE VERTICAL
    // Primera cara, se identifica por multiples colores
    glBegin(GL_POLYGON);
	glColor3f( 1.0, 1.0, 1.0 );
    glVertex3f(  -0.1, 0.4, -0.1 );      // V1 Blanco
    glVertex3f(  0.05, 0.4, -0.1 );      // V2 Amarillo
     glColor3f( 1.0, 0.0, 0.0 );
     glVertex3f(0.05, -0.3, -0.1 );      // V3 es azul
    glVertex3f(-0.1, -0.3, -0.1 );      // V4 rojo
    glEnd();

    // LADO TRASERO: lado blanco
    glBegin(GL_POLYGON);
    glColor3f( 1.0,  1.0, 1.0 ); 
    glVertex3f(  -0.1, 0.4, 0.1 );   //v5
    glVertex3f(  0.05, 0.4, 0.1 );   //v6
     glVertex3f(0.05, -0.3, 0.1 );     //v7
    glVertex3f(-0.1, -0.3, 0.1 );  //v8
    glEnd();

    // LADO DERECHO: lado verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  0.0 ); 
    glVertex3f(  -0.1, 0.4, -0.1 ); //v1
    glVertex3f(  0.05, 0.4, -0.1 ); //v2
     glVertex3f(  0.05, 0.4, 0.1 );  //v6
     glVertex3f(  -0.1, 0.4, 0.1 );  //v5
    glEnd();

    // LADO INFERIOR: lado Amarillo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,  0.0 );
    glVertex3f(-0.1, -0.3, 0.1 ); //v8
    glVertex3f(0.05, -0.3, 0.1 ); //v7
    glVertex3f(0.05, -0.3, -0.1 );  //v3
    glVertex3f(-0.1, -0.3, -0.1 ); //v4
    glEnd();

    // LADO SUPERIOR: lado azul
    glBegin(GL_POLYGON);
    glColor3f(0.0,  0.0,  1.0 );
    glVertex3f(  0.05, 0.4, 0.1 ); //v6
    glVertex3f(  0.05, 0.4, -0.1 ); //v2
    glVertex3f(0.05, -0.3, -0.1 );  //v3
    glVertex3f(0.05, -0.3, 0.1 ); //v7
    glEnd();

    // LADO IZQUIERDO: lado rojo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(  -0.1, 0.4, -0.1 ); //v1
   glVertex3f(  -0.1, 0.4, 0.1 ); //v5
     glVertex3f(-0.1, -0.3, 0.1 ); //v8
     glVertex3f(-0.1, -0.3, -0.1 ); //v4
    glEnd();
   
   //***************************************------------------
    // Apartir de aqui se mueven todas las figuras
    //glRotatef( rotate_x, 1.0, 0.0, 0.0);
    glRotatef( rotate_y, 0.0, 1.0, 0.0);
    //glRotatef( rotate_z, 0.0, 0.0, 1.0 );
    //***************************************------------------
    
    //***********************BASE HORIZONTAL
    // Primera cara, se identifica por multiples colores
    glBegin(GL_POLYGON);
	glColor3f( 1.0, 1.0, 1.0 );
    glVertex3f(  -0.15, 0.55, -0.1 );      // V1 Blanco
    glVertex3f(  0.8, 0.55, -0.1 );      // V2 Amarillo
     glColor3f( 1.0, 0.0, 0.0 );
     glVertex3f(0.8, 0.4, -0.1 );      // V3 es azul
    glVertex3f(-0.15, 0.4, -0.1 );      // V4 rojo
    glEnd();

    // LADO TRASERO: lado blanco
    glBegin(GL_POLYGON);
    glColor3f( 1.0,  1.0, 1.0 ); 
   glVertex3f(  -0.15, 0.55, 0.1 );      // V5
    glVertex3f(  0.8, 0.55, 0.1 );      // V6 
     glVertex3f(0.8, 0.4, 0.1 );      // V7
    glVertex3f(-0.15, 0.4, 0.1 );//v8
    glEnd();

    // LADO DERECHO: lado verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  0.0 ); 
     glVertex3f(  -0.15, 0.55, -0.1 );     //v1
   glVertex3f(  0.8, 0.55, -0.1 ); //v2
     glVertex3f(  0.8, 0.55, 0.1 );  //v6
     glVertex3f(  -0.15, 0.55, 0.1 );  //v5
    glEnd();

    // LADO INFERIOR: lado Amarillo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,  0.0 );
     glVertex3f(-0.15, 0.4, 0.1 );//v8
    glVertex3f(0.8, 0.4, 0.1 ); //v7
    glVertex3f(0.8, 0.4, -0.1 );   //v3
    glVertex3f(-0.15, 0.4, -0.1 ); //v4
    glEnd();

    // LADO SUPERIOR: lado azul
    glBegin(GL_POLYGON);
    glColor3f(0.0,  0.0,  1.0 );
    glVertex3f(  0.8, 0.55, 0.1 ); //v6
    glVertex3f(  0.8, 0.55, -0.1 );  //v2
   glVertex3f(0.8, 0.4, -0.1 );   //v3
    glVertex3f(0.8, 0.4, 0.1 ); //v7
    glEnd();

    // LADO IZQUIERDO: lado rojo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(  -0.15, 0.55, -0.1 );    //v1
   glVertex3f(  -0.15, 0.55, 0.1 ); //v5
    glVertex3f(-0.15, 0.4, 0.1 );//v8
     glVertex3f(-0.15, 0.4, -0.1 ); //v4
    glEnd();
    
    //*********************** HIERRITO
    // Primera cara, se identifica por multiples colores
    glBegin(GL_POLYGON);
	glColor3f( 1.0, 1.0, 1.0 );
    glVertex3f(  0.8, 0.55, -0.1 );      // V1 Blanco
    glVertex3f(  0.9, 0.55, -0.1 );      // V2 Amarillo
     glColor3f( 1.0, 0.0, 0.0 );
     glVertex3f(0.9, 0.3, -0.1 );      // V3 es azul
    glVertex3f(0.8, 0.3, -0.1 );      // V4 rojo
    glEnd();

    // LADO TRASERO: lado blanco
    glBegin(GL_POLYGON);
    glColor3f( 1.0,  1.0, 1.0 ); 
    glVertex3f(  0.8, 0.55, 0.1 );      // V5
    glVertex3f(  0.9, 0.55, 0.1 );      // V6
     glVertex3f(0.9, 0.3, 0.1 );      // V7 
    glVertex3f(0.8, 0.3, 0.1 );      // V8 
    glEnd();

    // LADO DERECHO: lado verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  0.0 ); 
     glVertex3f(  0.8, 0.55, -0.1 );    //v1
   glVertex3f(  0.9, 0.55, -0.1 ); //v2
     glVertex3f(  0.9, 0.55, 0.1 );  //v6
     glVertex3f(  0.8, 0.55, 0.1 );  //v5
    glEnd();

    // LADO INFERIOR: lado Amarillo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,  0.0 );
     glVertex3f(0.8, 0.3, 0.1 ); //v8
    glVertex3f(0.9, 0.3, 0.1 ); //v7
    glVertex3f(0.9, 0.3, -0.1 );   //v3
    glVertex3f(0.8, 0.3, -0.1 ); //v4
    glEnd();

    // LADO SUPERIOR: lado azul
    glBegin(GL_POLYGON);
    glColor3f(0.0,  0.0,  1.0 );
    glVertex3f(  0.9, 0.55, 0.1 );//v6
    glVertex3f(  0.9, 0.55, -0.1 ); //v2
   glVertex3f(0.9, 0.3, -0.1 );   //v3
    glVertex3f(0.9, 0.3, 0.1 ); //v7
    glEnd();

    // LADO IZQUIERDO: lado rojo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(  0.8, 0.55, -0.1 );   //v1
   glVertex3f(  0.8, 0.55, 0.1 ); //v5
    glVertex3f(0.8, 0.3, 0.1 ); //v8
     glVertex3f(0.8, 0.3, -0.1 ); //v4
    glEnd();
    
    //*************-------------------
    //movimiento de la cuerda en y
    glTranslatef(X, Y, Z);
    //*************-------------------
    
    //*********************** CUERDA
    // Primera cara, se identifica por multiples colores
    glBegin(GL_POLYGON);
	glColor3f( 1.0, 1.0, 1.0 );
    glVertex3f(  0.825, 0.3, -0.05 );      // V1 Blanco
    glVertex3f(  0.875, 0.3, -0.05 );      // V2 Amarillo
     glColor3f( 1.0, 0.0, 0.0 );
     glVertex3f(0.875, -0.25, -0.05 );      // V3 es azul
    glVertex3f(0.825, -0.25, -0.05 );      // V4 rojo
    glEnd();

    // LADO TRASERO: lado blanco
    glBegin(GL_POLYGON);
    glColor3f( 1.0,  1.0, 1.0 ); 
    glVertex3f(  0.825, 0.3, 0.05 );      // V5
    glVertex3f(  0.875, 0.3, 0.05 );      // V6
     glVertex3f(0.875, -0.25, 0.05 );      // V7
    glVertex3f(0.825, -0.25, 0.05 );      // V8
    glEnd();

    // LADO DERECHO: lado verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  0.0 ); 
     glVertex3f(  0.825, 0.3, -0.05 );   //v1
   glVertex3f(  0.875, 0.3, -0.05 );  //v2
     glVertex3f(  0.875, 0.3, 0.05 );  //v6
      glVertex3f(  0.825, 0.3, 0.05 );  //v5
    glEnd();

    // LADO INFERIOR: lado Amarillo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,  0.0 );
      glVertex3f(0.825, -0.25, 0.05 ); //v8
    glVertex3f(0.875, -0.25, 0.05 );  //v7
    glVertex3f(0.875, -0.25, -0.05 );    //v3
    glVertex3f(0.825, -0.25, -0.05 ); //v4
    glEnd();

    // LADO SUPERIOR: lado azul
    glBegin(GL_POLYGON);
    glColor3f(0.0,  0.0,  1.0 );
     glVertex3f(  0.875, 0.3, 0.05 );//v6
    glVertex3f(  0.875, 0.3, -0.05 );  //v2
   glVertex3f(0.875, -0.25, -0.05 );    //v3
    glVertex3f(0.875, -0.25, 0.05 );  //v7
    glEnd();

    // LADO IZQUIERDO: lado rojo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(  0.825, 0.3, -0.05 );  //v1
    glVertex3f(  0.825, 0.3, 0.05 );  //v5
     glVertex3f(0.825, -0.25, 0.05 );//v8
     glVertex3f(0.825, -0.25, -0.05 ); //v4
    glEnd();
    
        //*********************** IMAN
    // Primera cara, se identifica por multiples colores
    glBegin(GL_POLYGON);
	glColor3f( 1.0, 1.0, 1.0 );
    glVertex3f(  0.8, -0.25, -0.1 );      // V1 Blanco
    glVertex3f(  0.9, -0.25, -0.1 );      // V2 Amarillo
     glColor3f( 1.0, 0.0, 0.0 );
     glVertex3f(0.9, -0.2, -0.1);      // V3 es azul
    glVertex3f(0.8, -0.2, -0.1);      // V4 rojo
    glEnd();

    // LADO TRASERO: lado blanco
    glBegin(GL_POLYGON);
    glColor3f( 1.0,  1.0, 1.0 ); 
    glVertex3f(  0.8, -0.25, 0.1 );      // V5
    glVertex3f(  0.9, -0.25, 0.1 );      // V6
     glVertex3f(0.9, -0.2, 0.1);      // V7
    glVertex3f(0.8, -0.2, 0.1);      // V8
    glEnd();

    // LADO DERECHO: lado verde
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  1.0,  0.0 ); 
     glVertex3f(  0.8, -0.25, -0.1 );   //v1
   glVertex3f(  0.9, -0.25, -0.1 );  //v2
     glVertex3f(  0.9, -0.25, 0.1 );   //v6
     glVertex3f(  0.8, -0.25, 0.1 );   //v5
    glEnd();

    // LADO INFERIOR: lado Amarillo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  1.0,  0.0 );
      glVertex3f(0.8, -0.2, 0.1);  //v8
     glVertex3f(0.9, -0.2, 0.1);  //v7
    glVertex3f(0.9, -0.2, -0.1);    //v3
    glVertex3f(0.8, -0.2, -0.1);  //v4
    glEnd();

    // LADO SUPERIOR: lado azul
    glBegin(GL_POLYGON);
    glColor3f(0.0,  0.0,  1.0 );
     glVertex3f(  0.9, -0.25, 0.1 );//v6
    glVertex3f(  0.9, -0.25, -0.1 );  //v2
   glVertex3f(0.9, -0.2, -0.1);   //v3
    glVertex3f(0.9, -0.2, 0.1);  //v7
    glEnd();

    // LADO IZQUIERDO: lado rojo
    glBegin(GL_POLYGON);
    glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(  0.8, -0.25, -0.1 ); //v1
    glVertex3f(  0.8, -0.25, 0.1 );  //v5
     glVertex3f(0.8, -0.2, 0.1); //v8
    glVertex3f(0.8, -0.2, -0.1); //v4
    glEnd();
      glFlush();
    glutSwapBuffers();
}

// Función para controlar teclas especiales
void specialKeys( int key, int x, int y )
{ 
   switch (key)
    {
    case GLUT_KEY_LEFT:
     if ( rotate_y<=180){
		 rotate_y += 7;
		 }
        break;
    case GLUT_KEY_RIGHT:
         if ( rotate_y>=0){
		 rotate_y -= 7;
		 }
        break;
    case GLUT_KEY_UP:
    if (Y<=0.125){
		 Y += 0.005f;
		 }
        break;
    case GLUT_KEY_DOWN:
       if (180>rotate_y>165 & Y<0.0){
			 cubito(1,0,1);
		 } else if (Y>=-0.01) {
			 Y -= 0.005f;
			 }
        break;
	}
    glutPostRedisplay();

}

int main(int argc, char* argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (0, 0);
    glutCreateWindow("Grua");
    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(display);
    glutSpecialFunc(specialKeys);
    glutMainLoop();
    return 0;

}

