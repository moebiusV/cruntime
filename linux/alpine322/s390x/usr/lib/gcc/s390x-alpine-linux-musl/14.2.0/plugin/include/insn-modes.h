/* Generated automatically from machmode.def and config/s390/s390-modes.def
   by genmodes.  */

#ifndef GCC_INSN_MODES_H
#define GCC_INSN_MODES_H

enum machine_mode
{
  E_VOIDmode,              /* machmode.def:194 */
#define HAVE_VOIDmode
#ifdef USE_ENUM_MODES
#define VOIDmode E_VOIDmode
#else
#define VOIDmode ((void) 0, E_VOIDmode)
#endif
  E_BLKmode,               /* machmode.def:198 */
#define HAVE_BLKmode
#ifdef USE_ENUM_MODES
#define BLKmode E_BLKmode
#else
#define BLKmode ((void) 0, E_BLKmode)
#endif
  E_CCmode,                /* machmode.def:236 */
#define HAVE_CCmode
#ifdef USE_ENUM_MODES
#define CCmode E_CCmode
#else
#define CCmode ((void) 0, E_CCmode)
#endif
  E_CCZmode,               /* config/s390/s390-modes.def:225 */
#define HAVE_CCZmode
#ifdef USE_ENUM_MODES
#define CCZmode E_CCZmode
#else
#define CCZmode ((void) 0, E_CCZmode)
#endif
  E_CCZ1mode,              /* config/s390/s390-modes.def:226 */
#define HAVE_CCZ1mode
#ifdef USE_ENUM_MODES
#define CCZ1mode E_CCZ1mode
#else
#define CCZ1mode ((void) 0, E_CCZ1mode)
#endif
  E_CCAmode,               /* config/s390/s390-modes.def:227 */
#define HAVE_CCAmode
#ifdef USE_ENUM_MODES
#define CCAmode E_CCAmode
#else
#define CCAmode ((void) 0, E_CCAmode)
#endif
  E_CCAPmode,              /* config/s390/s390-modes.def:228 */
#define HAVE_CCAPmode
#ifdef USE_ENUM_MODES
#define CCAPmode E_CCAPmode
#else
#define CCAPmode ((void) 0, E_CCAPmode)
#endif
  E_CCANmode,              /* config/s390/s390-modes.def:229 */
#define HAVE_CCANmode
#ifdef USE_ENUM_MODES
#define CCANmode E_CCANmode
#else
#define CCANmode ((void) 0, E_CCANmode)
#endif
  E_CCOmode,               /* config/s390/s390-modes.def:230 */
#define HAVE_CCOmode
#ifdef USE_ENUM_MODES
#define CCOmode E_CCOmode
#else
#define CCOmode ((void) 0, E_CCOmode)
#endif
  E_CCLmode,               /* config/s390/s390-modes.def:231 */
#define HAVE_CCLmode
#ifdef USE_ENUM_MODES
#define CCLmode E_CCLmode
#else
#define CCLmode ((void) 0, E_CCLmode)
#endif
  E_CCL1mode,              /* config/s390/s390-modes.def:232 */
#define HAVE_CCL1mode
#ifdef USE_ENUM_MODES
#define CCL1mode E_CCL1mode
#else
#define CCL1mode ((void) 0, E_CCL1mode)
#endif
  E_CCL2mode,              /* config/s390/s390-modes.def:233 */
#define HAVE_CCL2mode
#ifdef USE_ENUM_MODES
#define CCL2mode E_CCL2mode
#else
#define CCL2mode ((void) 0, E_CCL2mode)
#endif
  E_CCL3mode,              /* config/s390/s390-modes.def:234 */
#define HAVE_CCL3mode
#ifdef USE_ENUM_MODES
#define CCL3mode E_CCL3mode
#else
#define CCL3mode ((void) 0, E_CCL3mode)
#endif
  E_CCUmode,               /* config/s390/s390-modes.def:235 */
#define HAVE_CCUmode
#ifdef USE_ENUM_MODES
#define CCUmode E_CCUmode
#else
#define CCUmode ((void) 0, E_CCUmode)
#endif
  E_CCURmode,              /* config/s390/s390-modes.def:236 */
#define HAVE_CCURmode
#ifdef USE_ENUM_MODES
#define CCURmode E_CCURmode
#else
#define CCURmode ((void) 0, E_CCURmode)
#endif
  E_CCSmode,               /* config/s390/s390-modes.def:237 */
#define HAVE_CCSmode
#ifdef USE_ENUM_MODES
#define CCSmode E_CCSmode
#else
#define CCSmode ((void) 0, E_CCSmode)
#endif
  E_CCSRmode,              /* config/s390/s390-modes.def:238 */
#define HAVE_CCSRmode
#ifdef USE_ENUM_MODES
#define CCSRmode E_CCSRmode
#else
#define CCSRmode ((void) 0, E_CCSRmode)
#endif
  E_CCSFPSmode,            /* config/s390/s390-modes.def:239 */
#define HAVE_CCSFPSmode
#ifdef USE_ENUM_MODES
#define CCSFPSmode E_CCSFPSmode
#else
#define CCSFPSmode ((void) 0, E_CCSFPSmode)
#endif
  E_CCTmode,               /* config/s390/s390-modes.def:240 */
#define HAVE_CCTmode
#ifdef USE_ENUM_MODES
#define CCTmode E_CCTmode
#else
#define CCTmode ((void) 0, E_CCTmode)
#endif
  E_CCT1mode,              /* config/s390/s390-modes.def:241 */
#define HAVE_CCT1mode
#ifdef USE_ENUM_MODES
#define CCT1mode E_CCT1mode
#else
#define CCT1mode ((void) 0, E_CCT1mode)
#endif
  E_CCT2mode,              /* config/s390/s390-modes.def:242 */
#define HAVE_CCT2mode
#ifdef USE_ENUM_MODES
#define CCT2mode E_CCT2mode
#else
#define CCT2mode ((void) 0, E_CCT2mode)
#endif
  E_CCT3mode,              /* config/s390/s390-modes.def:243 */
#define HAVE_CCT3mode
#ifdef USE_ENUM_MODES
#define CCT3mode E_CCT3mode
#else
#define CCT3mode ((void) 0, E_CCT3mode)
#endif
  E_CCRAWmode,             /* config/s390/s390-modes.def:244 */
#define HAVE_CCRAWmode
#ifdef USE_ENUM_MODES
#define CCRAWmode E_CCRAWmode
#else
#define CCRAWmode ((void) 0, E_CCRAWmode)
#endif
  E_CCVEQmode,             /* config/s390/s390-modes.def:246 */
#define HAVE_CCVEQmode
#ifdef USE_ENUM_MODES
#define CCVEQmode E_CCVEQmode
#else
#define CCVEQmode ((void) 0, E_CCVEQmode)
#endif
  E_CCVIHmode,             /* config/s390/s390-modes.def:248 */
#define HAVE_CCVIHmode
#ifdef USE_ENUM_MODES
#define CCVIHmode E_CCVIHmode
#else
#define CCVIHmode ((void) 0, E_CCVIHmode)
#endif
  E_CCVIHUmode,            /* config/s390/s390-modes.def:249 */
#define HAVE_CCVIHUmode
#ifdef USE_ENUM_MODES
#define CCVIHUmode E_CCVIHUmode
#else
#define CCVIHUmode ((void) 0, E_CCVIHUmode)
#endif
  E_CCVFHmode,             /* config/s390/s390-modes.def:251 */
#define HAVE_CCVFHmode
#ifdef USE_ENUM_MODES
#define CCVFHmode E_CCVFHmode
#else
#define CCVFHmode ((void) 0, E_CCVFHmode)
#endif
  E_CCVFHEmode,            /* config/s390/s390-modes.def:252 */
#define HAVE_CCVFHEmode
#ifdef USE_ENUM_MODES
#define CCVFHEmode E_CCVFHEmode
#else
#define CCVFHEmode ((void) 0, E_CCVFHEmode)
#endif
  E_CCVIALLmode,           /* config/s390/s390-modes.def:254 */
#define HAVE_CCVIALLmode
#ifdef USE_ENUM_MODES
#define CCVIALLmode E_CCVIALLmode
#else
#define CCVIALLmode ((void) 0, E_CCVIALLmode)
#endif
  E_CCVIANYmode,           /* config/s390/s390-modes.def:255 */
#define HAVE_CCVIANYmode
#ifdef USE_ENUM_MODES
#define CCVIANYmode E_CCVIANYmode
#else
#define CCVIANYmode ((void) 0, E_CCVIANYmode)
#endif
  E_CCVFALLmode,           /* config/s390/s390-modes.def:257 */
#define HAVE_CCVFALLmode
#ifdef USE_ENUM_MODES
#define CCVFALLmode E_CCVFALLmode
#else
#define CCVFALLmode ((void) 0, E_CCVFALLmode)
#endif
  E_CCVFANYmode,           /* config/s390/s390-modes.def:258 */
#define HAVE_CCVFANYmode
#ifdef USE_ENUM_MODES
#define CCVFANYmode E_CCVFANYmode
#else
#define CCVFANYmode ((void) 0, E_CCVFANYmode)
#endif
  E_BImode,                /* machmode.def:201 */
#define HAVE_BImode
#ifdef USE_ENUM_MODES
#define BImode E_BImode
#else
#define BImode (scalar_int_mode ((scalar_int_mode::from_int) E_BImode))
#endif
  E_QImode,                /* machmode.def:209 */
#define HAVE_QImode
#ifdef USE_ENUM_MODES
#define QImode E_QImode
#else
#define QImode (scalar_int_mode ((scalar_int_mode::from_int) E_QImode))
#endif
  E_HImode,                /* machmode.def:210 */
#define HAVE_HImode
#ifdef USE_ENUM_MODES
#define HImode E_HImode
#else
#define HImode (scalar_int_mode ((scalar_int_mode::from_int) E_HImode))
#endif
  E_SImode,                /* machmode.def:211 */
#define HAVE_SImode
#ifdef USE_ENUM_MODES
#define SImode E_SImode
#else
#define SImode (scalar_int_mode ((scalar_int_mode::from_int) E_SImode))
#endif
  E_DImode,                /* machmode.def:212 */
#define HAVE_DImode
#ifdef USE_ENUM_MODES
#define DImode E_DImode
#else
#define DImode (scalar_int_mode ((scalar_int_mode::from_int) E_DImode))
#endif
  E_TImode,                /* machmode.def:213 */
#define HAVE_TImode
#ifdef USE_ENUM_MODES
#define TImode E_TImode
#else
#define TImode (scalar_int_mode ((scalar_int_mode::from_int) E_TImode))
#endif
  E_OImode,                /* config/s390/s390-modes.def:23 */
#define HAVE_OImode
#ifdef USE_ENUM_MODES
#define OImode E_OImode
#else
#define OImode (scalar_int_mode ((scalar_int_mode::from_int) E_OImode))
#endif
  E_QQmode,                /* machmode.def:239 */
#define HAVE_QQmode
#ifdef USE_ENUM_MODES
#define QQmode E_QQmode
#else
#define QQmode (scalar_mode ((scalar_mode::from_int) E_QQmode))
#endif
  E_HQmode,                /* machmode.def:240 */
#define HAVE_HQmode
#ifdef USE_ENUM_MODES
#define HQmode E_HQmode
#else
#define HQmode (scalar_mode ((scalar_mode::from_int) E_HQmode))
#endif
  E_SQmode,                /* machmode.def:241 */
#define HAVE_SQmode
#ifdef USE_ENUM_MODES
#define SQmode E_SQmode
#else
#define SQmode (scalar_mode ((scalar_mode::from_int) E_SQmode))
#endif
  E_DQmode,                /* machmode.def:242 */
#define HAVE_DQmode
#ifdef USE_ENUM_MODES
#define DQmode E_DQmode
#else
#define DQmode (scalar_mode ((scalar_mode::from_int) E_DQmode))
#endif
  E_TQmode,                /* machmode.def:243 */
#define HAVE_TQmode
#ifdef USE_ENUM_MODES
#define TQmode E_TQmode
#else
#define TQmode (scalar_mode ((scalar_mode::from_int) E_TQmode))
#endif
  E_UQQmode,               /* machmode.def:245 */
#define HAVE_UQQmode
#ifdef USE_ENUM_MODES
#define UQQmode E_UQQmode
#else
#define UQQmode (scalar_mode ((scalar_mode::from_int) E_UQQmode))
#endif
  E_UHQmode,               /* machmode.def:246 */
#define HAVE_UHQmode
#ifdef USE_ENUM_MODES
#define UHQmode E_UHQmode
#else
#define UHQmode (scalar_mode ((scalar_mode::from_int) E_UHQmode))
#endif
  E_USQmode,               /* machmode.def:247 */
#define HAVE_USQmode
#ifdef USE_ENUM_MODES
#define USQmode E_USQmode
#else
#define USQmode (scalar_mode ((scalar_mode::from_int) E_USQmode))
#endif
  E_UDQmode,               /* machmode.def:248 */
#define HAVE_UDQmode
#ifdef USE_ENUM_MODES
#define UDQmode E_UDQmode
#else
#define UDQmode (scalar_mode ((scalar_mode::from_int) E_UDQmode))
#endif
  E_UTQmode,               /* machmode.def:249 */
#define HAVE_UTQmode
#ifdef USE_ENUM_MODES
#define UTQmode E_UTQmode
#else
#define UTQmode (scalar_mode ((scalar_mode::from_int) E_UTQmode))
#endif
  E_HAmode,                /* machmode.def:251 */
#define HAVE_HAmode
#ifdef USE_ENUM_MODES
#define HAmode E_HAmode
#else
#define HAmode (scalar_mode ((scalar_mode::from_int) E_HAmode))
#endif
  E_SAmode,                /* machmode.def:252 */
#define HAVE_SAmode
#ifdef USE_ENUM_MODES
#define SAmode E_SAmode
#else
#define SAmode (scalar_mode ((scalar_mode::from_int) E_SAmode))
#endif
  E_DAmode,                /* machmode.def:253 */
#define HAVE_DAmode
#ifdef USE_ENUM_MODES
#define DAmode E_DAmode
#else
#define DAmode (scalar_mode ((scalar_mode::from_int) E_DAmode))
#endif
  E_TAmode,                /* machmode.def:254 */
#define HAVE_TAmode
#ifdef USE_ENUM_MODES
#define TAmode E_TAmode
#else
#define TAmode (scalar_mode ((scalar_mode::from_int) E_TAmode))
#endif
  E_UHAmode,               /* machmode.def:256 */
#define HAVE_UHAmode
#ifdef USE_ENUM_MODES
#define UHAmode E_UHAmode
#else
#define UHAmode (scalar_mode ((scalar_mode::from_int) E_UHAmode))
#endif
  E_USAmode,               /* machmode.def:257 */
#define HAVE_USAmode
#ifdef USE_ENUM_MODES
#define USAmode E_USAmode
#else
#define USAmode (scalar_mode ((scalar_mode::from_int) E_USAmode))
#endif
  E_UDAmode,               /* machmode.def:258 */
#define HAVE_UDAmode
#ifdef USE_ENUM_MODES
#define UDAmode E_UDAmode
#else
#define UDAmode (scalar_mode ((scalar_mode::from_int) E_UDAmode))
#endif
  E_UTAmode,               /* machmode.def:259 */
#define HAVE_UTAmode
#ifdef USE_ENUM_MODES
#define UTAmode E_UTAmode
#else
#define UTAmode (scalar_mode ((scalar_mode::from_int) E_UTAmode))
#endif
  E_SFmode,                /* machmode.def:231 */
#define HAVE_SFmode
#ifdef USE_ENUM_MODES
#define SFmode E_SFmode
#else
#define SFmode (scalar_float_mode ((scalar_float_mode::from_int) E_SFmode))
#endif
  E_DFmode,                /* machmode.def:232 */
#define HAVE_DFmode
#ifdef USE_ENUM_MODES
#define DFmode E_DFmode
#else
#define DFmode (scalar_float_mode ((scalar_float_mode::from_int) E_DFmode))
#endif
  E_TFmode,                /* config/s390/s390-modes.def:26 */
#define HAVE_TFmode
#ifdef USE_ENUM_MODES
#define TFmode E_TFmode
#else
#define TFmode (scalar_float_mode ((scalar_float_mode::from_int) E_TFmode))
#endif
  E_FPRX2mode,             /* config/s390/s390-modes.def:29 */
#define HAVE_FPRX2mode
#ifdef USE_ENUM_MODES
#define FPRX2mode E_FPRX2mode
#else
#define FPRX2mode (scalar_float_mode ((scalar_float_mode::from_int) E_FPRX2mode))
#endif
  E_SDmode,                /* machmode.def:272 */
#define HAVE_SDmode
#ifdef USE_ENUM_MODES
#define SDmode E_SDmode
#else
#define SDmode (scalar_float_mode ((scalar_float_mode::from_int) E_SDmode))
#endif
  E_DDmode,                /* machmode.def:273 */
#define HAVE_DDmode
#ifdef USE_ENUM_MODES
#define DDmode E_DDmode
#else
#define DDmode (scalar_float_mode ((scalar_float_mode::from_int) E_DDmode))
#endif
  E_TDmode,                /* machmode.def:274 */
#define HAVE_TDmode
#ifdef USE_ENUM_MODES
#define TDmode E_TDmode
#else
#define TDmode (scalar_float_mode ((scalar_float_mode::from_int) E_TDmode))
#endif
  E_CQImode,               /* machmode.def:267 */
#define HAVE_CQImode
#ifdef USE_ENUM_MODES
#define CQImode E_CQImode
#else
#define CQImode (complex_mode ((complex_mode::from_int) E_CQImode))
#endif
  E_CHImode,               /* machmode.def:267 */
#define HAVE_CHImode
#ifdef USE_ENUM_MODES
#define CHImode E_CHImode
#else
#define CHImode (complex_mode ((complex_mode::from_int) E_CHImode))
#endif
  E_CSImode,               /* machmode.def:267 */
#define HAVE_CSImode
#ifdef USE_ENUM_MODES
#define CSImode E_CSImode
#else
#define CSImode (complex_mode ((complex_mode::from_int) E_CSImode))
#endif
  E_CDImode,               /* machmode.def:267 */
#define HAVE_CDImode
#ifdef USE_ENUM_MODES
#define CDImode E_CDImode
#else
#define CDImode (complex_mode ((complex_mode::from_int) E_CDImode))
#endif
  E_CTImode,               /* machmode.def:267 */
#define HAVE_CTImode
#ifdef USE_ENUM_MODES
#define CTImode E_CTImode
#else
#define CTImode (complex_mode ((complex_mode::from_int) E_CTImode))
#endif
  E_COImode,               /* machmode.def:267 */
#define HAVE_COImode
#ifdef USE_ENUM_MODES
#define COImode E_COImode
#else
#define COImode (complex_mode ((complex_mode::from_int) E_COImode))
#endif
  E_SCmode,                /* machmode.def:269 */
#define HAVE_SCmode
#ifdef USE_ENUM_MODES
#define SCmode E_SCmode
#else
#define SCmode (complex_mode ((complex_mode::from_int) E_SCmode))
#endif
  E_DCmode,                /* machmode.def:269 */
#define HAVE_DCmode
#ifdef USE_ENUM_MODES
#define DCmode E_DCmode
#else
#define DCmode (complex_mode ((complex_mode::from_int) E_DCmode))
#endif
  E_CPRX2mode,             /* machmode.def:269 */
#define HAVE_CPRX2mode
#ifdef USE_ENUM_MODES
#define CPRX2mode E_CPRX2mode
#else
#define CPRX2mode (complex_mode ((complex_mode::from_int) E_CPRX2mode))
#endif
  E_TCmode,                /* machmode.def:269 */
#define HAVE_TCmode
#ifdef USE_ENUM_MODES
#define TCmode E_TCmode
#else
#define TCmode (complex_mode ((complex_mode::from_int) E_TCmode))
#endif
  E_V1QImode,              /* config/s390/s390-modes.def:274 */
#define HAVE_V1QImode
#ifdef USE_ENUM_MODES
#define V1QImode E_V1QImode
#else
#define V1QImode ((void) 0, E_V1QImode)
#endif
  E_V2QImode,              /* config/s390/s390-modes.def:262 */
#define HAVE_V2QImode
#ifdef USE_ENUM_MODES
#define V2QImode E_V2QImode
#else
#define V2QImode ((void) 0, E_V2QImode)
#endif
  E_V1HImode,              /* config/s390/s390-modes.def:275 */
#define HAVE_V1HImode
#ifdef USE_ENUM_MODES
#define V1HImode E_V1HImode
#else
#define V1HImode ((void) 0, E_V1HImode)
#endif
  E_V4QImode,              /* config/s390/s390-modes.def:263 */
#define HAVE_V4QImode
#ifdef USE_ENUM_MODES
#define V4QImode E_V4QImode
#else
#define V4QImode ((void) 0, E_V4QImode)
#endif
  E_V2HImode,              /* config/s390/s390-modes.def:263 */
#define HAVE_V2HImode
#ifdef USE_ENUM_MODES
#define V2HImode E_V2HImode
#else
#define V2HImode ((void) 0, E_V2HImode)
#endif
  E_V1SImode,              /* config/s390/s390-modes.def:276 */
#define HAVE_V1SImode
#ifdef USE_ENUM_MODES
#define V1SImode E_V1SImode
#else
#define V1SImode ((void) 0, E_V1SImode)
#endif
  E_V8QImode,              /* config/s390/s390-modes.def:264 */
#define HAVE_V8QImode
#ifdef USE_ENUM_MODES
#define V8QImode E_V8QImode
#else
#define V8QImode ((void) 0, E_V8QImode)
#endif
  E_V4HImode,              /* config/s390/s390-modes.def:264 */
#define HAVE_V4HImode
#ifdef USE_ENUM_MODES
#define V4HImode E_V4HImode
#else
#define V4HImode ((void) 0, E_V4HImode)
#endif
  E_V2SImode,              /* config/s390/s390-modes.def:264 */
#define HAVE_V2SImode
#ifdef USE_ENUM_MODES
#define V2SImode E_V2SImode
#else
#define V2SImode ((void) 0, E_V2SImode)
#endif
  E_V1DImode,              /* config/s390/s390-modes.def:277 */
#define HAVE_V1DImode
#ifdef USE_ENUM_MODES
#define V1DImode E_V1DImode
#else
#define V1DImode ((void) 0, E_V1DImode)
#endif
  E_V16QImode,             /* config/s390/s390-modes.def:265 */
#define HAVE_V16QImode
#ifdef USE_ENUM_MODES
#define V16QImode E_V16QImode
#else
#define V16QImode ((void) 0, E_V16QImode)
#endif
  E_V8HImode,              /* config/s390/s390-modes.def:265 */
#define HAVE_V8HImode
#ifdef USE_ENUM_MODES
#define V8HImode E_V8HImode
#else
#define V8HImode ((void) 0, E_V8HImode)
#endif
  E_V4SImode,              /* config/s390/s390-modes.def:265 */
#define HAVE_V4SImode
#ifdef USE_ENUM_MODES
#define V4SImode E_V4SImode
#else
#define V4SImode ((void) 0, E_V4SImode)
#endif
  E_V2DImode,              /* config/s390/s390-modes.def:265 */
#define HAVE_V2DImode
#ifdef USE_ENUM_MODES
#define V2DImode E_V2DImode
#else
#define V2DImode ((void) 0, E_V2DImode)
#endif
  E_V1TImode,              /* config/s390/s390-modes.def:278 */
#define HAVE_V1TImode
#ifdef USE_ENUM_MODES
#define V1TImode E_V1TImode
#else
#define V1TImode ((void) 0, E_V1TImode)
#endif
  E_V32QImode,             /* config/s390/s390-modes.def:266 */
#define HAVE_V32QImode
#ifdef USE_ENUM_MODES
#define V32QImode E_V32QImode
#else
#define V32QImode ((void) 0, E_V32QImode)
#endif
  E_V16HImode,             /* config/s390/s390-modes.def:266 */
#define HAVE_V16HImode
#ifdef USE_ENUM_MODES
#define V16HImode E_V16HImode
#else
#define V16HImode ((void) 0, E_V16HImode)
#endif
  E_V8SImode,              /* config/s390/s390-modes.def:266 */
#define HAVE_V8SImode
#ifdef USE_ENUM_MODES
#define V8SImode E_V8SImode
#else
#define V8SImode ((void) 0, E_V8SImode)
#endif
  E_V4DImode,              /* config/s390/s390-modes.def:266 */
#define HAVE_V4DImode
#ifdef USE_ENUM_MODES
#define V4DImode E_V4DImode
#else
#define V4DImode ((void) 0, E_V4DImode)
#endif
  E_V2TImode,              /* config/s390/s390-modes.def:266 */
#define HAVE_V2TImode
#ifdef USE_ENUM_MODES
#define V2TImode E_V2TImode
#else
#define V2TImode ((void) 0, E_V2TImode)
#endif
  E_V1SFmode,              /* config/s390/s390-modes.def:280 */
#define HAVE_V1SFmode
#ifdef USE_ENUM_MODES
#define V1SFmode E_V1SFmode
#else
#define V1SFmode ((void) 0, E_V1SFmode)
#endif
  E_V2SFmode,              /* config/s390/s390-modes.def:268 */
#define HAVE_V2SFmode
#ifdef USE_ENUM_MODES
#define V2SFmode E_V2SFmode
#else
#define V2SFmode ((void) 0, E_V2SFmode)
#endif
  E_V1DFmode,              /* config/s390/s390-modes.def:281 */
#define HAVE_V1DFmode
#ifdef USE_ENUM_MODES
#define V1DFmode E_V1DFmode
#else
#define V1DFmode ((void) 0, E_V1DFmode)
#endif
  E_V4SFmode,              /* config/s390/s390-modes.def:269 */
#define HAVE_V4SFmode
#ifdef USE_ENUM_MODES
#define V4SFmode E_V4SFmode
#else
#define V4SFmode ((void) 0, E_V4SFmode)
#endif
  E_V2DFmode,              /* config/s390/s390-modes.def:271 */
#define HAVE_V2DFmode
#ifdef USE_ENUM_MODES
#define V2DFmode E_V2DFmode
#else
#define V2DFmode ((void) 0, E_V2DFmode)
#endif
  E_V1TFmode,              /* config/s390/s390-modes.def:282 */
#define HAVE_V1TFmode
#ifdef USE_ENUM_MODES
#define V1TFmode E_V1TFmode
#else
#define V1TFmode ((void) 0, E_V1TFmode)
#endif
  E_V8SFmode,              /* config/s390/s390-modes.def:270 */
#define HAVE_V8SFmode
#ifdef USE_ENUM_MODES
#define V8SFmode E_V8SFmode
#else
#define V8SFmode ((void) 0, E_V8SFmode)
#endif
  E_V4DFmode,              /* config/s390/s390-modes.def:272 */
#define HAVE_V4DFmode
#ifdef USE_ENUM_MODES
#define V4DFmode E_V4DFmode
#else
#define V4DFmode ((void) 0, E_V4DFmode)
#endif
  MAX_MACHINE_MODE,

