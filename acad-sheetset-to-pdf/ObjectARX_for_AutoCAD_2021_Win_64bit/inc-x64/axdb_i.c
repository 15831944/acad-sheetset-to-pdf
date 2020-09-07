//////////////////////////////////////////////////////////////////////////////
//
//  Copyright 2020 Autodesk, Inc.  All rights reserved.
//
//  Use of this software is subject to the terms of the Autodesk license 
//  agreement provided at the time of installation or download, or which 
//  otherwise accompanies this software in either electronic or hard copy form.   
//
//////////////////////////////////////////////////////////////////////////////



/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Mon Jan 18 19:14:07 2038
 */
/* Compiler settings for idlsource\axdb.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_AXDBLib,0x39FFAA00,0x8623,0x488F,0x8C,0x53,0xDD,0x3B,0x0B,0x7A,0x46,0x4F);


MIDL_DEFINE_GUID(IID, IID_IAcadObject,0xC932C340,0xCE5D,0x442A,0xBC,0x19,0xD3,0x59,0x97,0x54,0x9D,0x4A);


MIDL_DEFINE_GUID(IID, IID_IAcadDictionary,0x8ED1EC97,0xE674,0x4AE4,0x89,0xAF,0x8E,0xDC,0xDE,0xFF,0xEF,0xA7);


MIDL_DEFINE_GUID(IID, IID_IAcadEntity,0xAB9F53A4,0xBA00,0x499B,0xBE,0x4C,0xD1,0x78,0xEC,0x67,0xFF,0xCC);


MIDL_DEFINE_GUID(IID, IID_IAcadBlock,0xB77B7E91,0xEDDE,0x4AEA,0xA3,0x6E,0xA4,0x78,0xDE,0x36,0xC4,0x05);


MIDL_DEFINE_GUID(IID, IID_IAcadDatabase,0x3280D375,0x1DE4,0x4DA2,0x89,0xEE,0x59,0x1E,0x86,0x00,0x56,0xDC);


MIDL_DEFINE_GUID(IID, IID_IAcadSectionTypeSettings,0x30B3E137,0xB298,0x4087,0x93,0x0B,0xC5,0xC6,0xEC,0x24,0xB4,0x7D);


MIDL_DEFINE_GUID(IID, IID_IAcadSectionTypeSettings2,0x4C37F08E,0x7CA8,0x403B,0xBC,0xBC,0x43,0xCE,0x57,0x78,0x4F,0xE8);


MIDL_DEFINE_GUID(IID, IID_IAcadHyperlink,0x842D073F,0x0DEE,0x4B16,0x89,0x32,0x96,0x33,0xBA,0x72,0xB6,0xA5);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadHyperlink,0x964DCDEF,0x9FFD,0x4F26,0xAF,0xD3,0xC7,0x2A,0x48,0x7D,0xAF,0x0E);


MIDL_DEFINE_GUID(IID, IID_IAcadDynamicBlockReferenceProperty,0xD309405C,0x6772,0x4C7E,0x88,0xD2,0xDC,0x64,0x71,0xA1,0xA6,0x78);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDynamicBlockReferenceProperty,0x27858BB8,0x4DAB,0x4245,0xA7,0x80,0x33,0x2F,0xB0,0x80,0x1C,0x8B);


MIDL_DEFINE_GUID(IID, IID_IAcadAcCmColor,0x3C282526,0xB9FD,0x4131,0x9B,0x76,0xCB,0xCC,0xE8,0xB9,0x4A,0xCF);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadAcCmColor,0xD97EB149,0x1A3D,0x46FD,0x81,0x3B,0x59,0xEF,0xCE,0x6E,0x46,0xB9);


MIDL_DEFINE_GUID(IID, IID_IAcadObjectEvents,0x6B854981,0xD908,0x4086,0x8A,0xA1,0x91,0x83,0xB1,0x02,0xEC,0xA7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadObject,0xE89B39BB,0x5AE4,0x4C52,0x90,0x11,0xB7,0x0F,0xC6,0x63,0xF2,0x49);


MIDL_DEFINE_GUID(IID, IID_IAcadXRecord,0xC90BD975,0x4088,0x47A3,0xAA,0x1B,0xD7,0xDB,0xC1,0x90,0x75,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadXRecord,0xD405F96F,0xC9DB,0x46FD,0x99,0x00,0xD9,0xD1,0xBB,0x0D,0x1F,0x03);


MIDL_DEFINE_GUID(IID, IID_IAcadSortentsTable,0x0961EABA,0xEA0E,0x42D7,0x9E,0xE8,0x0E,0x33,0x97,0x1D,0xF8,0x8D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSortentsTable,0xA611C7DB,0x74C8,0x4FD9,0xAB,0x5B,0xD0,0x83,0x76,0x20,0x00,0xCD);


MIDL_DEFINE_GUID(IID, IID_IAcadDimStyle,0xB001A02B,0x0560,0x4954,0xB9,0x21,0xCF,0xF7,0x86,0xEA,0xD2,0xC6);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimStyle,0x1B285082,0x1727,0x4600,0xBC,0x69,0x1C,0x1C,0x00,0x4C,0x66,0x28);


MIDL_DEFINE_GUID(IID, IID_IAcadLayer,0x57995A1E,0x64DB,0x4C6C,0x81,0x55,0x1F,0x9E,0x6F,0xB6,0x08,0xE2);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLayer,0x1E31CE43,0x12BA,0x4BE7,0x93,0x94,0x6E,0xBD,0xCA,0x1A,0xAD,0xFC);


MIDL_DEFINE_GUID(IID, IID_IAcadLineType,0x195E95A0,0x500A,0x4187,0x9E,0xAC,0xE0,0x33,0xBB,0x9B,0x1B,0x08);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLineType,0xB392F9EC,0x5B73,0x4455,0xAD,0x91,0xE8,0x45,0xD5,0xD9,0x78,0xFC);


MIDL_DEFINE_GUID(IID, IID_IAcadMaterial,0xBCDA7885,0xFBA7,0x4667,0x89,0xF9,0x00,0x77,0xE3,0xB9,0xCE,0xAB);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMaterial,0xD2A70F44,0x4DD3,0x4067,0xA1,0x43,0x7A,0x0F,0x1C,0x81,0x2F,0x26);


MIDL_DEFINE_GUID(IID, IID_IAcadRegisteredApplication,0xC50B91F6,0x35CF,0x4693,0x8E,0x2D,0x2F,0xC1,0xB5,0xB2,0xCD,0xF1);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadRegisteredApplication,0x11CC57D1,0xF68F,0x453C,0xA8,0x5E,0xCD,0xD4,0x6E,0x2C,0xC3,0xDF);


MIDL_DEFINE_GUID(IID, IID_IAcadTextStyle,0x739F20C7,0x25D3,0x431E,0x88,0xB7,0xB7,0x82,0x4C,0xA4,0xD7,0xBC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadTextStyle,0x1830928F,0x7ADD,0x44DC,0xA2,0xB0,0x59,0xFD,0x29,0x19,0xBA,0xA9);


MIDL_DEFINE_GUID(IID, IID_IAcadUCS,0xBFDBCCFC,0xE4F2,0x4C36,0x85,0xFC,0x20,0x59,0x5E,0x28,0xCD,0x3B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadUCS,0xA49DCF2A,0xE89D,0x4E57,0x84,0x24,0xE3,0xA8,0xEC,0xDD,0x93,0x33);


MIDL_DEFINE_GUID(IID, IID_IAcadView,0x46A58B9D,0x5804,0x49B7,0x8D,0x92,0x1D,0x62,0x68,0x63,0xA0,0x25);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadView,0x4A02F1AB,0xE854,0x44B5,0xB6,0xBD,0x30,0x5D,0xCB,0x89,0x29,0x8C);


MIDL_DEFINE_GUID(IID, IID_IAcadViewport,0x37113848,0x87F7,0x4A28,0xBE,0xA7,0x4B,0x85,0x59,0xC6,0x03,0xC7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadViewport,0xB9509029,0x77C1,0x4B48,0xB5,0xD2,0x81,0x71,0x2F,0x6B,0x45,0x54);


MIDL_DEFINE_GUID(IID, IID_IAcadGroup,0x2DB9C67E,0x2834,0x4616,0x9A,0xED,0xC4,0x36,0x30,0x01,0x48,0xA2);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadGroup,0x5D653066,0x340C,0x4C20,0xBA,0xA4,0xC0,0x8F,0x66,0x3D,0x77,0x20);


MIDL_DEFINE_GUID(IID, IID_IAcadPlotConfiguration,0x5C7DCDF9,0x0A55,0x4A13,0x94,0x61,0x23,0xBF,0x37,0xC7,0x7D,0x3D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPlotConfiguration,0x0F8A73CC,0xB84B,0x48E3,0xB5,0x24,0x85,0x67,0x74,0x04,0x6A,0xFA);


MIDL_DEFINE_GUID(IID, IID_IAcadLayout,0x7A524437,0xAD0E,0x48C6,0xBC,0x94,0x98,0xBC,0x85,0x36,0x8B,0xD8);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLayout,0xCD4D07B0,0x8979,0x4D31,0x9A,0x70,0x85,0x91,0x66,0x0A,0x65,0x26);


MIDL_DEFINE_GUID(IID, IID_IAcadIdPair,0x0AAE4A11,0x8E81,0x4A97,0xA5,0x89,0x10,0x17,0xE1,0x21,0x7D,0x34);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadIdPair,0x21A80FBF,0x5CE3,0x49F5,0x9A,0xAB,0x54,0xF8,0x79,0x98,0x9D,0xC8);


MIDL_DEFINE_GUID(IID, IID_IAcadTableStyle,0x0FE4779E,0xAD2A,0x4119,0xBE,0xA5,0x2C,0xD6,0xC1,0xE4,0x66,0x60);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadTableStyle,0x99E5E0B7,0x1075,0x4690,0xA7,0x1F,0x2C,0x0B,0xD8,0xFB,0x3C,0xCF);


MIDL_DEFINE_GUID(IID, IID_IAcadSectionSettings,0xBE0D8A6F,0x5C5D,0x4A81,0x8D,0x29,0xFF,0x60,0x65,0xAD,0x95,0x85);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSectionSettings,0x905B42B9,0xEECD,0x4EBE,0x98,0xD2,0xE8,0x9D,0x77,0x1C,0x3A,0xEB);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSectionTypeSettings,0xB6EBE4C1,0x471A,0x414D,0xB3,0x27,0x81,0x44,0x8D,0xC0,0xC6,0x95);


MIDL_DEFINE_GUID(IID, IID_IAcadMLeaderStyle,0x96F5A34E,0x07CA,0x4EF1,0x92,0xF6,0xD1,0x91,0x50,0xA2,0x72,0xAC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMLeaderStyle,0x969B7B08,0x18C4,0x4AD7,0xB6,0x93,0xCF,0x1F,0x0D,0x00,0x30,0xC9);


MIDL_DEFINE_GUID(IID, IID_IAcadHyperlinks,0x5175757D,0x927E,0x47BD,0x8F,0x7A,0x17,0xB9,0xA4,0xC6,0x9E,0x0B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadHyperlinks,0x61C3D6C7,0x2377,0x44AA,0x8B,0xEE,0x67,0x9F,0x5F,0x33,0xB4,0x3E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDictionary,0x93F9C422,0xE004,0x4A54,0xBF,0x80,0x52,0x41,0x3A,0xC1,0xAE,0x4C);


MIDL_DEFINE_GUID(IID, IID_IAcadLayers,0x955BD2D0,0xD331,0x4E04,0xB5,0x0D,0xD3,0x63,0x2B,0xCA,0xF5,0xF2);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLayers,0xB1F3FF11,0xC736,0x4C8C,0xA4,0x0F,0x5A,0x3C,0xA4,0xCE,0x7D,0xF3);


MIDL_DEFINE_GUID(IID, IID_IAcadDimStyles,0x2932818F,0xC836,0x44F9,0x93,0x29,0x3A,0x27,0x62,0x8B,0x47,0x8A);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimStyles,0xAA729017,0x8814,0x447E,0x96,0x89,0x89,0x38,0xE9,0xE8,0x0D,0xCC);


MIDL_DEFINE_GUID(IID, IID_IAcadDictionaries,0x3ADFB200,0xA04C,0x434F,0x97,0x5E,0x3A,0x3F,0x97,0x87,0x86,0xA2);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDictionaries,0xF5A1F731,0x868F,0x429D,0x9F,0xC7,0xA3,0xBF,0xCE,0xCE,0x1B,0x52);


MIDL_DEFINE_GUID(IID, IID_IAcadLineTypes,0x2EB8451D,0x2CFB,0x4F35,0xA9,0xD9,0x24,0x32,0x3A,0xB7,0x43,0x50);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLineTypes,0x0587D4C0,0xB89E,0x409F,0xAC,0xEE,0xBD,0x28,0xB0,0xFF,0x08,0x64);


MIDL_DEFINE_GUID(IID, IID_IAcadMaterials,0x81B5645D,0x003B,0x4F35,0xB5,0xFB,0xF0,0xBA,0xBE,0x4D,0xD2,0x17);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMaterials,0xD436BEBA,0x2110,0x4F9A,0x80,0xE7,0x5B,0x90,0xA7,0x3D,0x74,0xF4);


MIDL_DEFINE_GUID(IID, IID_IAcadTextStyles,0x6464273B,0x23A6,0x40D9,0xB4,0x08,0x6B,0x7A,0x34,0x29,0x89,0x2D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadTextStyles,0xC8E418AC,0x0123,0x4DF1,0xB8,0x24,0x0A,0xBC,0x49,0x26,0x44,0x14);


MIDL_DEFINE_GUID(IID, IID_IAcadUCSs,0xEA8D9DB3,0x5546,0x45F6,0xBB,0xF6,0x84,0x4C,0xA5,0xE3,0xE7,0x3E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadUCSs,0x4F7A6E2D,0xF382,0x42A4,0x8A,0xF7,0xE9,0xC3,0xC8,0x34,0x10,0x2D);


MIDL_DEFINE_GUID(IID, IID_IAcadRegisteredApplications,0x7D6C6772,0xC5CD,0x4633,0xBC,0xFC,0xB4,0xA8,0x85,0x8A,0x6B,0xCB);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadRegisteredApplications,0x3F603B1F,0x39BF,0x4B4D,0x90,0x87,0xA4,0x29,0x07,0xB7,0x9B,0x30);


MIDL_DEFINE_GUID(IID, IID_IAcadViews,0xC08E2EA0,0xFF82,0x4DF6,0xA8,0x5C,0x5D,0xF7,0x9B,0x03,0x39,0x29);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadViews,0x998E1D3B,0xE905,0x462B,0x96,0xE6,0x54,0x19,0xC3,0xC9,0x40,0xF2);


MIDL_DEFINE_GUID(IID, IID_IAcadViewports,0x49C7B6C0,0x8613,0x44CB,0x98,0x0B,0x7C,0xE1,0x37,0x1E,0xA9,0x12);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadViewports,0x0F11EBC7,0x5D82,0x4F89,0x95,0x54,0x28,0x75,0x93,0x9D,0x14,0x7A);


MIDL_DEFINE_GUID(IID, IID_IAcadGroups,0x257DF530,0xAE46,0x4A50,0x89,0x48,0x54,0x94,0x8B,0x2A,0xB0,0x45);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadGroups,0x6E6C338C,0xABF8,0x4F0A,0xAD,0x69,0x2D,0x3D,0xF3,0x1E,0xD8,0x1A);


MIDL_DEFINE_GUID(IID, IID_IAcadBlocks,0x6DC49550,0x9FE8,0x4456,0x97,0x51,0xBC,0xCB,0x9C,0x43,0x6F,0xF3);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadBlocks,0xFBC97E94,0xD43F,0x4371,0xA6,0x5C,0xC5,0x1C,0x00,0xAF,0xBC,0x9E);


MIDL_DEFINE_GUID(IID, IID_IAcadLayouts,0x8C3EC56B,0xADA0,0x4FC9,0x8A,0xAA,0x3B,0x86,0x4E,0xD5,0xB6,0x33);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLayouts,0xD114C2DA,0xAC2A,0x4750,0xBB,0x45,0x85,0xEA,0x01,0x8A,0xA5,0x55);


MIDL_DEFINE_GUID(IID, IID_IAcadPlotConfigurations,0x6F5C4479,0x94B4,0x4ED6,0xB7,0xB0,0x6D,0x17,0x84,0x1B,0xA1,0x98);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPlotConfigurations,0x65D87C07,0xAE70,0x42B5,0xB6,0xC9,0x3C,0xA4,0x7A,0xDB,0x4C,0xFF);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadEntity,0x375AD5D6,0x937B,0x43B3,0x96,0xB9,0x31,0x1E,0x71,0xFD,0x34,0x43);


MIDL_DEFINE_GUID(IID, IID_IAcadShadowDisplay,0x847A8F18,0xD313,0x4382,0x8F,0xC1,0xBD,0xF7,0x98,0x2B,0x2F,0x31);


MIDL_DEFINE_GUID(IID, IID_IAcadRasterImage,0x02F7BB04,0xBE9B,0x49BC,0xBD,0x9E,0xAB,0xBD,0x20,0x8F,0x40,0xED);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadRasterImage,0xDA96617B,0x1C7C,0x40D2,0x81,0xE0,0x9A,0x9A,0xA2,0x0E,0x02,0xB0);


MIDL_DEFINE_GUID(IID, IID_IAcad3DFace,0x9B8BE788,0x0D7C,0x4E0C,0x9D,0xD2,0xFC,0x6F,0x90,0x1B,0x55,0xB9);


MIDL_DEFINE_GUID(CLSID, CLSID_Acad3DFace,0x5CE57A82,0x0435,0x4196,0x89,0x03,0x78,0x44,0x64,0xA9,0x22,0xBC);


MIDL_DEFINE_GUID(IID, IID_IAcad3DPolyline,0x7DDB8F04,0xD663,0x44AE,0xBA,0x05,0xA6,0x25,0x75,0x93,0xFD,0x11);


MIDL_DEFINE_GUID(CLSID, CLSID_Acad3DPolyline,0x86D077B3,0xF930,0x4610,0x9D,0x16,0x3C,0x17,0x7A,0x3B,0x3A,0x1F);


MIDL_DEFINE_GUID(IID, IID_IAcadRegion,0x03E7FB76,0x5FE2,0x40E0,0xB7,0x91,0x73,0xC4,0xD7,0x28,0x87,0x03);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadRegion,0xFD9BB9B5,0x147F,0x4522,0x9A,0x1E,0xFF,0x74,0xC6,0xCF,0x19,0xEB);


MIDL_DEFINE_GUID(IID, IID_IAcad3DSolid,0xF3BF08F3,0xD4F1,0x4625,0x9A,0x66,0x2A,0xB6,0x4C,0x2A,0xB0,0x38);


MIDL_DEFINE_GUID(CLSID, CLSID_Acad3DSolid,0x1DC8FD76,0x8ECA,0x4F4C,0xB7,0xD5,0xC6,0x6F,0x43,0xA6,0x8E,0x17);


MIDL_DEFINE_GUID(IID, IID_IAcadArc,0x87435401,0xD917,0x4FAE,0x98,0x38,0x2C,0xB7,0xB0,0xCA,0xF3,0xB1);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadArc,0xC614C73D,0x2F7E,0x4AFF,0x9B,0xAC,0xEF,0x1C,0xFE,0xFD,0x8D,0x06);


MIDL_DEFINE_GUID(IID, IID_IAcadAttribute,0x47315E42,0x4126,0x4102,0x86,0x3E,0x81,0xC9,0x1B,0x92,0x55,0x79);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadAttribute,0x05508F02,0x2B73,0x41DB,0xA1,0xDF,0xD0,0x12,0xBA,0x4E,0x2A,0xC6);


MIDL_DEFINE_GUID(IID, IID_IAcadAttributeReference,0xCD91B81A,0x62B5,0x43A1,0x9E,0x2D,0x82,0xAC,0x34,0xCF,0x50,0x5F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadAttributeReference,0xD19B44C9,0xE8A6,0x4629,0x8F,0x44,0x6E,0x01,0x2D,0x2A,0xF8,0x68);


MIDL_DEFINE_GUID(IID, IID_IAcadBlockReference,0x456EC1A0,0x3735,0x49AE,0xA5,0x7B,0xD4,0x74,0xA8,0x26,0xDC,0xDC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadBlockReference,0x73D92E94,0x7FDA,0x4285,0xA8,0x1D,0x87,0xC8,0x94,0x67,0x85,0x60);


MIDL_DEFINE_GUID(IID, IID_IAcadCircle,0x36BB03E5,0x4534,0x4F21,0x9C,0x9C,0x0C,0x09,0xC0,0xDC,0x1C,0xF7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadCircle,0x37EFB168,0xE408,0x4A83,0xAF,0x0C,0x5A,0xBC,0x92,0xD3,0x58,0xD4);


MIDL_DEFINE_GUID(IID, IID_IAcadEllipse,0xDF837BB0,0xC4E6,0x405B,0xBF,0x51,0x05,0x36,0x43,0x6C,0x25,0xAD);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadEllipse,0x28B2B8E9,0x2574,0x4E04,0xA7,0xDE,0x21,0x08,0x8D,0x31,0x10,0x2F);


MIDL_DEFINE_GUID(IID, IID_IAcadHatch,0xBE6851C4,0x0977,0x4A73,0x8D,0xEC,0xA9,0xE3,0xA2,0x4A,0xBA,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadHatch,0x3D09C590,0xEB10,0x499C,0xA3,0xAD,0xBD,0x0B,0x92,0x66,0xFB,0x74);


MIDL_DEFINE_GUID(IID, IID_IAcadLeader,0xB317165E,0xE478,0x430D,0x8F,0x78,0x4B,0x43,0xCF,0x91,0xE7,0x59);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLeader,0xB3672CF4,0x0658,0x49B3,0x95,0xD8,0x7D,0x18,0x24,0xAA,0x49,0x71);


MIDL_DEFINE_GUID(IID, IID_IAcadSubEntity,0xFE717DFA,0x1F61,0x41FE,0xA5,0x14,0xBC,0xE8,0x4C,0xA9,0x91,0x89);


MIDL_DEFINE_GUID(IID, IID_IAcadMLeaderLeader,0x1C6FFBC1,0x5699,0x4798,0xAD,0x9C,0x5F,0x33,0x59,0xC1,0x80,0x2D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMLeaderLeader,0x5AF8892E,0x1D2A,0x45A0,0x9C,0x04,0xC4,0x46,0xAE,0xD5,0xDD,0x18);


MIDL_DEFINE_GUID(IID, IID_IAcadMLeader,0xDD704BAE,0x4BEB,0x482E,0x8C,0xD6,0x6F,0xA8,0xFD,0x38,0x03,0xAE);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMLeader,0x4865A5DA,0xAC09,0x441D,0x81,0x74,0x8E,0xE4,0x43,0x25,0x58,0xB2);


MIDL_DEFINE_GUID(IID, IID_IAcadLWPolyline,0x8D9D7C6F,0xEB3F,0x41DA,0xBD,0x16,0x36,0x9A,0xFB,0x03,0x15,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLWPolyline,0xF191B69E,0x7593,0x4141,0xA8,0xE9,0x2F,0x19,0x74,0x59,0xB2,0xFD);


MIDL_DEFINE_GUID(IID, IID_IAcadLine,0x2577B2D6,0xF859,0x45D6,0x99,0xA7,0x05,0x1D,0x48,0x2D,0x02,0xBC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLine,0xFAF0242F,0xF14E,0x415C,0xAE,0x6E,0xFF,0xC7,0xD2,0xB1,0x60,0xED);


MIDL_DEFINE_GUID(IID, IID_IAcadMText,0x234A241F,0xCF00,0x4CAB,0x80,0x72,0x80,0x9A,0x13,0x67,0xFE,0xB6);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMText,0x0A9A05BA,0xC08E,0x4FF6,0x88,0xF3,0x6D,0x55,0x82,0x49,0x9B,0x83);


MIDL_DEFINE_GUID(IID, IID_IAcadPoint,0xEBA657C9,0xD850,0x4172,0xB4,0xC4,0x79,0x25,0xD6,0x48,0x1D,0x70);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPoint,0xDA641859,0xAFBA,0x4E5E,0x9D,0x69,0x38,0xC8,0x8D,0x75,0x42,0xF8);


MIDL_DEFINE_GUID(IID, IID_IAcadPolyline,0x408FA420,0xB10A,0x44A2,0xBA,0x9A,0x8F,0x4B,0x36,0x3F,0x26,0x9D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPolyline,0x4AA2143D,0x2F10,0x44D3,0xB4,0x3B,0xCE,0x6E,0x44,0xEE,0x0B,0x54);


MIDL_DEFINE_GUID(IID, IID_IAcadPolygonMesh,0x178EB1CF,0xBB81,0x4D9E,0x91,0xD7,0xA8,0xE5,0xA2,0x40,0x23,0xFE);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPolygonMesh,0x7B4B6353,0x6F65,0x4964,0xBD,0x6D,0x79,0x17,0xF7,0xE1,0xEF,0x29);


MIDL_DEFINE_GUID(IID, IID_IAcadRay,0xFC0BDEB2,0x8060,0x4E6E,0xB8,0xE0,0x37,0x18,0xDF,0xD4,0x7D,0xC3);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadRay,0xDEBFEB6D,0xD92F,0x45A4,0x83,0xC0,0xD3,0x52,0xED,0x18,0x2B,0xDF);


MIDL_DEFINE_GUID(IID, IID_IAcadShape,0xA6CD59A2,0xEEE0,0x47D2,0xA5,0x01,0xA7,0x83,0xAD,0x23,0x52,0xA8);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadShape,0x9DEE32A4,0x1B1E,0x4BC4,0xA5,0x05,0xC2,0xDD,0xFC,0x1B,0x93,0xD4);


MIDL_DEFINE_GUID(IID, IID_IAcadSolid,0x14F915F5,0x451D,0x4F39,0x87,0xC4,0x79,0x07,0x32,0x00,0x18,0x0B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSolid,0xF540952D,0xD226,0x4C73,0x99,0xB5,0xC4,0x4C,0xA8,0x23,0x0E,0x23);


MIDL_DEFINE_GUID(IID, IID_IAcadSpline,0xFCEC9D4D,0x1511,0x46EC,0x89,0x74,0x52,0xE8,0xDD,0x8D,0x08,0x33);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSpline,0x6BE676F9,0x7069,0x4582,0xBB,0xFB,0x50,0x7A,0x22,0xB9,0xF9,0xEE);


MIDL_DEFINE_GUID(IID, IID_IAcadText,0xC55A31FC,0xEF95,0x428D,0xB7,0xBB,0x08,0x3A,0x69,0x2D,0xFC,0x8C);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadText,0x410C5378,0xCED6,0x4C12,0x89,0xE1,0x95,0x24,0xEA,0x47,0x57,0xD8);


MIDL_DEFINE_GUID(IID, IID_IAcadTolerance,0x632D13BC,0x6146,0x4391,0xB1,0x98,0x01,0x50,0x3A,0x13,0x9B,0x92);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadTolerance,0x8BD77948,0x2B22,0x4508,0xA5,0xD0,0x9B,0xDF,0x25,0xD6,0xB3,0x20);


MIDL_DEFINE_GUID(IID, IID_IAcadTrace,0xB5BF1FBC,0xDA40,0x4DB8,0xA7,0x39,0x6D,0xF6,0x0E,0x56,0x34,0xF8);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadTrace,0x0B986F63,0x9DDA,0x41DC,0xAB,0x65,0x17,0x70,0xAD,0x99,0x1B,0x66);


MIDL_DEFINE_GUID(IID, IID_IAcadXline,0x789381BE,0x9096,0x45F8,0x91,0xD4,0xE5,0xC4,0x72,0xE7,0x88,0x11);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadXline,0xAA819B76,0x19FF,0x4033,0x93,0xBD,0xC3,0x29,0xA5,0xFD,0xF5,0xAE);


MIDL_DEFINE_GUID(IID, IID_IAcadPViewport,0x8E70F234,0xA6D0,0x4373,0x87,0xC6,0xF0,0x41,0xE6,0x39,0x6E,0x43);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPViewport,0xF7550EB8,0x29C3,0x498F,0xA0,0xFE,0xF4,0x1F,0x66,0x52,0xC8,0x79);


MIDL_DEFINE_GUID(IID, IID_IAcadMInsertBlock,0xA6AAC55E,0xED54,0x4011,0x86,0xE3,0x0B,0xE7,0x92,0x09,0x72,0xEC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMInsertBlock,0x1F50A6D7,0x176E,0x4D22,0x8E,0x22,0xA2,0x9B,0x4D,0x7C,0xE3,0xE9);


MIDL_DEFINE_GUID(IID, IID_IAcadPolyfaceMesh,0x3F119DE6,0x07FF,0x4202,0xBE,0x58,0x9C,0x89,0x35,0x78,0x46,0xAC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPolyfaceMesh,0xFD1D0023,0x6D6C,0x4140,0xA3,0x7A,0xAB,0x10,0xBF,0xF1,0xC0,0x1D);


MIDL_DEFINE_GUID(IID, IID_IAcadMLine,0x37341D94,0x0544,0x4A89,0x9A,0xFA,0xB7,0xD6,0x04,0xA1,0xEE,0xF5);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMLine,0x9C0DF51E,0x0F61,0x48DE,0x9E,0xC4,0x4D,0x00,0x3B,0x93,0xE5,0x36);


MIDL_DEFINE_GUID(IID, IID_IAcadExternalReference,0x0708CBBE,0xDD72,0x4415,0x9D,0x0F,0x48,0x41,0xBA,0x61,0x0D,0x23);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadExternalReference,0xB1A1FC63,0x1196,0x487D,0x87,0x3A,0x06,0x16,0x54,0x07,0xA8,0x26);


MIDL_DEFINE_GUID(IID, IID_IAcadComparedReference,0x781C96D4,0xFE49,0x4731,0xA7,0x65,0x9F,0x7B,0x4F,0xA3,0x5E,0xFF);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadComparedReference,0x0772D8BC,0x8999,0x435F,0x9B,0xED,0x78,0x5B,0x45,0x39,0xCF,0xF2);


MIDL_DEFINE_GUID(IID, IID_IAcadTable,0xC3F0E344,0xDAB6,0x47A3,0xB7,0x64,0xD6,0xEF,0xF6,0x1D,0x8B,0x5C);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadTable,0x46AFC62B,0x2FF8,0x41CB,0x82,0xB8,0xB1,0xCF,0xCC,0x67,0x52,0x37);


MIDL_DEFINE_GUID(IID, IID_IAcadOle,0x49B9397A,0x4EFD,0x4087,0xA1,0x88,0x06,0xAB,0xF7,0x6A,0xA9,0xC5);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadOle,0x6633016F,0xB3BF,0x482C,0x9E,0x9B,0x5C,0x9B,0x40,0xFF,0x03,0xD0);


MIDL_DEFINE_GUID(IID, IID_IAcadHelix,0x9E48F748,0x72FE,0x4FAB,0x97,0x65,0xA6,0x62,0xB3,0xAC,0x37,0xCE);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadHelix,0xCE19F9C3,0x6987,0x4FA7,0x91,0xFC,0xC1,0xD7,0xA9,0xB9,0x04,0x0C);


MIDL_DEFINE_GUID(IID, IID_IAcadSurface,0x724F09CB,0x3840,0x4EFE,0xAE,0x5E,0x46,0x63,0x3F,0x2B,0xEE,0x21);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSurface,0xE3FED59C,0x85E2,0x4AE7,0xB4,0x77,0xD7,0xBC,0xC0,0x1F,0x79,0x63);


MIDL_DEFINE_GUID(IID, IID_IAcadPlaneSurface,0xD7E669B3,0xB7F6,0x4F09,0x8A,0xC8,0x0C,0x2F,0x6B,0xFE,0x9E,0x39);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPlaneSurface,0x56E6D9EA,0x2CD2,0x4CC1,0x9E,0xDA,0xA1,0xC7,0x5B,0x60,0x1C,0x99);


MIDL_DEFINE_GUID(IID, IID_IAcadExtrudedSurface,0xC9CE2A9F,0xAA7A,0x4D4B,0xA7,0x12,0x3A,0x91,0x1F,0x19,0x33,0xCF);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadExtrudedSurface,0xFAD3A1C3,0x5FCB,0x4BE6,0xAA,0x91,0xA8,0x43,0xAE,0x5C,0xC3,0xF6);


MIDL_DEFINE_GUID(IID, IID_IAcadRevolvedSurface,0x4CFA1519,0x2BDA,0x414D,0xBD,0xEA,0xCD,0x06,0x53,0xBE,0x5F,0x5B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadRevolvedSurface,0x4C5D7C96,0xA595,0x4F13,0x88,0x9A,0xEB,0x5E,0x50,0xF5,0x4C,0x3B);


MIDL_DEFINE_GUID(IID, IID_IAcadSweptSurface,0x8907E3ED,0x865C,0x4866,0xB7,0x49,0x08,0x48,0x66,0x18,0x85,0x61);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSweptSurface,0x35FB4B7D,0x05B1,0x4034,0x90,0x18,0x89,0x82,0xD7,0x50,0x7B,0x9E);


MIDL_DEFINE_GUID(IID, IID_IAcadLoftedSurface,0xCC870E22,0xAB07,0x4868,0x9F,0x94,0x2F,0x6A,0x0F,0x2F,0x38,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLoftedSurface,0x14934A25,0xA209,0x430F,0xB4,0xDC,0xA9,0x1B,0x7F,0x92,0xAF,0x4B);


MIDL_DEFINE_GUID(IID, IID_IAcadSection,0x44EFC9AF,0xC41B,0x4EA9,0x90,0x5E,0x69,0x4D,0x1F,0x8D,0x35,0x00);


MIDL_DEFINE_GUID(IID, IID_IAcadSection2,0xEABBC4A4,0x3C8E,0x4866,0xA4,0xC5,0x2E,0x7D,0x47,0x7D,0xC1,0x1D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSection,0x2AC7454A,0x258E,0x4661,0xB8,0x88,0x31,0x7A,0x61,0x12,0x74,0x5B);


MIDL_DEFINE_GUID(IID, IID_IAcadSectionManager,0x34B16C03,0xE5B7,0x41FD,0x81,0x81,0x60,0x14,0x1C,0x33,0xE3,0x94);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSectionManager,0x109786BA,0x4BEB,0x44F2,0x94,0xE9,0x8F,0x07,0x9A,0xC7,0x81,0x37);


MIDL_DEFINE_GUID(IID, IID_IAcadUnderlay,0x3008DB35,0x3F6A,0x4DE4,0x8A,0x07,0x71,0xF6,0xFB,0xCC,0xAF,0xC9);


MIDL_DEFINE_GUID(IID, IID_IAcadDwfUnderlay,0xEAF5801D,0x82B0,0x4558,0xAE,0xEA,0x70,0x6D,0x63,0xF3,0xC9,0x34);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDwfUnderlay,0x345C9439,0x5A05,0x4B6D,0xB7,0xB8,0x83,0xFF,0xD1,0xEB,0x62,0x80);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDgnUnderlay,0xB032B582,0xF042,0x4DDC,0xB9,0x04,0x8F,0x8B,0x25,0x0F,0x65,0xB5);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPdfUnderlay,0x959E3F93,0x4319,0x4A5C,0xBC,0xFE,0xE1,0x3F,0x23,0x6A,0xBE,0x0F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubEntity,0xEE76E4F5,0x116C,0x4A4E,0xA6,0x29,0xB4,0xFF,0xE2,0x5E,0x69,0xBD);


MIDL_DEFINE_GUID(IID, IID_IAcadSubEntSolidFace,0x86553635,0xFF8C,0x4DA4,0xA4,0xB4,0xAA,0x43,0x57,0x5E,0x16,0x26);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubEntSolidFace,0xE1AB8D4E,0x4EC9,0x4D1E,0xB4,0xF9,0x13,0xEE,0xC5,0x09,0x84,0x87);


MIDL_DEFINE_GUID(IID, IID_IAcadSubEntSolidEdge,0xE8C6F338,0x1641,0x4C3E,0x92,0xAC,0x3A,0x0C,0x8A,0xD4,0x72,0x22);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubEntSolidEdge,0xF89008FD,0x424A,0x41C5,0xAB,0x1B,0x36,0xB0,0x9D,0xEF,0x11,0x43);


MIDL_DEFINE_GUID(IID, IID_IAcadSubEntSolidVertex,0xF5E8E5E6,0xFC93,0x422C,0x90,0xB8,0xFA,0xDD,0xFF,0xAA,0x05,0xF6);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubEntSolidVertex,0xDD5E8531,0x612A,0x4FAC,0x97,0x08,0x16,0xA2,0xB4,0x6A,0x3C,0x13);


MIDL_DEFINE_GUID(IID, IID_IAcadSubEntSolidNode,0x09BE77A2,0x8D4A,0x4572,0xAD,0xAB,0x66,0x8A,0x7F,0xE7,0xC7,0x8B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubEntSolidNode,0x8283F310,0x73EC,0x41EF,0x9C,0x09,0x9E,0x44,0x8E,0xCF,0x47,0x1D);


MIDL_DEFINE_GUID(IID, IID_IAcadWipeout,0xACCE7075,0x6B20,0x4289,0xA2,0xBB,0xE6,0x06,0x1F,0xB5,0x7A,0xC2);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadWipeout,0xE8B0B8B1,0xFC46,0x4358,0x8D,0xDE,0x21,0x75,0x54,0x36,0x1C,0xB0);


MIDL_DEFINE_GUID(IID, IID_IAcadSubDMesh,0xBEBAFDBD,0x8551,0x4EC5,0x99,0xC3,0x03,0xF9,0x67,0x0F,0xF7,0x56);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubDMesh,0x7A5EAD52,0xB82A,0x4B68,0x94,0xFB,0x09,0x36,0x2F,0xB2,0x9D,0x23);


MIDL_DEFINE_GUID(IID, IID_IAcadSubDMeshFace,0xFCA86C51,0x0DFC,0x43D9,0x9C,0x67,0xB8,0x14,0x83,0x3C,0x65,0xF6);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubDMeshFace,0x6473098E,0xB682,0x4316,0xA2,0x96,0xEC,0x42,0xAA,0x9B,0xCE,0xDC);


MIDL_DEFINE_GUID(IID, IID_IAcadSubDMeshEdge,0x5E51A0FB,0xA791,0x4AEE,0xBC,0x8F,0x78,0x09,0x3B,0x61,0x89,0x65);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubDMeshEdge,0x7655FFC4,0x20D8,0x4336,0xBF,0xFB,0xEC,0xCA,0x54,0xC0,0xD3,0x5D);


MIDL_DEFINE_GUID(IID, IID_IAcadSubDMeshVertex,0x68DBCC59,0xED28,0x45F6,0x9A,0x34,0x27,0xB3,0x39,0x1E,0xD9,0x62);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubDMeshVertex,0x231E1D77,0x7508,0x479A,0xB8,0x32,0x02,0xF6,0xFC,0xCE,0x5A,0xE8);


MIDL_DEFINE_GUID(IID, IID_IAcadNurbSurface,0x2471D82E,0x4288,0x49EB,0x8D,0xEB,0x83,0x44,0x86,0x8B,0x8E,0x98);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadNurbSurface,0x53BBD354,0xCDC2,0x4059,0x87,0xAF,0x88,0xA3,0x10,0xD4,0xA3,0x56);


MIDL_DEFINE_GUID(IID, IID_IAcadGeoPositionMarker,0xBE68B4F4,0xB0A3,0x4DCD,0xA5,0xCA,0x7B,0x0E,0x0D,0xA6,0x8D,0x2D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadGeoPositionMarker,0x5AA6CF53,0x6973,0x488B,0x98,0x89,0x89,0x04,0x46,0x47,0x6C,0xA7);


MIDL_DEFINE_GUID(IID, IID_IAcadGeomapImage,0xD77A260E,0xF577,0x4650,0x8E,0xD9,0xFF,0x20,0x4B,0x70,0x39,0xDC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadGeomapImage,0x58B9CE99,0x3C5A,0x4E27,0xA7,0x74,0x54,0x46,0xE5,0xC5,0x8D,0x04);


MIDL_DEFINE_GUID(IID, IID_IAcadDimension,0x27A64296,0x0D45,0x4E1A,0x8F,0xBC,0xAB,0xD0,0xF2,0x9B,0x20,0xED);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimension,0xBF4B87BB,0x6B58,0x47B0,0x80,0xB7,0x06,0xF0,0x8F,0x1F,0xE6,0xFB);


MIDL_DEFINE_GUID(IID, IID_IAcadDimAligned,0xBF401A57,0xD8A1,0x4830,0x8D,0x1E,0x4E,0x50,0xAA,0xDF,0x8B,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimAligned,0xD66EDBA8,0x1E41,0x4287,0x8D,0xCF,0xC9,0x33,0xEE,0xC9,0x8A,0x22);


MIDL_DEFINE_GUID(IID, IID_IAcadDimAngular,0x5E86D54E,0xB361,0x4D27,0x91,0x0C,0x4D,0x7E,0xA9,0xCE,0x00,0x7E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimAngular,0xB20A3B2D,0x9661,0x4204,0x8C,0xF5,0x64,0x4C,0x82,0xCD,0xF7,0xC1);


MIDL_DEFINE_GUID(IID, IID_IAcadDimDiametric,0x89E4CABE,0x481C,0x498A,0x83,0xA1,0xE6,0x0A,0x97,0xDB,0x16,0x34);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimDiametric,0x28A350DB,0x367B,0x4E0F,0xBA,0xAE,0x6C,0x8F,0x33,0xD9,0x86,0x7F);


MIDL_DEFINE_GUID(IID, IID_IAcadDimOrdinate,0xD54B1C6A,0x02CA,0x45B7,0x84,0xD7,0xD6,0x68,0x04,0x92,0x59,0xCC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimOrdinate,0x7A95551F,0x09AB,0x4620,0x98,0x2F,0x7D,0x17,0x02,0xF5,0x2B,0xBB);


MIDL_DEFINE_GUID(IID, IID_IAcadDimRadial,0x5AAA0A70,0xCE46,0x43EC,0xA6,0x42,0x00,0x97,0xC5,0x0B,0x57,0xCA);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimRadial,0x5FA953A5,0xCCEA,0x462B,0x9E,0x47,0x13,0x16,0xDB,0x19,0xD5,0x7C);


MIDL_DEFINE_GUID(IID, IID_IAcadDimRotated,0x6F973F93,0xAE96,0x4B39,0x81,0x38,0xA3,0x4F,0x7D,0x81,0x8D,0x38);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimRotated,0xCA6599F0,0xDAD2,0x4798,0x92,0xAE,0x90,0xD5,0xD3,0x57,0x1E,0x31);


MIDL_DEFINE_GUID(IID, IID_IAcadDim3PointAngular,0xB59E1E38,0xFDB6,0x4A17,0x95,0xBE,0xBB,0x4D,0x08,0x6A,0xC5,0x15);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDim3PointAngular,0x8506092F,0xB2E4,0x461C,0xA8,0x7C,0xE7,0x0A,0x09,0x31,0xD0,0x6D);


MIDL_DEFINE_GUID(IID, IID_IAcadDimArcLength,0x669A72CD,0xB533,0x4881,0x88,0x66,0x04,0x0F,0x1E,0x16,0xC0,0x5B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimArcLength,0x9C041F1C,0x56FC,0x40FE,0x82,0xB3,0xF7,0xD6,0xDA,0x78,0x17,0x5D);


MIDL_DEFINE_GUID(IID, IID_IAcadDimRadialLarge,0xBE187C5A,0xC4A2,0x4962,0x9F,0x35,0x8E,0xFD,0x54,0x6B,0xF5,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimRadialLarge,0x6A3CCEE5,0x4E37,0x46E6,0xBD,0xFD,0x4B,0x60,0xD5,0x31,0x98,0x19);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadBlock,0x40CAB1F1,0xF618,0x4A38,0xA6,0x41,0x5D,0x89,0xB1,0xCD,0xF3,0xF5);


MIDL_DEFINE_GUID(IID, IID_IAcadModelSpace,0x34BD05D6,0xAC90,0x4409,0x8D,0x22,0xD7,0xB3,0xC8,0x20,0xE3,0x2B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadModelSpace,0x4A7435A7,0x5AFA,0x44B1,0x8D,0xA0,0x41,0x1D,0x5E,0xB9,0x8E,0x94);


MIDL_DEFINE_GUID(IID, IID_IAcadPaperSpace,0xBB92334B,0xCEBE,0x4C67,0x8E,0x06,0xE4,0x18,0x1B,0x95,0xF7,0xB8);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPaperSpace,0xE6DE2C14,0x5BD6,0x4D81,0xB0,0x19,0x1F,0xE5,0xA4,0x01,0x48,0xC5);


MIDL_DEFINE_GUID(IID, IID_IAcadPointCloud,0x1BDD8CBB,0x3E79,0x4AE7,0x82,0xE4,0x03,0x6E,0x5B,0xF4,0xC9,0x2C);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPointCloud,0x5F75C60C,0x8B5A,0x4487,0x81,0xE5,0xC7,0xE4,0x64,0x39,0xB6,0xA7);


MIDL_DEFINE_GUID(IID, IID_IAcadPointCloudEx,0xFA50CDBF,0x2F12,0x4B8E,0xB7,0xB5,0xA3,0xF4,0x2B,0x88,0x2F,0x91);


MIDL_DEFINE_GUID(IID, IID_IAcadPointCloudEx2,0x5F6C65FE,0x8489,0x4AE0,0xB4,0x91,0xC5,0xFC,0xD0,0x96,0xDC,0xF4);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPointCloudEx,0xF3448242,0xA117,0x4E8E,0x97,0xA4,0x64,0x6E,0xB9,0xCC,0x25,0x65);


MIDL_DEFINE_GUID(IID, IID_IAcadSummaryInfo,0x709B6D13,0x62D3,0x49D2,0x94,0x31,0x91,0xBD,0x88,0xA7,0xDC,0xEC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSummaryInfo,0x2820B3F1,0x7E73,0x4475,0x95,0x4D,0xAE,0x64,0xB1,0xB8,0xE0,0x4C);


MIDL_DEFINE_GUID(IID, IID_IAcadDatabasePreferences,0x150F3C7A,0xA584,0x403E,0x93,0xE8,0x98,0xDB,0x3D,0x0A,0x34,0x85);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDatabasePreferences,0xF9341EFE,0x0063,0x4541,0x80,0xCB,0x9D,0x9D,0x06,0x8C,0x47,0x98);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDatabase,0xC151302D,0x9E05,0x4645,0xBC,0xA8,0x91,0xBB,0x6C,0x22,0x17,0xC6);


MIDL_DEFINE_GUID(IID, IID_IAcadSecurityParams,0x01AEF2A5,0x2F4E,0x4CB7,0xB7,0x26,0x74,0x2B,0x3F,0xB7,0xBE,0xB2);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSecurityParams,0x8A64F84B,0x739B,0x4342,0xB8,0x55,0x87,0x95,0x17,0xF7,0xD2,0x30);


MIDL_DEFINE_GUID(IID, IID_IAcadLayerStateManager,0x42344E80,0x3558,0x49CD,0xA7,0x38,0x56,0x02,0xE8,0xB4,0x30,0x6A);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLayerStateManager,0xBCB968EE,0x5A0B,0x4972,0x92,0x9F,0x57,0xCE,0x8E,0x45,0xCC,0xF1);


MIDL_DEFINE_GUID(IID, IID_IAxDbDocumentEvents,0xF4B345FD,0xD49C,0x4C3A,0xBB,0x6D,0x74,0xA3,0x45,0x14,0x20,0xB2);


MIDL_DEFINE_GUID(IID, IID_IAxDbDocument,0xC051EBF3,0x1969,0x4A9B,0xB7,0xD4,0x67,0xCB,0x03,0x85,0x88,0x85);


MIDL_DEFINE_GUID(CLSID, CLSID_AxDbDocument,0x39C92898,0x2FBB,0x4629,0x8E,0x1B,0x69,0x68,0xD3,0x12,0x2E,0xC4);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



