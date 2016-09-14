/*
 *
 *  Copyright (C) Microsoft Corporation, 1999-2000
 *
 *  File: tsattrs.h
 *
 *  List of ITextStore standard attributes.
 *
 */
#ifndef _TSATTRS_H_
#define _TSATTRS_H_




DEFINE_GUID(TSATTRID_OTHERS,                            0xb3c32af9,0x57d0,0x46a9,0xbc,0xa8,0xda,0xc2,0x38,0xa1,0x30,0x57);

DEFINE_GUID(TSATTRID_Font,                              0x573ea825,0x749b,0x4f8a,0x9c,0xfd,0x21,0xc3,0x60,0x5c,0xa8,0x28);
DEFINE_GUID(TSATTRID_Font_FaceName,                     0xb536aeb6,0x053b,0x4eb8,0xb6,0x5a,0x50,0xda,0x1e,0x81,0xe7,0x2e);
DEFINE_GUID(TSATTRID_Font_SizePts,                      0xc8493302,0xa5e9,0x456d,0xaf,0x04,0x80,0x05,0xe4,0x13,0x0f,0x03);
DEFINE_GUID(TSATTRID_Font_Style,                        0x68b2a77f,0x6b0e,0x4f28,0x81,0x77,0x57,0x1c,0x2f,0x3a,0x42,0xb1);
DEFINE_GUID(TSATTRID_Font_Style_Bold,                   0x48813a43,0x8a20,0x4940,0x8e,0x58,0x97,0x82,0x3f,0x7b,0x26,0x8a);
DEFINE_GUID(TSATTRID_Font_Style_Italic,                 0x8740682a,0xa765,0x48e1,0xac,0xfc,0xd2,0x22,0x22,0xb2,0xf8,0x10);
DEFINE_GUID(TSATTRID_Font_Style_SmallCaps,              0xfacb6bc6,0x9100,0x4cc6,0xb9,0x69,0x11,0xee,0xa4,0x5a,0x86,0xb4);
DEFINE_GUID(TSATTRID_Font_Style_Capitalize,				0x7d85a3ba, 0xb4fd, 0x43b3, 0xbe, 0xfc, 0x6b, 0x98, 0x5c, 0x84, 0x31, 0x41);
DEFINE_GUID(TSATTRID_Font_Style_Uppercase,				0x33a300e8, 0xe340, 0x4937, 0xb6, 0x97, 0x8f, 0x23, 0x40, 0x45, 0xcd, 0x9a);
DEFINE_GUID(TSATTRID_Font_Style_Lowercase,				0x76d8ccb5, 0xca7b, 0x4498, 0x8e, 0xe9, 0xd5, 0xc4, 0xf6, 0xf7, 0x4c, 0x60);
DEFINE_GUID(TSATTRID_Font_Style_Animation,				0xdcf73d22, 0xe029, 0x47b7, 0xbb, 0x36, 0xf2, 0x63, 0xa3, 0xd0, 0x04, 0xcc);
DEFINE_GUID(TSATTRID_Font_Style_Animation_LasVegasLights,0xf40423d5, 0xf87, 0x4f8f, 0xba, 0xda, 0xe6, 0xd6, 0xc, 0x25, 0xe1, 0x52);
DEFINE_GUID(TSATTRID_Font_Style_Animation_BlinkingBackground,0x86e5b104, 0x0104, 0x4b10, 0xb5, 0x85, 0x00, 0xf2, 0x52, 0x75, 0x22, 0xb5);
DEFINE_GUID(TSATTRID_Font_Style_Animation_SparkleText,	0x533aad20, 0x962c, 0x4e9f, 0x8c, 0x09, 0xb4, 0x2e, 0xa4, 0x74, 0x97, 0x11);
DEFINE_GUID(TSATTRID_Font_Style_Animation_MarchingBlackAnts, 0x7644e067, 0xf186, 0x4902, 0xbf, 0xc6, 0xec, 0x81, 0x5a, 0xa2, 0x0e, 0x9d);
DEFINE_GUID(TSATTRID_Font_Style_Animation_MarchingRedAnts, 0x78368dad, 0x50fb, 0x4c6f, 0x84, 0x0b, 0xd4, 0x86, 0xbb, 0x6c, 0xf7, 0x81);
DEFINE_GUID(TSATTRID_Font_Style_Animation_Shimmer,		0x2ce31b58, 0x5293, 0x4c36, 0x88, 0x09, 0xbf, 0x8b, 0xb5, 0x1a, 0x27, 0xb3);
DEFINE_GUID(TSATTRID_Font_Style_Animation_WipeDown,		0x5872e874, 0x367b, 0x4803, 0xb1, 0x60, 0xc9, 0x0f, 0xf6, 0x25, 0x69, 0xd0);
DEFINE_GUID(TSATTRID_Font_Style_Animation_WipeRight,	0xb855cbe3, 0x3d2c, 0x4600, 0xb1, 0xe9, 0xe1, 0xc9, 0xce, 0x02, 0xf8, 0x42);
DEFINE_GUID(TSATTRID_Font_Style_Emboss,					0xbd8ed742, 0x349e, 0x4e37, 0x82, 0xfb, 0x43, 0x79, 0x79, 0xcb, 0x53, 0xa7);
DEFINE_GUID(TSATTRID_Font_Style_Engrave,				0x9c3371de, 0x8332, 0x4897, 0xbe, 0x5d, 0x89, 0x23, 0x32, 0x23, 0x17, 0x9a);
DEFINE_GUID(TSATTRID_Font_Style_Hidden,					0xb1e28770, 0x881c, 0x475f, 0x86, 0x3f, 0x88, 0x7a, 0x64, 0x7b, 0x10, 0x90);
DEFINE_GUID(TSATTRID_Font_Style_Kerning,				0xcc26e1b4, 0x2f9a, 0x47c8, 0x8b, 0xff, 0xbf, 0x1e, 0xb7, 0xcc, 0xe0, 0xdd);
DEFINE_GUID(TSATTRID_Font_Style_Outlined,				0x10e6db31, 0xdb0d, 0x4ac6, 0xa7, 0xf5, 0x9c, 0x9c, 0xff, 0x6f, 0x2a, 0xb4);
DEFINE_GUID(TSATTRID_Font_Style_Position,				0x15cd26ab, 0xf2fb, 0x4062, 0xb5, 0xa6, 0x9a, 0x49, 0xe1, 0xa5, 0xcc, 0x0b);
DEFINE_GUID(TSATTRID_Font_Style_Protected,				0x1c557cb2, 0x14cf, 0x4554, 0xa5, 0x74, 0xec, 0xb2, 0xf7, 0xe7, 0xef, 0xd4);
DEFINE_GUID(TSATTRID_Font_Style_Shadow,					0x5f686d2f, 0xc6cd, 0x4c56, 0x8a, 0x1a, 0x99, 0x4a, 0x4b, 0x97, 0x66, 0xbe);
DEFINE_GUID(TSATTRID_Font_Style_Spacing,				0x98c1200d, 0x8f06, 0x409a, 0x8e, 0x49, 0x6a, 0x55, 0x4b, 0xf7, 0xc1, 0x53);
DEFINE_GUID(TSATTRID_Font_Style_Weight,					0x12f3189c, 0x8bb0, 0x461b, 0xb1, 0xfa, 0xea, 0xf9, 0x07, 0x04, 0x7f, 0xe0);
DEFINE_GUID(TSATTRID_Font_Style_Height,					0x7e937477, 0x12e6, 0x458b, 0x92, 0x6a, 0x1f, 0xa4, 0x4e, 0xe8, 0xf3, 0x91);
DEFINE_GUID(TSATTRID_Font_Style_Underline,              0xc3c9c9f3,0x7902,0x444b,0x9a,0x7b,0x48,0xe7,0x0f,0x4b,0x50,0xf7);
DEFINE_GUID(TSATTRID_Font_Style_Underline_Single,       0x1b6720e5,0x0f73,0x4951,0xa6,0xb3,0x6f,0x19,0xe4,0x3c,0x94,0x61);
DEFINE_GUID(TSATTRID_Font_Style_Underline_Double,       0x74d24aa6, 0x1db3, 0x4c69, 0xa1, 0x76, 0x31, 0x12, 0x0e, 0x75, 0x86, 0xd5);
DEFINE_GUID(TSATTRID_Font_Style_Strikethrough,          0x0c562193,0x2d08,0x4668,0x96,0x01,0xce,0xd4,0x13,0x09,0xd7,0xaf);
DEFINE_GUID(TSATTRID_Font_Style_Strikethrough_Single,   0x75d736b6,0x3c8f,0x4b97,0xab,0x78,0x18,0x77,0xcb,0x99,0x0d,0x31);
DEFINE_GUID(TSATTRID_Font_Style_Strikethrough_Double,   0x62489b31, 0xa3e7, 0x4f94, 0xac, 0x43, 0xeb, 0xaf, 0x8f, 0xcc, 0x7a, 0x9f);
DEFINE_GUID(TSATTRID_Font_Style_Overline,               0xe3989f4a,0x992b,0x4301,0x8c,0xe1,0xa5,0xb7,0xc6,0xd1,0xf3,0xc8);
DEFINE_GUID(TSATTRID_Font_Style_Overline_Single,        0x8440d94c,0x51ce,0x47b2,0x8d,0x4c,0x15,0x75,0x1e,0x5f,0x72,0x1b);
DEFINE_GUID(TSATTRID_Font_Style_Overline_Double,        0xdc46063a, 0xe115, 0x46e3, 0xbc, 0xd8, 0xca, 0x67, 0x72, 0xaa, 0x95, 0xb4);
DEFINE_GUID(TSATTRID_Font_Style_Blink,         		    0xbfb2c036, 0x7acf, 0x4532, 0xb7, 0x20, 0xb4, 0x16, 0xdd, 0x77, 0x65, 0xa8);
DEFINE_GUID(TSATTRID_Font_Style_Subscript,              0x5774fb84,0x389b,0x43bc,0xa7,0x4b,0x15,0x68,0x34,0x7c,0xf0,0xf4);
DEFINE_GUID(TSATTRID_Font_Style_Superscript,            0x2ea4993c,0x563c,0x49aa,0x93,0x72,0x0b,0xef,0x09,0xa9,0x25,0x5b);
DEFINE_GUID(TSATTRID_Font_Style_Color,                  0x857a7a37,0xb8af,0x4e9a,0x81,0xb4,0xac,0xf7,0x00,0xc8,0x41,0x1b);
DEFINE_GUID(TSATTRID_Font_Style_BackgroundColor,		0xb50eaa4e, 0x3091, 0x4468, 0x81, 0xdb, 0xd7, 0x9e, 0xa1, 0x90, 0xc7, 0xc7);