  MIN_MODE_RANDOM = E_VOIDmode,
  MAX_MODE_RANDOM = E_BLKmode,

  MIN_MODE_CC = E_CCmode,
  MAX_MODE_CC = E_CCVFANYmode,

  MIN_MODE_BOOL = E_BImode,
  MAX_MODE_BOOL = E_BImode,

  MIN_MODE_INT = E_QImode,
  MAX_MODE_INT = E_OImode,

  MIN_MODE_PARTIAL_INT = E_VOIDmode,
  MAX_MODE_PARTIAL_INT = E_VOIDmode,

  MIN_MODE_FRACT = E_QQmode,
  MAX_MODE_FRACT = E_TQmode,

  MIN_MODE_UFRACT = E_UQQmode,
  MAX_MODE_UFRACT = E_UTQmode,

  MIN_MODE_ACCUM = E_HAmode,
  MAX_MODE_ACCUM = E_TAmode,

  MIN_MODE_UACCUM = E_UHAmode,
  MAX_MODE_UACCUM = E_UTAmode,

  MIN_MODE_FLOAT = E_SFmode,
  MAX_MODE_FLOAT = E_FPRX2mode,

  MIN_MODE_DECIMAL_FLOAT = E_SDmode,
  MAX_MODE_DECIMAL_FLOAT = E_TDmode,

