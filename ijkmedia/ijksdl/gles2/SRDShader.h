#ifndef SRDShader_h
#define SRDShader_h

#include "ff_ffplay_def.h"

static int FLOAT_SIZE_BYTES = 4;
static int VERTICES_DATA_POS_SIZE = 3;
static int VERTICES_DATA_UV_SIZE = 2;
static int VERTICES_DATA_STRIDE_BYTES = (3 + 2) * 4;
static int VERTICES_DATA_POS_OFFSET = 0;
static int VERTICES_DATA_UV_OFFSET = 0 + 3 * 4;

const static char indices[] = {
    0, 3, 2, // first triangle
    0, 2, 1  // second triangle
};

const static GLfloat vertices[20] = {
    // X, Y, Z, U, V
    -1, -1, 0, 0, 1, // Bottom Left
    1, -1, 0, 1, 1, //Bottom Right
    1, 1, 0, 1, 0, //Top Right
    -1, 1, 0, 0, 0 //Top Left
};

//const char vertex_shader_saturation[] = {
//    "attribute vec4 aPosition;\n"
//    "attribute vec4 aTextureCoord;\n"
//    "varying vec2 vTextureCoord;\n"
//
//    "void main() {\n"
//    "  gl_Position = aPosition;\n"
//    "  vTextureCoord = aTextureCoord.xy;\n"
//    "}\n"
//};
//
//static const char frame_shader_saturation[] = {
//    "varying highp vec2 vTextureCoord;\n"
//    "uniform sampler2D sTexture;\n"
//    "uniform lowp float saturation;\n"
//    "const mediump vec3 luminanceWeighting = vec3(0.2125, 0.7154, 0.0721);\n"
//
//    "void main() {\n"
//    "   lowp vec4 textureColor = texture2D(sTexture, vTextureCoord);\n"
//    "   lowp float luminance = dot(textureColor.rgb, luminanceWeighting);\n"
//    "   lowp vec3 greyScaleColor = vec3(luminance);\n"
//    "   gl_FragColor = vec4(mix(greyScaleColor, textureColor.rgb, saturation), textureColor.w);\n"
//    "}\n"
//};

#endif /* SRDShader_h */