DEFINE_GUID(TSATTRID_Text,              				0x7edb8e68, 0x81f9, 0x449d, 0xa1, 0x5a, 0x87, 0xa8, 0x38, 0x8f, 0xaa, 0xc0);
DEFINE_GUID(TSATTRID_Text_VerticalWriting,              0x6bba8195,0x046f,0x4ea9,0xb3,0x11,0x97,0xfd,0x66,0xc4,0x27,0x4b);
DEFINE_GUID(TSATTRID_Text_RightToLeft,                  0xca666e71,0x1b08,0x453d,0xbf,0xdd,0x28,0xe0,0x8c,0x8a,0xaf,0x7a);
DEFINE_GUID(TSATTRID_Text_Orientation,                  0x6bab707f,0x8785,0x4c39,0x8b,0x52,0x96,0xf8,0x78,0x30,0x3f,0xfb);
DEFINE_GUID(TSATTRID_Text_Language,                     0xd8c04ef1,0x5753,0x4c25,0x88,0x87,0x85,0x44,0x3f,0xe5,0xf8,0x19);
DEFINE_GUID(TSATTRID_Text_ReadOnly,                     0x85836617,0xde32,0x4afd,0xa5,0x0f,0xa2,0xdb,0x11,0x0e,0x6e,0x4d);
DEFINE_GUID(TSATTRID_Text_EmbeddedObject,               0x7edb8e68, 0x81f9, 0x449d, 0xa1, 0x5a, 0x87, 0xa8, 0x38, 0x8f, 0xaa, 0xc0);
DEFINE_GUID(TSATTRID_Text_Alignment,               		0x139941e6, 0x1767, 0x456d, 0x93, 0x8e, 0x35, 0xba, 0x56, 0x8b, 0x5c, 0xd4);
DEFINE_GUID(TSATTRID_Text_Alignment_Left,          		0x16ae95d3, 0x6361, 0x43a2, 0x84, 0x95, 0xd0, 0x0f, 0x39, 0x7f, 0x16, 0x93);
DEFINE_GUID(TSATTRID_Text_Alignment_Right,        		0xb36f0f98, 0x1b9e, 0x4360, 0x86, 0x16, 0x03, 0xfb, 0x08, 0xa7, 0x84, 0x56);
DEFINE_GUID(TSATTRID_Text_Alignment_Center,        		0xa4a95c16, 0x53bf, 0x4d55, 0x8b, 0x87, 0x4b, 0xdd, 0x8d, 0x42, 0x75, 0xfc);
DEFINE_GUID(TSATTRID_Text_Alignment_Justify,       		0xed350740, 0xa0f7, 0x42d3, 0x8e, 0xa8, 0xf8, 0x1b, 0x64, 0x88, 0xfa, 0xf0);
DEFINE_GUID(TSATTRID_Text_Link,               			0x47cd9051, 0x3722, 0x4cd8, 0xb7, 0xc8, 0x4e, 0x17, 0xca, 0x17, 0x59, 0xf5);
DEFINE_GUID(TSATTRID_Text_Hyphenation,               	0xdadf4525, 0x618e, 0x49eb, 0xb1, 0xa8, 0x3b, 0x68, 0xbd, 0x76, 0x48, 0xe3);
DEFINE_GUID(TSATTRID_Text_Para,		               		0x5edc5822, 0x99dc, 0x4dd6, 0xae, 0xc3, 0xb6, 0x2b, 0xaa, 0x5b, 0x2e, 0x7c);
DEFINE_GUID(TSATTRID_Text_Para_FirstLineIndent,         0x07c97a13, 0x7472, 0x4dd8, 0x90, 0xa9, 0x91, 0xe3, 0xd7, 0xe4, 0xf2, 0x9c);
DEFINE_GUID(TSATTRID_Text_Para_LeftIndent,              0xfb2848e9, 0x7471, 0x41c9, 0xb6, 0xb3, 0x8a, 0x14, 0x50, 0xe0, 0x18, 0x97);
DEFINE_GUID(TSATTRID_Text_Para_RightIndent,             0x2c7f26f9, 0xa5e2, 0x48da, 0xb9, 0x8a, 0x52, 0x0c, 0xb1, 0x65, 0x13, 0xbf);
DEFINE_GUID(TSATTRID_Text_Para_SpaceAfter,              0x7b0a3f55, 0x22dc, 0x425f, 0xa4, 0x11, 0x93, 0xda, 0x1d, 0x8f, 0x9b, 0xaa);
DEFINE_GUID(TSATTRID_Text_Para_SpaceBefore,             0x8df98589, 0x194a, 0x4601, 0xb2, 0x51, 0x98, 0x65, 0xa3, 0xe9, 0x06, 0xdd);
DEFINE_GUID(TSATTRID_Text_Para_LineSpacing,             0x699b380d, 0x7f8c, 0x46d6, 0xa7, 0x3b, 0xdf, 0xe3, 0xd1, 0x53, 0x8d, 0xf3);
DEFINE_GUID(TSATTRID_Text_Para_LineSpacing_Single,   	0xed350740, 0xa0f7, 0x42d3, 0x8e, 0xa8, 0xf8, 0x1b, 0x64, 0x88, 0xfa, 0xf0);
DEFINE_GUID(TSATTRID_Text_Para_LineSpacing_OnePtFive,	0x0428a021, 0x0397, 0x4b57, 0x9a, 0x17, 0x07, 0x95, 0x99, 0x4c, 0xd3, 0xc5);
DEFINE_GUID(TSATTRID_Text_Para_LineSpacing_Double,  	0x82fb1805, 0xa6c4, 0x4231, 0xac, 0x12, 0x62, 0x60, 0xaf, 0x2a, 0xba, 0x28);
DEFINE_GUID(TSATTRID_Text_Para_LineSpacing_AtLeast, 	0xadfedf31, 0x2d44, 0x4434, 0xa5, 0xff, 0x7f, 0x4c, 0x49, 0x90, 0xa9, 0x05);
DEFINE_GUID(TSATTRID_Text_Para_LineSpacing_Exactly, 	0x3d45ad40, 0x23de, 0x48d7, 0xa6, 0xb3, 0x76, 0x54, 0x20, 0xc6, 0x20, 0xcc);
DEFINE_GUID(TSATTRID_Text_Para_LineSpacing_Multiple, 	0x910f1e3c, 0xd6d0, 0x4f65, 0x8a, 0x3c, 0x42, 0xb4, 0xb3, 0x18, 0x68, 0xc5);