  MIN_MODE_COMPLEX_INT = E_CQImode,
  MAX_MODE_COMPLEX_INT = E_COImode,

  MIN_MODE_COMPLEX_FLOAT = E_SCmode,
  MAX_MODE_COMPLEX_FLOAT = E_TCmode,

  MIN_MODE_VECTOR_BOOL = E_VOIDmode,
  MAX_MODE_VECTOR_BOOL = E_VOIDmode,

  MIN_MODE_VECTOR_INT = E_V1QImode,
  MAX_MODE_VECTOR_INT = E_V2TImode,

  MIN_MODE_VECTOR_FRACT = E_VOIDmode,
  MAX_MODE_VECTOR_FRACT = E_VOIDmode,

  MIN_MODE_VECTOR_UFRACT = E_VOIDmode,
  MAX_MODE_VECTOR_UFRACT = E_VOIDmode,

  MIN_MODE_VECTOR_ACCUM = E_VOIDmode,
  MAX_MODE_VECTOR_ACCUM = E_VOIDmode,

  MIN_MODE_VECTOR_UACCUM = E_VOIDmode,
  MAX_MODE_VECTOR_UACCUM = E_VOIDmode,

  MIN_MODE_VECTOR_FLOAT = E_V1SFmode,
  MAX_MODE_VECTOR_FLOAT = E_V4DFmode,