DEFINE_GUID(TSATTRID_List,                              0x436d673b, 0x26f1, 0x4aee, 0x9e, 0x65, 0x8f, 0x83, 0xa4, 0xed, 0x48, 0x84);
DEFINE_GUID(TSATTRID_List_LevelIndel,            		0x7f7cc899, 0x311f, 0x487b, 0xad, 0x5d, 0xe2, 0xa4, 0x59, 0xe1, 0x2d, 0x42);
DEFINE_GUID(TSATTRID_List_Type,             			0xae3e665e, 0x4bce, 0x49e3, 0xa0, 0xfe, 0x2d, 0xb4, 0x7d, 0x3a, 0x17, 0xae);
DEFINE_GUID(TSATTRID_List_Type_Bullet,        			0xbccd77c5, 0x4c4d, 0x4ce2, 0xb1, 0x02, 0x55, 0x9f, 0x3b, 0x2b, 0xfc, 0xea);
DEFINE_GUID(TSATTRID_List_Type_Arabic,        			0x1338c5d6, 0x98a3, 0x4fa3, 0x9b, 0xd1, 0x7a, 0x60, 0xee, 0xf8, 0xe9, 0xe0);
DEFINE_GUID(TSATTRID_List_Type_LowerLetter,    			0x96372285, 0xf3cf, 0x491e, 0xa9, 0x25, 0x38, 0x32, 0x34, 0x7f, 0xd2, 0x37);
DEFINE_GUID(TSATTRID_List_Type_UpperLetter,             0x7987b7cd, 0xce52, 0x428b, 0x9b, 0x95, 0xa3, 0x57, 0xf6, 0xf1, 0x0c, 0x45);
DEFINE_GUID(TSATTRID_List_Type_LowerRoman,             	0x90466262, 0x3980, 0x4b8e, 0x93, 0x68, 0x91, 0x8b, 0xd1, 0x21, 0x8a, 0x41);
DEFINE_GUID(TSATTRID_List_Type_UpperRoman,          	0x0f6ab552, 0x4a80, 0x467f, 0xb2, 0xf1, 0x12, 0x7e, 0x2a, 0xa3, 0xba, 0x9e);

DEFINE_GUID(TSATTRID_App,                               0xa80f77df,0x4237,0x40e5,0x84,0x9c,0xb5,0xfa,0x51,0xc1,0x3a,0xc7);
DEFINE_GUID(TSATTRID_App_IncorrectSpelling,             0xf42de43c,0xef12,0x430d,0x94,0x4c,0x9a,0x08,0x97,0x0a,0x25,0xd2);
DEFINE_GUID(TSATTRID_App_IncorrectGrammar,              0xbd54e398,0xad03,0x4b74,0xb6,0xb3,0x5e,0xdb,0x19,0x99,0x63,0x88);

#endif