  MIN_MODE_OPAQUE = E_VOIDmode,
  MAX_MODE_OPAQUE = E_VOIDmode,

  NUM_MACHINE_MODES = MAX_MACHINE_MODE
};

#define NUM_MODE_RANDOM (MAX_MODE_RANDOM - MIN_MODE_RANDOM + 1)
#define NUM_MODE_CC (MAX_MODE_CC - MIN_MODE_CC + 1)
#define NUM_MODE_INT (MAX_MODE_INT - MIN_MODE_INT + 1)
#define NUM_MODE_PARTIAL_INT 0
#define NUM_MODE_FRACT (MAX_MODE_FRACT - MIN_MODE_FRACT + 1)
#define NUM_MODE_UFRACT (MAX_MODE_UFRACT - MIN_MODE_UFRACT + 1)
#define NUM_MODE_ACCUM (MAX_MODE_ACCUM - MIN_MODE_ACCUM + 1)
#define NUM_MODE_UACCUM (MAX_MODE_UACCUM - MIN_MODE_UACCUM + 1)
#define NUM_MODE_FLOAT (MAX_MODE_FLOAT - MIN_MODE_FLOAT + 1)
#define NUM_MODE_DECIMAL_FLOAT (MAX_MODE_DECIMAL_FLOAT - MIN_MODE_DECIMAL_FLOAT + 1)
#define NUM_MODE_COMPLEX_INT (MAX_MODE_COMPLEX_INT - MIN_MODE_COMPLEX_INT + 1)
#define NUM_MODE_COMPLEX_FLOAT (MAX_MODE_COMPLEX_FLOAT - MIN_MODE_COMPLEX_FLOAT + 1)
#define NUM_MODE_VECTOR_BOOL 0
#define NUM_MODE_VECTOR_INT (MAX_MODE_VECTOR_INT - MIN_MODE_VECTOR_INT + 1)
#define NUM_MODE_VECTOR_FRACT 0
#define NUM_MODE_VECTOR_UFRACT 0
#define NUM_MODE_VECTOR_ACCUM 0
#define NUM_MODE_VECTOR_UACCUM 0
#define NUM_MODE_VECTOR_FLOAT (MAX_MODE_VECTOR_FLOAT - MIN_MODE_VECTOR_FLOAT + 1)
#define NUM_MODE_OPAQUE 0

#define CONST_MODE_NUNITS const
#define CONST_MODE_PRECISION const
#define CONST_MODE_SIZE const
#define CONST_MODE_UNIT_SIZE const
#define CONST_MODE_BASE_ALIGN const
#define CONST_MODE_IBIT const
#define CONST_MODE_FBIT const
#define CONST_MODE_MASK const

#define BITS_PER_UNIT (8)
#define MAX_BITSIZE_MODE_ANY_INT (32*BITS_PER_UNIT)
#define MAX_BITSIZE_MODE_ANY_MODE (64*BITS_PER_UNIT)
#define NUM_INT_N_ENTS 1
#define NUM_POLY_INT_COEFFS 1

#endif /* insn-modes.h */
