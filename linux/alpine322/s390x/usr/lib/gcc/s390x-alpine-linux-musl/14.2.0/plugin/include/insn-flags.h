/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_vec_gather_elementv4si (TARGET_VX && UINTVAL (operands[4]) < GET_MODE_NUNITS (V4SImode))
#define HAVE_vec_gather_elementv2di (TARGET_VX && UINTVAL (operands[4]) < GET_MODE_NUNITS (V2DImode))
#define HAVE_vec_gather_elementv2df (TARGET_VX && UINTVAL (operands[4]) < GET_MODE_NUNITS (V2DFmode))
#define HAVE_vec_gather_elementv4sf ((TARGET_VX && UINTVAL (operands[4]) < GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vec_insert_and_zerov16qi (TARGET_VX)
#define HAVE_vec_insert_and_zerov8hi (TARGET_VX)
#define HAVE_vec_insert_and_zerov4si (TARGET_VX)
#define HAVE_vec_insert_and_zerov2di (TARGET_VX)
#define HAVE_vec_insert_and_zerov2df (TARGET_VX)
#define HAVE_vec_insert_and_zerov4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vlbb (TARGET_VX && UINTVAL (operands[2]) < 7)
#define HAVE_vec_packv8hi (TARGET_VX)
#define HAVE_vec_packv4si (TARGET_VX)
#define HAVE_vec_packv2di (TARGET_VX)
#define HAVE_vec_packsv8hi (TARGET_VX)
#define HAVE_vec_packsv4si (TARGET_VX)
#define HAVE_vec_packsv2di (TARGET_VX)
#define HAVE_vec_packsuv8hi (TARGET_VX)
#define HAVE_vec_packsuv4si (TARGET_VX)
#define HAVE_vec_packsuv2di (TARGET_VX)
#define HAVE_vec_zpermv8hi (TARGET_VX)
#define HAVE_vec_zpermv4si (TARGET_VX)
#define HAVE_vec_zpermv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_zpermv2di (TARGET_VX)
#define HAVE_vec_zpermv2df (TARGET_VX)
#define HAVE_vec_scatter_elementv4si_DI (TARGET_VX && TARGET_64BIT && UINTVAL (operands[3]) < 4)
#define HAVE_vec_scatter_elementv4sf_DI (TARGET_VX && TARGET_64BIT && UINTVAL (operands[3]) < 4)
#define HAVE_vec_scatter_elementv2di_SI (TARGET_VX && !TARGET_64BIT && UINTVAL (operands[3]) < GET_MODE_NUNITS (V2DImode))
#define HAVE_vec_scatter_elementv2df_SI (TARGET_VX && !TARGET_64BIT && UINTVAL (operands[3]) < GET_MODE_NUNITS (V2DFmode))
#define HAVE_vec_scatter_elementv4si_SI (TARGET_VX && UINTVAL (operands[3]) < GET_MODE_NUNITS (V4SImode))
#define HAVE_vec_scatter_elementv2di_DI (TARGET_VX && UINTVAL (operands[3]) < GET_MODE_NUNITS (V2DImode))
#define HAVE_vec_scatter_elementv2df_DI (TARGET_VX && UINTVAL (operands[3]) < GET_MODE_NUNITS (V2DFmode))
#define HAVE_vec_scatter_elementv4sf_SI ((TARGET_VX && UINTVAL (operands[3]) < GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vselv16qi (TARGET_VX)
#define HAVE_vselv8hi (TARGET_VX)
#define HAVE_vselv4si (TARGET_VX)
#define HAVE_vselv2di (TARGET_VX)
#define HAVE_vselv1ti ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vselv1df (TARGET_VX)
#define HAVE_vselv2df (TARGET_VX)
#define HAVE_vselv1sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vselv2sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vselv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vselv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vseltf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_extendv16qi (TARGET_VX)
#define HAVE_vec_extendv8hi (TARGET_VX)
#define HAVE_vec_extendv4si (TARGET_VX)
#define HAVE_vstlv1qi (TARGET_VX)
#define HAVE_vstlv2qi (TARGET_VX)
#define HAVE_vstlv4qi (TARGET_VX)
#define HAVE_vstlv8qi (TARGET_VX)
#define HAVE_vstlv16qi (TARGET_VX)
#define HAVE_vstlv1hi (TARGET_VX)
#define HAVE_vstlv2hi (TARGET_VX)
#define HAVE_vstlv4hi (TARGET_VX)
#define HAVE_vstlv8hi (TARGET_VX)
#define HAVE_vstlv1si (TARGET_VX)
#define HAVE_vstlv2si (TARGET_VX)
#define HAVE_vstlv4si (TARGET_VX)
#define HAVE_vstlv1di (TARGET_VX)
#define HAVE_vstlv2di (TARGET_VX)
#define HAVE_vstlv1sf (TARGET_VX)
#define HAVE_vstlv2sf (TARGET_VX)
#define HAVE_vstlv4sf (TARGET_VX)
#define HAVE_vstlv1df (TARGET_VX)
#define HAVE_vstlv2df (TARGET_VX)
#define HAVE_vbpermv16qi (TARGET_VXE)
#define HAVE_vec_unpackhv16qi (TARGET_VX)
#define HAVE_vec_unpackhv8hi (TARGET_VX)
#define HAVE_vec_unpackhv4si (TARGET_VX)
#define HAVE_vec_unpackh_lv16qi (TARGET_VX)
#define HAVE_vec_unpackh_lv8hi (TARGET_VX)
#define HAVE_vec_unpackh_lv4si (TARGET_VX)
#define HAVE_vec_unpacklv16qi (TARGET_VX)
#define HAVE_vec_unpacklv8hi (TARGET_VX)
#define HAVE_vec_unpacklv4si (TARGET_VX)
#define HAVE_vec_unpackl_lv16qi (TARGET_VX)
#define HAVE_vec_unpackl_lv8hi (TARGET_VX)
#define HAVE_vec_unpackl_lv4si (TARGET_VX)
#define HAVE_vaccb_v16qi (TARGET_VX)
#define HAVE_vacch_v8hi (TARGET_VX)
#define HAVE_vaccf_v4si (TARGET_VX)
#define HAVE_vaccg_v2di (TARGET_VX)
#define HAVE_vaccq_v1ti (TARGET_VX)
#define HAVE_vaccq_ti (TARGET_VX)
#define HAVE_vacq (TARGET_VX)
#define HAVE_vacccq (TARGET_VX)
#define HAVE_vec_andcv16qi3 (TARGET_VX)
#define HAVE_vec_andcv8hi3 (TARGET_VX)
#define HAVE_vec_andcv4si3 (TARGET_VX)
#define HAVE_vec_andcv2di3 (TARGET_VX)
#define HAVE_vec_andcv2df3 (TARGET_VX)
#define HAVE_vec_andcv1ti3 (TARGET_VX)
#define HAVE_vec_andcti3 (TARGET_VX)
#define HAVE_vec_andcv4sf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_andcv1tf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_avgv16qi (TARGET_VX)
#define HAVE_vec_avgv8hi (TARGET_VX)
#define HAVE_vec_avgv4si (TARGET_VX)
#define HAVE_vec_avgv2di (TARGET_VX)
#define HAVE_vec_avguv16qi (TARGET_VX)
#define HAVE_vec_avguv8hi (TARGET_VX)
#define HAVE_vec_avguv4si (TARGET_VX)
#define HAVE_vec_avguv2di (TARGET_VX)
#define HAVE_vec_checksum (TARGET_VX)
#define HAVE_vec_gfmsumv16qi (TARGET_VX)
#define HAVE_vec_gfmsumv8hi (TARGET_VX)
#define HAVE_vec_gfmsumv4si (TARGET_VX)
#define HAVE_vec_gfmsum_128 (TARGET_VX)
#define HAVE_vec_gfmsum_accumv16qi (TARGET_VX)
#define HAVE_vec_gfmsum_accumv8hi (TARGET_VX)
#define HAVE_vec_gfmsum_accumv4si (TARGET_VX)
#define HAVE_vec_gfmsum_accum_128 (TARGET_VX)
#define HAVE_vec_vmalv16qi (TARGET_VX)
#define HAVE_vec_vmalv8hi (TARGET_VX)
#define HAVE_vec_vmalv4si (TARGET_VX)
#define HAVE_vec_vmahv16qi (TARGET_VX)
#define HAVE_vec_vmahv8hi (TARGET_VX)
#define HAVE_vec_vmahv4si (TARGET_VX)
#define HAVE_vec_vmalhv16qi (TARGET_VX)
#define HAVE_vec_vmalhv8hi (TARGET_VX)
#define HAVE_vec_vmalhv4si (TARGET_VX)
#define HAVE_vec_vmaev16qi (TARGET_VX)
#define HAVE_vec_vmaev8hi (TARGET_VX)
#define HAVE_vec_vmaev4si (TARGET_VX)
#define HAVE_vec_vmalev16qi (TARGET_VX)
#define HAVE_vec_vmalev8hi (TARGET_VX)
#define HAVE_vec_vmalev4si (TARGET_VX)
#define HAVE_vec_vmaov16qi (TARGET_VX)
#define HAVE_vec_vmaov8hi (TARGET_VX)
#define HAVE_vec_vmaov4si (TARGET_VX)
#define HAVE_vec_vmalov16qi (TARGET_VX)
#define HAVE_vec_vmalov8hi (TARGET_VX)
#define HAVE_vec_vmalov4si (TARGET_VX)
#define HAVE_vec_smulhv16qi (TARGET_VX)
#define HAVE_vec_smulhv8hi (TARGET_VX)
#define HAVE_vec_smulhv4si (TARGET_VX)
#define HAVE_vec_umulhv16qi (TARGET_VX)
#define HAVE_vec_umulhv8hi (TARGET_VX)
#define HAVE_vec_umulhv4si (TARGET_VX)
#define HAVE_vec_norv16qi3 (TARGET_VX)
#define HAVE_vec_norv8hi3 (TARGET_VX)
#define HAVE_vec_norv4si3 (TARGET_VX)
#define HAVE_vec_norv2di3 (TARGET_VX)
#define HAVE_vec_norv2df3 (TARGET_VX)
#define HAVE_vec_norv1ti3 (TARGET_VX)
#define HAVE_vec_norti3 (TARGET_VX)
#define HAVE_vec_norv4sf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_norv1tf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_verimv16qi (TARGET_VX)
#define HAVE_verimv8hi (TARGET_VX)
#define HAVE_verimv4si (TARGET_VX)
#define HAVE_verimv2di (TARGET_VX)
#define HAVE_vec_sllv16qiv16qi (TARGET_VX)
#define HAVE_vec_sllv8hiv16qi (TARGET_VX)
#define HAVE_vec_sllv4siv16qi (TARGET_VX)
#define HAVE_vec_sllv2div16qi (TARGET_VX)
#define HAVE_vec_sllv16qiv8hi (TARGET_VX)
#define HAVE_vec_sllv8hiv8hi (TARGET_VX)
#define HAVE_vec_sllv4siv8hi (TARGET_VX)
#define HAVE_vec_sllv2div8hi (TARGET_VX)
#define HAVE_vec_sllv16qiv4si (TARGET_VX)
#define HAVE_vec_sllv8hiv4si (TARGET_VX)
#define HAVE_vec_sllv4siv4si (TARGET_VX)
#define HAVE_vec_sllv2div4si (TARGET_VX)
#define HAVE_vec_sldv16qi (TARGET_VX)
#define HAVE_vec_sldv8hi (TARGET_VX)
#define HAVE_vec_sldv4si (TARGET_VX)
#define HAVE_vec_sldv2di (TARGET_VX)
#define HAVE_vec_sldv1ti ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_sldv2df (TARGET_VX)
#define HAVE_vec_sldv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_sldv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_sldtf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_sldbv16qi (TARGET_VXE2)
#define HAVE_vec_sldbv8hi (TARGET_VXE2)
#define HAVE_vec_sldbv4si (TARGET_VXE2)
#define HAVE_vec_sldbv2di (TARGET_VXE2)
#define HAVE_vec_sldbv1ti ((TARGET_VXE2) && (TARGET_VXE))
#define HAVE_vec_sldbv2df (TARGET_VXE2)
#define HAVE_vec_sldbv4sf ((TARGET_VXE2) && (TARGET_VXE))
#define HAVE_vec_sldbv1tf ((TARGET_VXE2) && (TARGET_VXE))
#define HAVE_vec_sldbtf ((TARGET_VXE2) && (TARGET_VXE))
#define HAVE_vec_srdbv16qi (TARGET_VXE2)
#define HAVE_vec_srdbv8hi (TARGET_VXE2)
#define HAVE_vec_srdbv4si (TARGET_VXE2)
#define HAVE_vec_srdbv2di (TARGET_VXE2)
#define HAVE_vec_srdbv1ti ((TARGET_VXE2) && (TARGET_VXE))
#define HAVE_vec_srdbv2df (TARGET_VXE2)
#define HAVE_vec_srdbv4sf ((TARGET_VXE2) && (TARGET_VXE))
#define HAVE_vec_srdbv1tf ((TARGET_VXE2) && (TARGET_VXE))
#define HAVE_vec_srdbtf ((TARGET_VXE2) && (TARGET_VXE))
#define HAVE_vec_sralv16qiv16qi (TARGET_VX)
#define HAVE_vec_sralv8hiv16qi (TARGET_VX)
#define HAVE_vec_sralv4siv16qi (TARGET_VX)
#define HAVE_vec_sralv2div16qi (TARGET_VX)
#define HAVE_vec_sralv16qiv8hi (TARGET_VX)
#define HAVE_vec_sralv8hiv8hi (TARGET_VX)
#define HAVE_vec_sralv4siv8hi (TARGET_VX)
#define HAVE_vec_sralv2div8hi (TARGET_VX)
#define HAVE_vec_sralv16qiv4si (TARGET_VX)
#define HAVE_vec_sralv8hiv4si (TARGET_VX)
#define HAVE_vec_sralv4siv4si (TARGET_VX)
#define HAVE_vec_sralv2div4si (TARGET_VX)
#define HAVE_vec_srabv16qi (TARGET_VX)
#define HAVE_vec_srabv8hi (TARGET_VX)
#define HAVE_vec_srabv4si (TARGET_VX)
#define HAVE_vec_srabv2di (TARGET_VX)
#define HAVE_vec_srabv1ti ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_srabv2df (TARGET_VX)
#define HAVE_vec_srabv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_srabv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_srabtf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_srlv16qiv16qi (TARGET_VX)
#define HAVE_vec_srlv8hiv16qi (TARGET_VX)
#define HAVE_vec_srlv4siv16qi (TARGET_VX)
#define HAVE_vec_srlv2div16qi (TARGET_VX)
#define HAVE_vec_srlv16qiv8hi (TARGET_VX)
#define HAVE_vec_srlv8hiv8hi (TARGET_VX)
#define HAVE_vec_srlv4siv8hi (TARGET_VX)
#define HAVE_vec_srlv2div8hi (TARGET_VX)
#define HAVE_vec_srlv16qiv4si (TARGET_VX)
#define HAVE_vec_srlv8hiv4si (TARGET_VX)
#define HAVE_vec_srlv4siv4si (TARGET_VX)
#define HAVE_vec_srlv2div4si (TARGET_VX)
#define HAVE_vscbib_v16qi (TARGET_VX)
#define HAVE_vscbih_v8hi (TARGET_VX)
#define HAVE_vscbif_v4si (TARGET_VX)
#define HAVE_vscbig_v2di (TARGET_VX)
#define HAVE_vscbiq_v1ti (TARGET_VX)
#define HAVE_vscbiq_ti (TARGET_VX)
#define HAVE_vsbiq (TARGET_VX)
#define HAVE_vsbcbiq (TARGET_VX)
#define HAVE_vec_sum_u128v4si (TARGET_VX)
#define HAVE_vec_sum_u128v2di (TARGET_VX)
#define HAVE_vec_msumv2di (TARGET_VXE)
#define HAVE_vmslg (TARGET_VXE)
#define HAVE_vfaev16qi (TARGET_VX)
#define HAVE_vfaev8hi (TARGET_VX)
#define HAVE_vfaev4si (TARGET_VX)
#define HAVE_vfeev16qi (TARGET_VX)
#define HAVE_vfeev8hi (TARGET_VX)
#define HAVE_vfeev4si (TARGET_VX)
#define HAVE_vfeezv16qi (TARGET_VX)
#define HAVE_vfeezv8hi (TARGET_VX)
#define HAVE_vfeezv4si (TARGET_VX)
#define HAVE_vfenev16qi (TARGET_VX)
#define HAVE_vfenev8hi (TARGET_VX)
#define HAVE_vfenev4si (TARGET_VX)
#define HAVE_vfenezv16qi (TARGET_VX)
#define HAVE_vfenezv8hi (TARGET_VX)
#define HAVE_vfenezv4si (TARGET_VX)
#define HAVE_vistrv16qi (TARGET_VX)
#define HAVE_vistrv8hi (TARGET_VX)
#define HAVE_vistrv4si (TARGET_VX)
#define HAVE_vstrcv16qi (TARGET_VX)
#define HAVE_vstrcv8hi (TARGET_VX)
#define HAVE_vstrcv4si (TARGET_VX)
#define HAVE_vec_vstrsv16qi (TARGET_VXE2)
#define HAVE_vec_vstrsv8hi (TARGET_VXE2)
#define HAVE_vec_vstrsv4si (TARGET_VXE2)
#define HAVE_vcdgb (TARGET_VX && UINTVAL (operands[3]) != 2 && UINTVAL (operands[3]) <= 7)
#define HAVE_vcdlgb (TARGET_VX && UINTVAL (operands[3]) != 2 && UINTVAL (operands[3]) <= 7)
#define HAVE_vcgdb (TARGET_VX && UINTVAL (operands[3]) != 2 && UINTVAL (operands[3]) <= 7)
#define HAVE_vclgdb (TARGET_VX && UINTVAL (operands[3]) != 2 && UINTVAL (operands[3]) <= 7)
#define HAVE_vec_fpintv1sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_fpintv2sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_fpintv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_fpintv1df (TARGET_VX)
#define HAVE_vec_fpintv2df (TARGET_VX)
#define HAVE_vec_fpintv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_fpinttf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vflls (TARGET_VX)
#define HAVE_vflrd (TARGET_VX)
#define HAVE_vftciv4sf ((TARGET_VX && CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'J', "J")) && (TARGET_VXE))
#define HAVE_vftciv2df (TARGET_VX && CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'J', "J"))
#define HAVE_vftciv1tf ((TARGET_VX && CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'J', "J")) && (TARGET_VXE))
#define HAVE_vftcitf ((TARGET_VX && CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'J', "J")) && (TARGET_VXE))
#define HAVE_vfminv4sf (TARGET_VXE)
#define HAVE_vfminv2df (TARGET_VXE)
#define HAVE_vfminv1tf (TARGET_VXE)
#define HAVE_vfmintf (TARGET_VXE)
#define HAVE_vfmaxv4sf (TARGET_VXE)
#define HAVE_vfmaxv2df (TARGET_VXE)
#define HAVE_vfmaxv1tf (TARGET_VXE)
#define HAVE_vfmaxtf (TARGET_VXE)
#define HAVE_vclfnhs_v8hi (TARGET_NNPA)
#define HAVE_vclfnls_v8hi (TARGET_NNPA)
#define HAVE_vcrnfs_v8hi (TARGET_NNPA)
#define HAVE_vcfn_v8hi (TARGET_NNPA)
#define HAVE_vcnf_v8hi (TARGET_NNPA)
#define HAVE_movv16qi 1
#define HAVE_movv8hi 1
#define HAVE_movv4si 1
#define HAVE_movv4sf 1
#define HAVE_movv2di 1
#define HAVE_movv2df 1
#define HAVE_movv1ti 1
#define HAVE_movv1tf 1
#define HAVE_movtf_vr (TARGET_VXE)
#define HAVE_movv1qi (TARGET_VX)
#define HAVE_movv2qi 1
#define HAVE_movv1hi 1
#define HAVE_movv4qi (TARGET_VX)
#define HAVE_movv2hi (TARGET_VX)
#define HAVE_movv1si (TARGET_VX)
#define HAVE_movv1sf (TARGET_VX)
#define HAVE_movv8qi (TARGET_ZARCH)
#define HAVE_movv4hi (TARGET_ZARCH)
#define HAVE_movv2si (TARGET_ZARCH)
#define HAVE_movv2sf (TARGET_ZARCH)
#define HAVE_movv1di (TARGET_ZARCH)
#define HAVE_movv1df (TARGET_ZARCH)
#define HAVE_fprx2_to_tf (TARGET_VXE)
#define HAVE_vec_permv16qi (TARGET_VX)
#define HAVE_vpdi1v2di (TARGET_VX)
#define HAVE_vpdi1v2df (TARGET_VX)
#define HAVE_vpdi4v2di (TARGET_VX)
#define HAVE_vpdi4v2df (TARGET_VX)
#define HAVE_vpdi4_2v4si (TARGET_VX)
#define HAVE_vpdi4_2v4sf (TARGET_VX)
#define HAVE_tf_to_fprx2 (TARGET_VXE)
#define HAVE_eltswapv8hi (TARGET_VX)
#define HAVE_eltswapv4si (TARGET_VX)
#define HAVE_eltswapv4sf (TARGET_VX)
#define HAVE_eltswapv2di (TARGET_VX)
#define HAVE_eltswapv2df (TARGET_VX)
#define HAVE_addv1qi3 (TARGET_VX)
#define HAVE_addv2qi3 (TARGET_VX)
#define HAVE_addv4qi3 (TARGET_VX)
#define HAVE_addv8qi3 (TARGET_VX)
#define HAVE_addv16qi3 (TARGET_VX)
#define HAVE_addv1hi3 (TARGET_VX)
#define HAVE_addv2hi3 (TARGET_VX)
#define HAVE_addv4hi3 (TARGET_VX)
#define HAVE_addv8hi3 (TARGET_VX)
#define HAVE_addv1si3 (TARGET_VX)
#define HAVE_addv2si3 (TARGET_VX)
#define HAVE_addv4si3 (TARGET_VX)
#define HAVE_addv1di3 (TARGET_VX)
#define HAVE_addv2di3 (TARGET_VX)
#define HAVE_addv1ti3 (TARGET_VX)
#define HAVE_subv1qi3 (TARGET_VX)
#define HAVE_subv2qi3 (TARGET_VX)
#define HAVE_subv4qi3 (TARGET_VX)
#define HAVE_subv8qi3 (TARGET_VX)
#define HAVE_subv16qi3 (TARGET_VX)
#define HAVE_subv1hi3 (TARGET_VX)
#define HAVE_subv2hi3 (TARGET_VX)
#define HAVE_subv4hi3 (TARGET_VX)
#define HAVE_subv8hi3 (TARGET_VX)
#define HAVE_subv1si3 (TARGET_VX)
#define HAVE_subv2si3 (TARGET_VX)
#define HAVE_subv4si3 (TARGET_VX)
#define HAVE_subv1di3 (TARGET_VX)
#define HAVE_subv2di3 (TARGET_VX)
#define HAVE_subv1ti3 (TARGET_VX)
#define HAVE_mulv1qi3 (TARGET_VX)
#define HAVE_mulv2qi3 (TARGET_VX)
#define HAVE_mulv4qi3 (TARGET_VX)
#define HAVE_mulv8qi3 (TARGET_VX)
#define HAVE_mulv16qi3 (TARGET_VX)
#define HAVE_mulv1hi3 (TARGET_VX)
#define HAVE_mulv2hi3 (TARGET_VX)
#define HAVE_mulv4hi3 (TARGET_VX)
#define HAVE_mulv8hi3 (TARGET_VX)
#define HAVE_mulv1si3 (TARGET_VX)
#define HAVE_mulv2si3 (TARGET_VX)
#define HAVE_mulv4si3 (TARGET_VX)
#define HAVE_negv1qi2 (TARGET_VX)
#define HAVE_negv2qi2 (TARGET_VX)
#define HAVE_negv4qi2 (TARGET_VX)
#define HAVE_negv8qi2 (TARGET_VX)
#define HAVE_negv16qi2 (TARGET_VX)
#define HAVE_negv1hi2 (TARGET_VX)
#define HAVE_negv2hi2 (TARGET_VX)
#define HAVE_negv4hi2 (TARGET_VX)
#define HAVE_negv8hi2 (TARGET_VX)
#define HAVE_negv1si2 (TARGET_VX)
#define HAVE_negv2si2 (TARGET_VX)
#define HAVE_negv4si2 (TARGET_VX)
#define HAVE_negv1di2 (TARGET_VX)
#define HAVE_negv2di2 (TARGET_VX)
#define HAVE_absv1qi2 (TARGET_VX)
#define HAVE_absv2qi2 (TARGET_VX)
#define HAVE_absv4qi2 (TARGET_VX)
#define HAVE_absv8qi2 (TARGET_VX)
#define HAVE_absv16qi2 (TARGET_VX)
#define HAVE_absv1hi2 (TARGET_VX)
#define HAVE_absv2hi2 (TARGET_VX)
#define HAVE_absv4hi2 (TARGET_VX)
#define HAVE_absv8hi2 (TARGET_VX)
#define HAVE_absv1si2 (TARGET_VX)
#define HAVE_absv2si2 (TARGET_VX)
#define HAVE_absv4si2 (TARGET_VX)
#define HAVE_absv1di2 (TARGET_VX)
#define HAVE_absv2di2 (TARGET_VX)
#define HAVE_andv1qi3 (TARGET_VX)
#define HAVE_andv2qi3 (TARGET_VX)
#define HAVE_andv4qi3 (TARGET_VX)
#define HAVE_andv8qi3 (TARGET_VX)
#define HAVE_andv16qi3 (TARGET_VX)
#define HAVE_andv1hi3 (TARGET_VX)
#define HAVE_andv2hi3 (TARGET_VX)
#define HAVE_andv4hi3 (TARGET_VX)
#define HAVE_andv8hi3 (TARGET_VX)
#define HAVE_andv1si3 (TARGET_VX)
#define HAVE_andv2si3 (TARGET_VX)
#define HAVE_andv4si3 (TARGET_VX)
#define HAVE_andv1di3 (TARGET_VX)
#define HAVE_andv2di3 (TARGET_VX)
#define HAVE_andv1sf3 (TARGET_VX)
#define HAVE_andv2sf3 (TARGET_VX)
#define HAVE_andv4sf3 (TARGET_VX)
#define HAVE_andv1df3 (TARGET_VX)
#define HAVE_andv2df3 (TARGET_VX)
#define HAVE_andv1tf3 (TARGET_VX)
#define HAVE_andv1ti3 (TARGET_VX)
#define HAVE_andti3 (TARGET_VX)
#define HAVE_notandv1qi3 (TARGET_VXE)
#define HAVE_notandv2qi3 (TARGET_VXE)
#define HAVE_notandv4qi3 (TARGET_VXE)
#define HAVE_notandv8qi3 (TARGET_VXE)
#define HAVE_notandv16qi3 (TARGET_VXE)
#define HAVE_notandv1hi3 (TARGET_VXE)
#define HAVE_notandv2hi3 (TARGET_VXE)
#define HAVE_notandv4hi3 (TARGET_VXE)
#define HAVE_notandv8hi3 (TARGET_VXE)
#define HAVE_notandv1si3 (TARGET_VXE)
#define HAVE_notandv2si3 (TARGET_VXE)
#define HAVE_notandv4si3 (TARGET_VXE)
#define HAVE_notandv1di3 (TARGET_VXE)
#define HAVE_notandv2di3 (TARGET_VXE)
#define HAVE_notandv1sf3 (TARGET_VXE)
#define HAVE_notandv2sf3 (TARGET_VXE)
#define HAVE_notandv4sf3 (TARGET_VXE)
#define HAVE_notandv1df3 (TARGET_VXE)
#define HAVE_notandv2df3 (TARGET_VXE)
#define HAVE_notandv1tf3 (TARGET_VXE)
#define HAVE_notandv1ti3 (TARGET_VXE)
#define HAVE_notandti3 (TARGET_VXE)
#define HAVE_iorv1qi3 (TARGET_VX)
#define HAVE_iorv2qi3 (TARGET_VX)
#define HAVE_iorv4qi3 (TARGET_VX)
#define HAVE_iorv8qi3 (TARGET_VX)
#define HAVE_iorv16qi3 (TARGET_VX)
#define HAVE_iorv1hi3 (TARGET_VX)
#define HAVE_iorv2hi3 (TARGET_VX)
#define HAVE_iorv4hi3 (TARGET_VX)
#define HAVE_iorv8hi3 (TARGET_VX)
#define HAVE_iorv1si3 (TARGET_VX)
#define HAVE_iorv2si3 (TARGET_VX)
#define HAVE_iorv4si3 (TARGET_VX)
#define HAVE_iorv1di3 (TARGET_VX)
#define HAVE_iorv2di3 (TARGET_VX)
#define HAVE_iorv1sf3 (TARGET_VX)
#define HAVE_iorv2sf3 (TARGET_VX)
#define HAVE_iorv4sf3 (TARGET_VX)
#define HAVE_iorv1df3 (TARGET_VX)
#define HAVE_iorv2df3 (TARGET_VX)
#define HAVE_iorv1tf3 (TARGET_VX)
#define HAVE_iorv1ti3 (TARGET_VX)
#define HAVE_iorti3 (TARGET_VX)
#define HAVE_ior_notv1qi3 (TARGET_VXE)
#define HAVE_ior_notv2qi3 (TARGET_VXE)
#define HAVE_ior_notv4qi3 (TARGET_VXE)
#define HAVE_ior_notv8qi3 (TARGET_VXE)
#define HAVE_ior_notv16qi3 (TARGET_VXE)
#define HAVE_ior_notv1hi3 (TARGET_VXE)
#define HAVE_ior_notv2hi3 (TARGET_VXE)
#define HAVE_ior_notv4hi3 (TARGET_VXE)
#define HAVE_ior_notv8hi3 (TARGET_VXE)
#define HAVE_ior_notv1si3 (TARGET_VXE)
#define HAVE_ior_notv2si3 (TARGET_VXE)
#define HAVE_ior_notv4si3 (TARGET_VXE)
#define HAVE_ior_notv1di3 (TARGET_VXE)
#define HAVE_ior_notv2di3 (TARGET_VXE)
#define HAVE_ior_notv1sf3 (TARGET_VXE)
#define HAVE_ior_notv2sf3 (TARGET_VXE)
#define HAVE_ior_notv4sf3 (TARGET_VXE)
#define HAVE_ior_notv1df3 (TARGET_VXE)
#define HAVE_ior_notv2df3 (TARGET_VXE)
#define HAVE_ior_notv1tf3 (TARGET_VXE)
#define HAVE_ior_notv1ti3 (TARGET_VXE)
#define HAVE_ior_notti3 (TARGET_VXE)
#define HAVE_xorv1qi3 (TARGET_VX)
#define HAVE_xorv2qi3 (TARGET_VX)
#define HAVE_xorv4qi3 (TARGET_VX)
#define HAVE_xorv8qi3 (TARGET_VX)
#define HAVE_xorv16qi3 (TARGET_VX)
#define HAVE_xorv1hi3 (TARGET_VX)
#define HAVE_xorv2hi3 (TARGET_VX)
#define HAVE_xorv4hi3 (TARGET_VX)
#define HAVE_xorv8hi3 (TARGET_VX)
#define HAVE_xorv1si3 (TARGET_VX)
#define HAVE_xorv2si3 (TARGET_VX)
#define HAVE_xorv4si3 (TARGET_VX)
#define HAVE_xorv1di3 (TARGET_VX)
#define HAVE_xorv2di3 (TARGET_VX)
#define HAVE_xorv1sf3 (TARGET_VX)
#define HAVE_xorv2sf3 (TARGET_VX)
#define HAVE_xorv4sf3 (TARGET_VX)
#define HAVE_xorv1df3 (TARGET_VX)
#define HAVE_xorv2df3 (TARGET_VX)
#define HAVE_xorv1tf3 (TARGET_VX)
#define HAVE_xorv1ti3 (TARGET_VX)
#define HAVE_xorti3 (TARGET_VX)
#define HAVE_notxorv1qi3 (TARGET_VXE)
#define HAVE_notxorv2qi3 (TARGET_VXE)
#define HAVE_notxorv4qi3 (TARGET_VXE)
#define HAVE_notxorv8qi3 (TARGET_VXE)
#define HAVE_notxorv16qi3 (TARGET_VXE)
#define HAVE_notxorv1hi3 (TARGET_VXE)
#define HAVE_notxorv2hi3 (TARGET_VXE)
#define HAVE_notxorv4hi3 (TARGET_VXE)
#define HAVE_notxorv8hi3 (TARGET_VXE)
#define HAVE_notxorv1si3 (TARGET_VXE)
#define HAVE_notxorv2si3 (TARGET_VXE)
#define HAVE_notxorv4si3 (TARGET_VXE)
#define HAVE_notxorv1di3 (TARGET_VXE)
#define HAVE_notxorv2di3 (TARGET_VXE)
#define HAVE_notxorv1sf3 (TARGET_VXE)
#define HAVE_notxorv2sf3 (TARGET_VXE)
#define HAVE_notxorv4sf3 (TARGET_VXE)
#define HAVE_notxorv1df3 (TARGET_VXE)
#define HAVE_notxorv2df3 (TARGET_VXE)
#define HAVE_notxorv1tf3 (TARGET_VXE)
#define HAVE_notxorv1ti3 (TARGET_VXE)
#define HAVE_notxorti3 (TARGET_VXE)
#define HAVE_one_cmplv1qi2 (TARGET_VX)
#define HAVE_one_cmplv2qi2 (TARGET_VX)
#define HAVE_one_cmplv4qi2 (TARGET_VX)
#define HAVE_one_cmplv8qi2 (TARGET_VX)
#define HAVE_one_cmplv16qi2 (TARGET_VX)
#define HAVE_one_cmplv1hi2 (TARGET_VX)
#define HAVE_one_cmplv2hi2 (TARGET_VX)
#define HAVE_one_cmplv4hi2 (TARGET_VX)
#define HAVE_one_cmplv8hi2 (TARGET_VX)
#define HAVE_one_cmplv1si2 (TARGET_VX)
#define HAVE_one_cmplv2si2 (TARGET_VX)
#define HAVE_one_cmplv4si2 (TARGET_VX)
#define HAVE_one_cmplv1di2 (TARGET_VX)
#define HAVE_one_cmplv2di2 (TARGET_VX)
#define HAVE_one_cmplv1sf2 (TARGET_VX)
#define HAVE_one_cmplv2sf2 (TARGET_VX)
#define HAVE_one_cmplv4sf2 (TARGET_VX)
#define HAVE_one_cmplv1df2 (TARGET_VX)
#define HAVE_one_cmplv2df2 (TARGET_VX)
#define HAVE_one_cmplv1tf2 (TARGET_VX)
#define HAVE_one_cmplv1ti2 (TARGET_VX)
#define HAVE_one_cmplti2 (TARGET_VX)
#define HAVE_popcountv16qi2_vxe (TARGET_VXE)
#define HAVE_popcountv8hi2_vxe (TARGET_VXE)
#define HAVE_popcountv4si2_vxe (TARGET_VXE)
#define HAVE_popcountv2di2_vxe (TARGET_VXE)
#define HAVE_popcountv16qi2_vx (TARGET_VX && !TARGET_VXE)
#define HAVE_clzv1qi2 (TARGET_VX)
#define HAVE_clzv2qi2 (TARGET_VX)
#define HAVE_clzv4qi2 (TARGET_VX)
#define HAVE_clzv8qi2 (TARGET_VX)
#define HAVE_clzv16qi2 (TARGET_VX)
#define HAVE_clzv1hi2 (TARGET_VX)
#define HAVE_clzv2hi2 (TARGET_VX)
#define HAVE_clzv4hi2 (TARGET_VX)
#define HAVE_clzv8hi2 (TARGET_VX)
#define HAVE_clzv1si2 (TARGET_VX)
#define HAVE_clzv2si2 (TARGET_VX)
#define HAVE_clzv4si2 (TARGET_VX)
#define HAVE_clzv1di2 (TARGET_VX)
#define HAVE_clzv2di2 (TARGET_VX)
#define HAVE_clzv1sf2 (TARGET_VX)
#define HAVE_clzv2sf2 (TARGET_VX)
#define HAVE_clzv4sf2 (TARGET_VX)
#define HAVE_clzv1df2 (TARGET_VX)
#define HAVE_clzv2df2 (TARGET_VX)
#define HAVE_ctzv1qi2 (TARGET_VX)
#define HAVE_ctzv2qi2 (TARGET_VX)
#define HAVE_ctzv4qi2 (TARGET_VX)
#define HAVE_ctzv8qi2 (TARGET_VX)
#define HAVE_ctzv16qi2 (TARGET_VX)
#define HAVE_ctzv1hi2 (TARGET_VX)
#define HAVE_ctzv2hi2 (TARGET_VX)
#define HAVE_ctzv4hi2 (TARGET_VX)
#define HAVE_ctzv8hi2 (TARGET_VX)
#define HAVE_ctzv1si2 (TARGET_VX)
#define HAVE_ctzv2si2 (TARGET_VX)
#define HAVE_ctzv4si2 (TARGET_VX)
#define HAVE_ctzv1di2 (TARGET_VX)
#define HAVE_ctzv2di2 (TARGET_VX)
#define HAVE_ctzv1sf2 (TARGET_VX)
#define HAVE_ctzv2sf2 (TARGET_VX)
#define HAVE_ctzv4sf2 (TARGET_VX)
#define HAVE_ctzv1df2 (TARGET_VX)
#define HAVE_ctzv2df2 (TARGET_VX)
#define HAVE_vrotlv1qi3 (TARGET_VX)
#define HAVE_vrotlv2qi3 (TARGET_VX)
#define HAVE_vrotlv4qi3 (TARGET_VX)
#define HAVE_vrotlv8qi3 (TARGET_VX)
#define HAVE_vrotlv16qi3 (TARGET_VX)
#define HAVE_vrotlv1hi3 (TARGET_VX)
#define HAVE_vrotlv2hi3 (TARGET_VX)
#define HAVE_vrotlv4hi3 (TARGET_VX)
#define HAVE_vrotlv8hi3 (TARGET_VX)
#define HAVE_vrotlv1si3 (TARGET_VX)
#define HAVE_vrotlv2si3 (TARGET_VX)
#define HAVE_vrotlv4si3 (TARGET_VX)
#define HAVE_vrotlv1di3 (TARGET_VX)
#define HAVE_vrotlv2di3 (TARGET_VX)
#define HAVE_vashlv1qi3 (TARGET_VX)
#define HAVE_vashlv2qi3 (TARGET_VX)
#define HAVE_vashlv4qi3 (TARGET_VX)
#define HAVE_vashlv8qi3 (TARGET_VX)
#define HAVE_vashlv16qi3 (TARGET_VX)
#define HAVE_vashlv1hi3 (TARGET_VX)
#define HAVE_vashlv2hi3 (TARGET_VX)
#define HAVE_vashlv4hi3 (TARGET_VX)
#define HAVE_vashlv8hi3 (TARGET_VX)
#define HAVE_vashlv1si3 (TARGET_VX)
#define HAVE_vashlv2si3 (TARGET_VX)
#define HAVE_vashlv4si3 (TARGET_VX)
#define HAVE_vashlv1di3 (TARGET_VX)
#define HAVE_vashlv2di3 (TARGET_VX)
#define HAVE_vashrv1qi3 (TARGET_VX)
#define HAVE_vashrv2qi3 (TARGET_VX)
#define HAVE_vashrv4qi3 (TARGET_VX)
#define HAVE_vashrv8qi3 (TARGET_VX)
#define HAVE_vashrv16qi3 (TARGET_VX)
#define HAVE_vashrv1hi3 (TARGET_VX)
#define HAVE_vashrv2hi3 (TARGET_VX)
#define HAVE_vashrv4hi3 (TARGET_VX)
#define HAVE_vashrv8hi3 (TARGET_VX)
#define HAVE_vashrv1si3 (TARGET_VX)
#define HAVE_vashrv2si3 (TARGET_VX)
#define HAVE_vashrv4si3 (TARGET_VX)
#define HAVE_vashrv1di3 (TARGET_VX)
#define HAVE_vashrv2di3 (TARGET_VX)
#define HAVE_vlshrv1qi3 (TARGET_VX)
#define HAVE_vlshrv2qi3 (TARGET_VX)
#define HAVE_vlshrv4qi3 (TARGET_VX)
#define HAVE_vlshrv8qi3 (TARGET_VX)
#define HAVE_vlshrv16qi3 (TARGET_VX)
#define HAVE_vlshrv1hi3 (TARGET_VX)
#define HAVE_vlshrv2hi3 (TARGET_VX)
#define HAVE_vlshrv4hi3 (TARGET_VX)
#define HAVE_vlshrv8hi3 (TARGET_VX)
#define HAVE_vlshrv1si3 (TARGET_VX)
#define HAVE_vlshrv2si3 (TARGET_VX)
#define HAVE_vlshrv4si3 (TARGET_VX)
#define HAVE_vlshrv1di3 (TARGET_VX)
#define HAVE_vlshrv2di3 (TARGET_VX)
#define HAVE_sminv1qi3 (TARGET_VX)
#define HAVE_sminv2qi3 (TARGET_VX)
#define HAVE_sminv4qi3 (TARGET_VX)
#define HAVE_sminv8qi3 (TARGET_VX)
#define HAVE_sminv16qi3 (TARGET_VX)
#define HAVE_sminv1hi3 (TARGET_VX)
#define HAVE_sminv2hi3 (TARGET_VX)
#define HAVE_sminv4hi3 (TARGET_VX)
#define HAVE_sminv8hi3 (TARGET_VX)
#define HAVE_sminv1si3 (TARGET_VX)
#define HAVE_sminv2si3 (TARGET_VX)
#define HAVE_sminv4si3 (TARGET_VX)
#define HAVE_sminv1di3 (TARGET_VX)
#define HAVE_sminv2di3 (TARGET_VX)
#define HAVE_smaxv1qi3 (TARGET_VX)
#define HAVE_smaxv2qi3 (TARGET_VX)
#define HAVE_smaxv4qi3 (TARGET_VX)
#define HAVE_smaxv8qi3 (TARGET_VX)
#define HAVE_smaxv16qi3 (TARGET_VX)
#define HAVE_smaxv1hi3 (TARGET_VX)
#define HAVE_smaxv2hi3 (TARGET_VX)
#define HAVE_smaxv4hi3 (TARGET_VX)
#define HAVE_smaxv8hi3 (TARGET_VX)
#define HAVE_smaxv1si3 (TARGET_VX)
#define HAVE_smaxv2si3 (TARGET_VX)
#define HAVE_smaxv4si3 (TARGET_VX)
#define HAVE_smaxv1di3 (TARGET_VX)
#define HAVE_smaxv2di3 (TARGET_VX)
#define HAVE_uminv1qi3 (TARGET_VX)
#define HAVE_uminv2qi3 (TARGET_VX)
#define HAVE_uminv4qi3 (TARGET_VX)
#define HAVE_uminv8qi3 (TARGET_VX)
#define HAVE_uminv16qi3 (TARGET_VX)
#define HAVE_uminv1hi3 (TARGET_VX)
#define HAVE_uminv2hi3 (TARGET_VX)
#define HAVE_uminv4hi3 (TARGET_VX)
#define HAVE_uminv8hi3 (TARGET_VX)
#define HAVE_uminv1si3 (TARGET_VX)
#define HAVE_uminv2si3 (TARGET_VX)
#define HAVE_uminv4si3 (TARGET_VX)
#define HAVE_uminv1di3 (TARGET_VX)
#define HAVE_uminv2di3 (TARGET_VX)
#define HAVE_umaxv1qi3 (TARGET_VX)
#define HAVE_umaxv2qi3 (TARGET_VX)
#define HAVE_umaxv4qi3 (TARGET_VX)
#define HAVE_umaxv8qi3 (TARGET_VX)
#define HAVE_umaxv16qi3 (TARGET_VX)
#define HAVE_umaxv1hi3 (TARGET_VX)
#define HAVE_umaxv2hi3 (TARGET_VX)
#define HAVE_umaxv4hi3 (TARGET_VX)
#define HAVE_umaxv8hi3 (TARGET_VX)
#define HAVE_umaxv1si3 (TARGET_VX)
#define HAVE_umaxv2si3 (TARGET_VX)
#define HAVE_umaxv4si3 (TARGET_VX)
#define HAVE_umaxv1di3 (TARGET_VX)
#define HAVE_umaxv2di3 (TARGET_VX)
#define HAVE_vec_widen_smult_even_v1qi (TARGET_VX)
#define HAVE_vec_widen_smult_even_v2qi (TARGET_VX)
#define HAVE_vec_widen_smult_even_v4qi (TARGET_VX)
#define HAVE_vec_widen_smult_even_v8qi (TARGET_VX)
#define HAVE_vec_widen_smult_even_v16qi (TARGET_VX)
#define HAVE_vec_widen_smult_even_v1hi (TARGET_VX)
#define HAVE_vec_widen_smult_even_v2hi (TARGET_VX)
#define HAVE_vec_widen_smult_even_v4hi (TARGET_VX)
#define HAVE_vec_widen_smult_even_v8hi (TARGET_VX)
#define HAVE_vec_widen_smult_even_v1si (TARGET_VX)
#define HAVE_vec_widen_smult_even_v2si (TARGET_VX)
#define HAVE_vec_widen_smult_even_v4si (TARGET_VX)
#define HAVE_vec_widen_umult_even_v1qi (TARGET_VX)
#define HAVE_vec_widen_umult_even_v2qi (TARGET_VX)
#define HAVE_vec_widen_umult_even_v4qi (TARGET_VX)
#define HAVE_vec_widen_umult_even_v8qi (TARGET_VX)
#define HAVE_vec_widen_umult_even_v16qi (TARGET_VX)
#define HAVE_vec_widen_umult_even_v1hi (TARGET_VX)
#define HAVE_vec_widen_umult_even_v2hi (TARGET_VX)
#define HAVE_vec_widen_umult_even_v4hi (TARGET_VX)
#define HAVE_vec_widen_umult_even_v8hi (TARGET_VX)
#define HAVE_vec_widen_umult_even_v1si (TARGET_VX)
#define HAVE_vec_widen_umult_even_v2si (TARGET_VX)
#define HAVE_vec_widen_umult_even_v4si (TARGET_VX)
#define HAVE_vec_widen_smult_odd_v1qi (TARGET_VX)
#define HAVE_vec_widen_smult_odd_v2qi (TARGET_VX)
#define HAVE_vec_widen_smult_odd_v4qi (TARGET_VX)
#define HAVE_vec_widen_smult_odd_v8qi (TARGET_VX)
#define HAVE_vec_widen_smult_odd_v16qi (TARGET_VX)
#define HAVE_vec_widen_smult_odd_v1hi (TARGET_VX)
#define HAVE_vec_widen_smult_odd_v2hi (TARGET_VX)
#define HAVE_vec_widen_smult_odd_v4hi (TARGET_VX)
#define HAVE_vec_widen_smult_odd_v8hi (TARGET_VX)
#define HAVE_vec_widen_smult_odd_v1si (TARGET_VX)
#define HAVE_vec_widen_smult_odd_v2si (TARGET_VX)
#define HAVE_vec_widen_smult_odd_v4si (TARGET_VX)
#define HAVE_vec_widen_umult_odd_v1qi (TARGET_VX)
#define HAVE_vec_widen_umult_odd_v2qi (TARGET_VX)
#define HAVE_vec_widen_umult_odd_v4qi (TARGET_VX)
#define HAVE_vec_widen_umult_odd_v8qi (TARGET_VX)
#define HAVE_vec_widen_umult_odd_v16qi (TARGET_VX)
#define HAVE_vec_widen_umult_odd_v1hi (TARGET_VX)
#define HAVE_vec_widen_umult_odd_v2hi (TARGET_VX)
#define HAVE_vec_widen_umult_odd_v4hi (TARGET_VX)
#define HAVE_vec_widen_umult_odd_v8hi (TARGET_VX)
#define HAVE_vec_widen_umult_odd_v1si (TARGET_VX)
#define HAVE_vec_widen_umult_odd_v2si (TARGET_VX)
#define HAVE_vec_widen_umult_odd_v4si (TARGET_VX)
#define HAVE_addv4sf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_addv2df3 (TARGET_VX)
#define HAVE_addv1tf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_addtf3_vr ((TARGET_VX) && (TARGET_VXE))
#define HAVE_subv4sf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_subv2df3 (TARGET_VX)
#define HAVE_subv1tf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_subtf3_vr ((TARGET_VX) && (TARGET_VXE))
#define HAVE_mulv4sf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_mulv2df3 (TARGET_VX)
#define HAVE_mulv1tf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_multf3_vr ((TARGET_VX) && (TARGET_VXE))
#define HAVE_divv4sf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_divv2df3 (TARGET_VX)
#define HAVE_divv1tf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_divtf3_vr ((TARGET_VX) && (TARGET_VXE))
#define HAVE_sqrtv4sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_sqrtv2df2 (TARGET_VX)
#define HAVE_sqrtv1tf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_sqrttf2_vr ((TARGET_VX) && (TARGET_VXE))
#define HAVE_fmav4sf4 ((TARGET_VX && s390_fma_allowed_p (V4SFmode)) && (TARGET_VXE))
#define HAVE_fmav2df4 (TARGET_VX && s390_fma_allowed_p (V2DFmode))
#define HAVE_fmav1tf4 ((TARGET_VX && s390_fma_allowed_p (V1TFmode)) && (TARGET_VXE))
#define HAVE_fmatf4 ((TARGET_VX && s390_fma_allowed_p (TFmode)) && (TARGET_VXE))
#define HAVE_fmsv4sf4 ((TARGET_VX && s390_fma_allowed_p (V4SFmode)) && (TARGET_VXE))
#define HAVE_fmsv2df4 (TARGET_VX && s390_fma_allowed_p (V2DFmode))
#define HAVE_fmsv1tf4 ((TARGET_VX && s390_fma_allowed_p (V1TFmode)) && (TARGET_VXE))
#define HAVE_fmstf4 ((TARGET_VX && s390_fma_allowed_p (TFmode)) && (TARGET_VXE))
#define HAVE_neg_fmav4sf4 ((TARGET_VXE && s390_fma_allowed_p (V4SFmode)) && (TARGET_VXE))
#define HAVE_neg_fmav2df4 (TARGET_VXE && s390_fma_allowed_p (V2DFmode))
#define HAVE_neg_fmav1tf4 ((TARGET_VXE && s390_fma_allowed_p (V1TFmode)) && (TARGET_VXE))
#define HAVE_neg_fmatf4 ((TARGET_VXE && s390_fma_allowed_p (TFmode)) && (TARGET_VXE))
#define HAVE_neg_fmsv4sf4 ((TARGET_VXE && s390_fma_allowed_p (V4SFmode)) && (TARGET_VXE))
#define HAVE_neg_fmsv2df4 (TARGET_VXE && s390_fma_allowed_p (V2DFmode))
#define HAVE_neg_fmsv1tf4 ((TARGET_VXE && s390_fma_allowed_p (V1TFmode)) && (TARGET_VXE))
#define HAVE_neg_fmstf4 ((TARGET_VXE && s390_fma_allowed_p (TFmode)) && (TARGET_VXE))
#define HAVE_negv1sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_negv2sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_negv4sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_negv1df2 (TARGET_VX)
#define HAVE_negv2df2 (TARGET_VX)
#define HAVE_negv1tf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_negtf2_vr ((TARGET_VX) && (TARGET_VXE))
#define HAVE_absv1sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_absv2sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_absv4sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_absv1df2 (TARGET_VX)
#define HAVE_absv2df2 (TARGET_VX)
#define HAVE_absv1tf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_abstf2_vr ((TARGET_VX) && (TARGET_VXE))
#define HAVE_negabsv1sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_negabsv2sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_negabsv4sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_negabsv1df2 (TARGET_VX)
#define HAVE_negabsv2df2 (TARGET_VX)
#define HAVE_negabsv1tf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_negabstf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgtv1sf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgtv2sf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgtv4sf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgtv1df_quiet_nocc (TARGET_VX)
#define HAVE_vec_cmpgtv2df_quiet_nocc (TARGET_VX)
#define HAVE_vec_cmpgtv1tf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgttf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgev1sf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgev2sf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgev4sf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgev1df_quiet_nocc (TARGET_VX)
#define HAVE_vec_cmpgev2df_quiet_nocc (TARGET_VX)
#define HAVE_vec_cmpgev1tf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgetf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vllv16qi (TARGET_VX)
#define HAVE_vec_vfeesv16qi (TARGET_VX)
#define HAVE_vec_vfeesv8hi (TARGET_VX)
#define HAVE_vec_vfeesv4si (TARGET_VX)
#define HAVE_vec_vfenesv16qi (TARGET_VX)
#define HAVE_vec_vfenesv8hi (TARGET_VX)
#define HAVE_vec_vfenesv4si (TARGET_VX)
#define HAVE_vec_pack_trunc_v8hi (TARGET_VX)
#define HAVE_vec_pack_trunc_v4si (TARGET_VX)
#define HAVE_vec_pack_trunc_v2di (TARGET_VX)
#define HAVE_vec_pack_ssat_v8hi (TARGET_VX)
#define HAVE_vec_pack_ssat_v4si (TARGET_VX)
#define HAVE_vec_pack_ssat_v2di (TARGET_VX)
#define HAVE_vec_pack_usat_v8hi (TARGET_VX)
#define HAVE_vec_pack_usat_v4si (TARGET_VX)
#define HAVE_vec_pack_usat_v2di (TARGET_VX)
#define HAVE_vec_unpacks_hi_v16qi (TARGET_VX)
#define HAVE_vec_unpacks_lo_v16qi (TARGET_VX)
#define HAVE_vec_unpacku_hi_v16qi (TARGET_VX)
#define HAVE_vec_unpacku_lo_v16qi (TARGET_VX)
#define HAVE_vec_unpacks_hi_v8hi (TARGET_VX)
#define HAVE_vec_unpacks_lo_v8hi (TARGET_VX)
#define HAVE_vec_unpacku_hi_v8hi (TARGET_VX)
#define HAVE_vec_unpacku_lo_v8hi (TARGET_VX)
#define HAVE_vec_unpacks_hi_v4si (TARGET_VX)
#define HAVE_vec_unpacks_lo_v4si (TARGET_VX)
#define HAVE_vec_unpacku_hi_v4si (TARGET_VX)
#define HAVE_vec_unpacku_lo_v4si (TARGET_VX)
#define HAVE_floatv2div2df2 (TARGET_VX)
#define HAVE_floatv4siv4sf2 ((TARGET_VX) && (TARGET_VXE2))
#define HAVE_floatunsv2div2df2 (TARGET_VX)
#define HAVE_floatunsv4siv4sf2 ((TARGET_VX) && (TARGET_VXE2))
#define HAVE_fix_truncv2dfv2di2 (TARGET_VX)
#define HAVE_fix_truncv4sfv4si2 ((TARGET_VX) && (TARGET_VXE2))
#define HAVE_fixuns_truncv2dfv2di2 (TARGET_VX)
#define HAVE_fixuns_truncv4sfv4si2 ((TARGET_VX) && (TARGET_VXE2))
#define HAVE_floorv4sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_btruncv4sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_roundv4sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_ceilv4sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_nearbyintv4sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_floorv2df2 (TARGET_VX)
#define HAVE_btruncv2df2 (TARGET_VX)
#define HAVE_roundv2df2 (TARGET_VX)
#define HAVE_ceilv2df2 (TARGET_VX)
#define HAVE_nearbyintv2df2 (TARGET_VX)
#define HAVE_floorv1tf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_btruncv1tf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_roundv1tf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_ceilv1tf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_nearbyintv1tf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_floortf2_vr ((TARGET_VX) && (TARGET_VXE))
#define HAVE_btrunctf2_vr ((TARGET_VX) && (TARGET_VXE))
#define HAVE_roundtf2_vr ((TARGET_VX) && (TARGET_VXE))
#define HAVE_ceiltf2_vr ((TARGET_VX) && (TARGET_VXE))
#define HAVE_nearbyinttf2_vr ((TARGET_VX) && (TARGET_VXE))
#define HAVE_rintv4sf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_rintv2df2 (TARGET_VX)
#define HAVE_rintv1tf2 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_rinttf2_vr ((TARGET_VX) && (TARGET_VXE))
#define HAVE_extenddftf2_vr (TARGET_VXE)
#define HAVE_movti (TARGET_ZARCH)
#define HAVE_force_la_31 (!TARGET_64BIT)
#define HAVE_movstrictqi 1
#define HAVE_movstricthi 1
#define HAVE_movstrictsi (TARGET_ZARCH)
#define HAVE_movsf 1
#define HAVE_movsd 1
#define HAVE_movcc 1
#define HAVE_cmpint 1
#define HAVE_fix_trunctddi2_dfp (TARGET_ZARCH && TARGET_HARD_DFP)
#define HAVE_fix_truncdddi2_dfp (TARGET_ZARCH && TARGET_HARD_DFP)
#define HAVE_floatditf2_fpr ((TARGET_ZARCH && TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_floatdifprx22 ((TARGET_ZARCH && TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_floatdidf2 (TARGET_ZARCH && TARGET_HARD_FLOAT)
#define HAVE_floatdisf2 (TARGET_ZARCH && TARGET_HARD_FLOAT)
#define HAVE_floatditd2 ((TARGET_ZARCH && TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_floatdidd2 ((TARGET_ZARCH && TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_floatsitf2_fpr ((TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_floatsifprx22 ((TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_floatsidf2 (TARGET_HARD_FLOAT)
#define HAVE_floatsisf2 (TARGET_HARD_FLOAT)
#define HAVE_floatsitd2 (TARGET_Z196 && TARGET_HARD_FLOAT)
#define HAVE_floatsidd2 (TARGET_Z196 && TARGET_HARD_FLOAT)
#define HAVE_truncdfsf2 (TARGET_HARD_FLOAT)
#define HAVE_trunctfdf2_fpr (TARGET_HARD_FLOAT)
#define HAVE_trunctfsf2_fpr (TARGET_HARD_FLOAT)
#define HAVE_truncddsd2 (TARGET_HARD_DFP)
#define HAVE_extendddtd2 (TARGET_HARD_DFP)
#define HAVE_extendsddd2 (TARGET_HARD_DFP)
#define HAVE_floortf2_fpr ((TARGET_Z196) && (!TARGET_VXE))
#define HAVE_btrunctf2_fpr ((TARGET_Z196) && (!TARGET_VXE))
#define HAVE_roundtf2_fpr ((TARGET_Z196) && (!TARGET_VXE))
#define HAVE_ceiltf2_fpr ((TARGET_Z196) && (!TARGET_VXE))
#define HAVE_nearbyinttf2_fpr ((TARGET_Z196) && (!TARGET_VXE))
#define HAVE_floorfprx22 ((TARGET_Z196) && (TARGET_VXE))
#define HAVE_btruncfprx22 ((TARGET_Z196) && (TARGET_VXE))
#define HAVE_roundfprx22 ((TARGET_Z196) && (TARGET_VXE))
#define HAVE_ceilfprx22 ((TARGET_Z196) && (TARGET_VXE))
#define HAVE_nearbyintfprx22 ((TARGET_Z196) && (TARGET_VXE))
#define HAVE_floordf2 (TARGET_Z196)
#define HAVE_btruncdf2 (TARGET_Z196)
#define HAVE_rounddf2 (TARGET_Z196)
#define HAVE_ceildf2 (TARGET_Z196)
#define HAVE_nearbyintdf2 (TARGET_Z196)
#define HAVE_floorsf2 (TARGET_Z196)
#define HAVE_btruncsf2 (TARGET_Z196)
#define HAVE_roundsf2 (TARGET_Z196)
#define HAVE_ceilsf2 (TARGET_Z196)
#define HAVE_nearbyintsf2 (TARGET_Z196)
#define HAVE_rinttf2_fpr (!TARGET_VXE)
#define HAVE_rintfprx22 (TARGET_VXE)
#define HAVE_rintdf2 1
#define HAVE_rintsf2 1
#define HAVE_floortd2 (TARGET_HARD_DFP)
#define HAVE_btrunctd2 (TARGET_HARD_DFP)
#define HAVE_roundtd2 (TARGET_HARD_DFP)
#define HAVE_ceiltd2 (TARGET_HARD_DFP)
#define HAVE_nearbyinttd2 (TARGET_HARD_DFP)
#define HAVE_floordd2 (TARGET_HARD_DFP)
#define HAVE_btruncdd2 (TARGET_HARD_DFP)
#define HAVE_rounddd2 (TARGET_HARD_DFP)
#define HAVE_ceildd2 (TARGET_HARD_DFP)
#define HAVE_nearbyintdd2 (TARGET_HARD_DFP)
#define HAVE_rinttd2 (TARGET_HARD_DFP)
#define HAVE_rintdd2 (TARGET_HARD_DFP)
#define HAVE_addtf3_fpr ((TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_addfprx23 ((TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_adddf3 (TARGET_HARD_FLOAT)
#define HAVE_addsf3 (TARGET_HARD_FLOAT)
#define HAVE_addtd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_adddd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_subtf3_fpr ((TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_subfprx23 ((TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_subdf3 (TARGET_HARD_FLOAT)
#define HAVE_subsf3 (TARGET_HARD_FLOAT)
#define HAVE_subtd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_subdd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_sne 1
#define HAVE_mulditi3 (TARGET_Z14)
#define HAVE_mulditi3_2 (TARGET_Z14)
#define HAVE_mulsidi3 (!TARGET_ZARCH)
#define HAVE_umulditi3 (TARGET_ZARCH)
#define HAVE_umulsidi3 (!TARGET_ZARCH)
#define HAVE_multf3_fpr ((TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_mulfprx23 ((TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_muldf3 (TARGET_HARD_FLOAT)
#define HAVE_mulsf3 (TARGET_HARD_FLOAT)
#define HAVE_multd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_muldd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_fmadf4 (TARGET_HARD_FLOAT && s390_fma_allowed_p (DFmode))
#define HAVE_fmasf4 (TARGET_HARD_FLOAT && s390_fma_allowed_p (SFmode))
#define HAVE_fmsdf4 (TARGET_HARD_FLOAT && s390_fma_allowed_p (DFmode))
#define HAVE_fmssf4 (TARGET_HARD_FLOAT && s390_fma_allowed_p (SFmode))
#define HAVE_divmodtidi3 (TARGET_ZARCH)
#define HAVE_divmodtisi3 (TARGET_ZARCH)
#define HAVE_udivmodtidi3 (TARGET_ZARCH)
#define HAVE_divmoddisi3 (!TARGET_ZARCH)
#define HAVE_udivmoddisi3 (!TARGET_ZARCH)
#define HAVE_divtf3_fpr ((TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_divfprx23 ((TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_divdf3 (TARGET_HARD_FLOAT)
#define HAVE_divsf3 (TARGET_HARD_FLOAT)
#define HAVE_divtd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_divdd3 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_absdi2 (TARGET_ZARCH)
#define HAVE_abssi2 1
#define HAVE_sqrttf2_fpr ((TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_sqrtfprx22 ((TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_sqrtdf2 (TARGET_HARD_FLOAT)
#define HAVE_sqrtsf2 (TARGET_HARD_FLOAT)
#define HAVE_clztidi2 (UINTVAL (operands[2]) == HOST_WIDE_INT_1U << 63 \
   && TARGET_EXTIMM && TARGET_ZARCH)
#define HAVE_trap 1
#define HAVE_condtrap 1
#define HAVE_doloop_si64 1
#define HAVE_doloop_di (TARGET_ZARCH)
#define HAVE_indirect_jump_via_thunkdi_z10 ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_THUNK \
  && TARGET_CPU_Z10) && (TARGET_64BIT))
#define HAVE_indirect_jump_via_thunksi_z10 ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_THUNK \
  && TARGET_CPU_Z10) && (!TARGET_64BIT))
#define HAVE_indirect_jump_via_thunkdi ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_THUNK \
  && !TARGET_CPU_Z10) && (TARGET_64BIT))
#define HAVE_indirect_jump_via_thunksi ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_THUNK \
  && !TARGET_CPU_Z10) && (!TARGET_64BIT))
#define HAVE_indirect_jump_via_inlinethunkdi_z10 ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_INLINE_THUNK \
   && TARGET_CPU_Z10) && (TARGET_64BIT))
#define HAVE_indirect_jump_via_inlinethunksi_z10 ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_INLINE_THUNK \
   && TARGET_CPU_Z10) && (!TARGET_64BIT))
#define HAVE_indirect_jump_via_inlinethunkdi ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_INLINE_THUNK \
   && !TARGET_CPU_Z10) && (TARGET_64BIT))
#define HAVE_indirect_jump_via_inlinethunksi ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_INLINE_THUNK \
   && !TARGET_CPU_Z10) && (!TARGET_64BIT))
#define HAVE_casesi_jump_via_thunkdi_z10 ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_THUNK \
  && TARGET_CPU_Z10) && (TARGET_64BIT))
#define HAVE_casesi_jump_via_thunksi_z10 ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_THUNK \
  && TARGET_CPU_Z10) && (!TARGET_64BIT))
#define HAVE_casesi_jump_via_thunkdi ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_THUNK \
  && !TARGET_CPU_Z10) && (TARGET_64BIT))
#define HAVE_casesi_jump_via_thunksi ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_THUNK \
  && !TARGET_CPU_Z10) && (!TARGET_64BIT))
#define HAVE_casesi_jump_via_inlinethunkdi_z10 ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_INLINE_THUNK \
   && TARGET_CPU_Z10) && (TARGET_64BIT))
#define HAVE_casesi_jump_via_inlinethunksi_z10 ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_INLINE_THUNK \
   && TARGET_CPU_Z10) && (!TARGET_64BIT))
#define HAVE_casesi_jump_via_inlinethunkdi ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_INLINE_THUNK \
   && !TARGET_CPU_Z10) && (TARGET_64BIT))
#define HAVE_casesi_jump_via_inlinethunksi ((TARGET_INDIRECT_BRANCH_NOBP_JUMP_INLINE_THUNK \
   && !TARGET_CPU_Z10) && (!TARGET_64BIT))
#define HAVE_blockage 1
#define HAVE_mem_thread_fence_1 1
#define HAVE_atomic_loaddi_1 (!TARGET_ZARCH)
#define HAVE_atomic_loadti_1 (TARGET_ZARCH)
#define HAVE_atomic_storedi_1 (!TARGET_ZARCH)
#define HAVE_atomic_storeti_1 (TARGET_ZARCH)
#define HAVE_atomic_fetch_anddi_iaf ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_ordi_iaf ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_xordi_iaf ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_adddi_iaf ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_andsi_iaf (TARGET_Z196)
#define HAVE_atomic_fetch_orsi_iaf (TARGET_Z196)
#define HAVE_atomic_fetch_xorsi_iaf (TARGET_Z196)
#define HAVE_atomic_fetch_addsi_iaf (TARGET_Z196)
#define HAVE_nop 1
#define HAVE_nop_lr0 1
#define HAVE_nop_lr1 1
#define HAVE_nop_2_byte 1
#define HAVE_nop_4_byte 1
#define HAVE_nop_6_byte 1
#define HAVE_pool_align 1
#define HAVE_pool_section_start 1
#define HAVE_pool_section_end 1
#define HAVE_main_base_64 (GET_MODE (operands[0]) == Pmode)
#define HAVE_main_pool (GET_MODE (operands[0]) == Pmode)
#define HAVE_reload_base_64 (GET_MODE (operands[0]) == Pmode)
#define HAVE_pool 1
#define HAVE_return (s390_can_use_return_insn ())
#define HAVE_simple_return (s390_can_use_simple_return_insn ())
#define HAVE_returndi_prez10 ((!TARGET_CPU_Z10 && TARGET_INDIRECT_BRANCH_NOBP_RET_OPTION) && (TARGET_64BIT))
#define HAVE_returnsi_prez10 ((!TARGET_CPU_Z10 && TARGET_INDIRECT_BRANCH_NOBP_RET_OPTION) && (!TARGET_64BIT))
#define HAVE_stack_protect_setdi 1
#define HAVE_stack_protect_setsi 1
#define HAVE_stack_protect_testdi 1
#define HAVE_stack_protect_testsi 1
#define HAVE_stack_tiedi (TARGET_64BIT)
#define HAVE_stack_tiesi (!TARGET_64BIT)
#define HAVE_stack_restore_from_fpr (TARGET_Z10)
#define HAVE_prefetch (TARGET_Z10)
#define HAVE_bswapdi2 (TARGET_ZARCH)
#define HAVE_bswapsi2 1
#define HAVE_bswaphi2 1
#define HAVE_copysigntf3_fpr ((TARGET_Z196) && (!TARGET_VXE))
#define HAVE_copysignfprx23 ((TARGET_Z196) && (TARGET_VXE))
#define HAVE_copysigndf3 (TARGET_Z196)
#define HAVE_copysignsf3 (TARGET_Z196)
#define HAVE_copysigntd3 ((TARGET_Z196) && (TARGET_HARD_DFP))
#define HAVE_copysigndd3 ((TARGET_Z196) && (TARGET_HARD_DFP))
#define HAVE_tbegin_1_z13 (TARGET_VX && INTVAL (operands[0]) >= 0 && INTVAL (operands[0]) <= 0xffff)
#define HAVE_tbegin_1 (TARGET_HTM && INTVAL (operands[0]) >= 0 && INTVAL (operands[0]) <= 0xffff)
#define HAVE_tbegin_nofloat_1 (TARGET_HTM && INTVAL (operands[0]) >= 0 && INTVAL (operands[0]) <= 0xffff)
#define HAVE_etnd (TARGET_HTM)
#define HAVE_ntstg (TARGET_HTM)
#define HAVE_sfpc (TARGET_HARD_FLOAT)
#define HAVE_efpc (TARGET_HARD_FLOAT)
#define HAVE_lcbb (TARGET_Z13)
#define HAVE_split_stack_calldi (TARGET_64BIT)
#define HAVE_split_stack_callsi (!TARGET_64BIT)
#define HAVE_split_stack_cond_calldi (TARGET_64BIT)
#define HAVE_split_stack_cond_callsi (!TARGET_64BIT)
#define HAVE_osc_break 1
#define HAVE_vec_genmaskv16qi (TARGET_VX)
#define HAVE_vec_genmaskv8hi (TARGET_VX)
#define HAVE_vec_genmaskv4si (TARGET_VX)
#define HAVE_vec_genmaskv2di (TARGET_VX)
#define HAVE_vec_genbytemaskv16qi (TARGET_VX)
#define HAVE_vec_splatsv16qi (TARGET_VX)
#define HAVE_vec_splatsv8hi (TARGET_VX)
#define HAVE_vec_splatsv4si (TARGET_VX)
#define HAVE_vec_splatsv2di (TARGET_VX)
#define HAVE_vec_splatsv2df (TARGET_VX)
#define HAVE_vec_splatsv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_insertv16qi (TARGET_VX)
#define HAVE_vec_insertv8hi (TARGET_VX)
#define HAVE_vec_insertv4si (TARGET_VX)
#define HAVE_vec_insertv2di (TARGET_VX)
#define HAVE_vec_insertv2df (TARGET_VX)
#define HAVE_vec_insertv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_promotev16qi (TARGET_VX)
#define HAVE_vec_promotev8hi (TARGET_VX)
#define HAVE_vec_promotev4si (TARGET_VX)
#define HAVE_vec_promotev2di (TARGET_VX)
#define HAVE_vec_promotev2df (TARGET_VX)
#define HAVE_vec_promotev4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vlrlrv16qi (TARGET_VXE)
#define HAVE_vec_mergehv16qi (TARGET_VX)
#define HAVE_vec_mergehv8hi (TARGET_VX)
#define HAVE_vec_mergehv4si (TARGET_VX)
#define HAVE_vec_mergehv4sf (TARGET_VX)
#define HAVE_vec_mergehv2di (TARGET_VX)
#define HAVE_vec_mergehv2df (TARGET_VX)
#define HAVE_vec_mergelv16qi (TARGET_VX)
#define HAVE_vec_mergelv8hi (TARGET_VX)
#define HAVE_vec_mergelv4si (TARGET_VX)
#define HAVE_vec_mergelv4sf (TARGET_VX)
#define HAVE_vec_mergelv2di (TARGET_VX)
#define HAVE_vec_mergelv2df (TARGET_VX)
#define HAVE_vec_packs_ccv8hi (TARGET_VX)
#define HAVE_vec_packs_ccv4si (TARGET_VX)
#define HAVE_vec_packs_ccv2di (TARGET_VX)
#define HAVE_vec_packsu_uv8hi (TARGET_VX)
#define HAVE_vec_packsu_uv4si (TARGET_VX)
#define HAVE_vec_packsu_uv2di (TARGET_VX)
#define HAVE_vec_packsu_ccv8hi (TARGET_VX)
#define HAVE_vec_packsu_ccv4si (TARGET_VX)
#define HAVE_vec_packsu_ccv2di (TARGET_VX)
#define HAVE_vec_permiv2di (TARGET_VX)
#define HAVE_vec_permiv2df (TARGET_VX)
#define HAVE_vec_splatv16qi (TARGET_VX)
#define HAVE_vec_splatv8hi (TARGET_VX)
#define HAVE_vec_splatv4si (TARGET_VX)
#define HAVE_vec_splatv2di (TARGET_VX)
#define HAVE_vec_splatv1ti ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_splatv2df (TARGET_VX)
#define HAVE_vec_splatv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_splatv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_splattf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_scatter_elementv4si (TARGET_VX)
#define HAVE_vec_scatter_elementv2di (TARGET_VX)
#define HAVE_vec_scatter_elementv2df (TARGET_VX)
#define HAVE_vec_scatter_elementv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vstrlrv16qi (TARGET_VXE)
#define HAVE_vec_all_eqv16qi (TARGET_VX)
#define HAVE_vec_all_nev16qi (TARGET_VX)
#define HAVE_vec_all_gtv16qi (TARGET_VX)
#define HAVE_vec_all_gev16qi (TARGET_VX)
#define HAVE_vec_all_ltv16qi (TARGET_VX)
#define HAVE_vec_all_lev16qi (TARGET_VX)
#define HAVE_vec_all_gtuv16qi (TARGET_VX)
#define HAVE_vec_all_geuv16qi (TARGET_VX)
#define HAVE_vec_all_ltuv16qi (TARGET_VX)
#define HAVE_vec_all_leuv16qi (TARGET_VX)
#define HAVE_vec_all_eqv8hi (TARGET_VX)
#define HAVE_vec_all_nev8hi (TARGET_VX)
#define HAVE_vec_all_gtv8hi (TARGET_VX)
#define HAVE_vec_all_gev8hi (TARGET_VX)
#define HAVE_vec_all_ltv8hi (TARGET_VX)
#define HAVE_vec_all_lev8hi (TARGET_VX)
#define HAVE_vec_all_gtuv8hi (TARGET_VX)
#define HAVE_vec_all_geuv8hi (TARGET_VX)
#define HAVE_vec_all_ltuv8hi (TARGET_VX)
#define HAVE_vec_all_leuv8hi (TARGET_VX)
#define HAVE_vec_all_eqv4si (TARGET_VX)
#define HAVE_vec_all_nev4si (TARGET_VX)
#define HAVE_vec_all_gtv4si (TARGET_VX)
#define HAVE_vec_all_gev4si (TARGET_VX)
#define HAVE_vec_all_ltv4si (TARGET_VX)
#define HAVE_vec_all_lev4si (TARGET_VX)
#define HAVE_vec_all_gtuv4si (TARGET_VX)
#define HAVE_vec_all_geuv4si (TARGET_VX)
#define HAVE_vec_all_ltuv4si (TARGET_VX)
#define HAVE_vec_all_leuv4si (TARGET_VX)
#define HAVE_vec_all_eqv2di (TARGET_VX)
#define HAVE_vec_all_nev2di (TARGET_VX)
#define HAVE_vec_all_gtv2di (TARGET_VX)
#define HAVE_vec_all_gev2di (TARGET_VX)
#define HAVE_vec_all_ltv2di (TARGET_VX)
#define HAVE_vec_all_lev2di (TARGET_VX)
#define HAVE_vec_all_gtuv2di (TARGET_VX)
#define HAVE_vec_all_geuv2di (TARGET_VX)
#define HAVE_vec_all_ltuv2di (TARGET_VX)
#define HAVE_vec_all_leuv2di (TARGET_VX)
#define HAVE_vec_any_eqv16qi (TARGET_VX)
#define HAVE_vec_any_nev16qi (TARGET_VX)
#define HAVE_vec_any_gtv16qi (TARGET_VX)
#define HAVE_vec_any_gev16qi (TARGET_VX)
#define HAVE_vec_any_ltv16qi (TARGET_VX)
#define HAVE_vec_any_lev16qi (TARGET_VX)
#define HAVE_vec_any_gtuv16qi (TARGET_VX)
#define HAVE_vec_any_geuv16qi (TARGET_VX)
#define HAVE_vec_any_ltuv16qi (TARGET_VX)
#define HAVE_vec_any_leuv16qi (TARGET_VX)
#define HAVE_vec_any_eqv8hi (TARGET_VX)
#define HAVE_vec_any_nev8hi (TARGET_VX)
#define HAVE_vec_any_gtv8hi (TARGET_VX)
#define HAVE_vec_any_gev8hi (TARGET_VX)
#define HAVE_vec_any_ltv8hi (TARGET_VX)
#define HAVE_vec_any_lev8hi (TARGET_VX)
#define HAVE_vec_any_gtuv8hi (TARGET_VX)
#define HAVE_vec_any_geuv8hi (TARGET_VX)
#define HAVE_vec_any_ltuv8hi (TARGET_VX)
#define HAVE_vec_any_leuv8hi (TARGET_VX)
#define HAVE_vec_any_eqv4si (TARGET_VX)
#define HAVE_vec_any_nev4si (TARGET_VX)
#define HAVE_vec_any_gtv4si (TARGET_VX)
#define HAVE_vec_any_gev4si (TARGET_VX)
#define HAVE_vec_any_ltv4si (TARGET_VX)
#define HAVE_vec_any_lev4si (TARGET_VX)
#define HAVE_vec_any_gtuv4si (TARGET_VX)
#define HAVE_vec_any_geuv4si (TARGET_VX)
#define HAVE_vec_any_ltuv4si (TARGET_VX)
#define HAVE_vec_any_leuv4si (TARGET_VX)
#define HAVE_vec_any_eqv2di (TARGET_VX)
#define HAVE_vec_any_nev2di (TARGET_VX)
#define HAVE_vec_any_gtv2di (TARGET_VX)
#define HAVE_vec_any_gev2di (TARGET_VX)
#define HAVE_vec_any_ltv2di (TARGET_VX)
#define HAVE_vec_any_lev2di (TARGET_VX)
#define HAVE_vec_any_gtuv2di (TARGET_VX)
#define HAVE_vec_any_geuv2di (TARGET_VX)
#define HAVE_vec_any_ltuv2di (TARGET_VX)
#define HAVE_vec_any_leuv2di (TARGET_VX)
#define HAVE_vec_all_eqv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_all_nev4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_all_gtv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_all_gev4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_all_unlev4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_all_unltv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_all_ltv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_all_lev4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_all_eqv2df (TARGET_VX)
#define HAVE_vec_all_nev2df (TARGET_VX)
#define HAVE_vec_all_gtv2df (TARGET_VX)
#define HAVE_vec_all_gev2df (TARGET_VX)
#define HAVE_vec_all_unlev2df (TARGET_VX)
#define HAVE_vec_all_unltv2df (TARGET_VX)
#define HAVE_vec_all_ltv2df (TARGET_VX)
#define HAVE_vec_all_lev2df (TARGET_VX)
#define HAVE_vec_any_eqv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_any_nev4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_any_gtv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_any_gev4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_any_unlev4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_any_unltv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_any_ltv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_any_lev4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_any_eqv2df (TARGET_VX)
#define HAVE_vec_any_nev2df (TARGET_VX)
#define HAVE_vec_any_gtv2df (TARGET_VX)
#define HAVE_vec_any_gev2df (TARGET_VX)
#define HAVE_vec_any_unlev2df (TARGET_VX)
#define HAVE_vec_any_unltv2df (TARGET_VX)
#define HAVE_vec_any_ltv2df (TARGET_VX)
#define HAVE_vec_any_lev2df (TARGET_VX)
#define HAVE_vec_cmpeqv16qi (TARGET_VX)
#define HAVE_vec_cmpgtv16qi (TARGET_VX)
#define HAVE_vec_cmpgtuv16qi (TARGET_VX)
#define HAVE_vec_cmpgev16qi (TARGET_VX)
#define HAVE_vec_cmpgeuv16qi (TARGET_VX)
#define HAVE_vec_cmpltv16qi (TARGET_VX)
#define HAVE_vec_cmpltuv16qi (TARGET_VX)
#define HAVE_vec_cmplev16qi (TARGET_VX)
#define HAVE_vec_cmpleuv16qi (TARGET_VX)
#define HAVE_vec_cmpeqv8hi (TARGET_VX)
#define HAVE_vec_cmpgtv8hi (TARGET_VX)
#define HAVE_vec_cmpgtuv8hi (TARGET_VX)
#define HAVE_vec_cmpgev8hi (TARGET_VX)
#define HAVE_vec_cmpgeuv8hi (TARGET_VX)
#define HAVE_vec_cmpltv8hi (TARGET_VX)
#define HAVE_vec_cmpltuv8hi (TARGET_VX)
#define HAVE_vec_cmplev8hi (TARGET_VX)
#define HAVE_vec_cmpleuv8hi (TARGET_VX)
#define HAVE_vec_cmpeqv4si (TARGET_VX)
#define HAVE_vec_cmpgtv4si (TARGET_VX)
#define HAVE_vec_cmpgtuv4si (TARGET_VX)
#define HAVE_vec_cmpgev4si (TARGET_VX)
#define HAVE_vec_cmpgeuv4si (TARGET_VX)
#define HAVE_vec_cmpltv4si (TARGET_VX)
#define HAVE_vec_cmpltuv4si (TARGET_VX)
#define HAVE_vec_cmplev4si (TARGET_VX)
#define HAVE_vec_cmpleuv4si (TARGET_VX)
#define HAVE_vec_cmpeqv2di (TARGET_VX)
#define HAVE_vec_cmpgtv2di (TARGET_VX)
#define HAVE_vec_cmpgtuv2di (TARGET_VX)
#define HAVE_vec_cmpgev2di (TARGET_VX)
#define HAVE_vec_cmpgeuv2di (TARGET_VX)
#define HAVE_vec_cmpltv2di (TARGET_VX)
#define HAVE_vec_cmpltuv2di (TARGET_VX)
#define HAVE_vec_cmplev2di (TARGET_VX)
#define HAVE_vec_cmpleuv2di (TARGET_VX)
#define HAVE_vec_cmpeqv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgtv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgev4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpltv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmplev4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpeqv2df (TARGET_VX)
#define HAVE_vec_cmpgtv2df (TARGET_VX)
#define HAVE_vec_cmpgev2df (TARGET_VX)
#define HAVE_vec_cmpltv2df (TARGET_VX)
#define HAVE_vec_cmplev2df (TARGET_VX)
#define HAVE_vec_cmpeqv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgtv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgev1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpltv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmplev1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpeqtf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgttf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpgetf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmplttf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpletf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_slbv16qi (TARGET_VX)
#define HAVE_vec_slbv8hi (TARGET_VX)
#define HAVE_vec_slbv4si (TARGET_VX)
#define HAVE_vec_slbv2di (TARGET_VX)
#define HAVE_vec_slbv1ti ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_slbv2df (TARGET_VX)
#define HAVE_vec_slbv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_slbv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_slbtf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_sldwv16qi (TARGET_VX)
#define HAVE_vec_sldwv8hi (TARGET_VX)
#define HAVE_vec_sldwv4si (TARGET_VX)
#define HAVE_vec_sldwv2di (TARGET_VX)
#define HAVE_vec_sldwv1ti ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_sldwv2df (TARGET_VX)
#define HAVE_vec_sldwv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_sldwv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_sldwtf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_srbv16qi (TARGET_VX)
#define HAVE_vec_srbv8hi (TARGET_VX)
#define HAVE_vec_srbv4si (TARGET_VX)
#define HAVE_vec_srbv2di (TARGET_VX)
#define HAVE_vec_srbv1ti ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_srbv2df (TARGET_VX)
#define HAVE_vec_srbv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_srbv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_srbtf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_sum2v8hi (TARGET_VX)
#define HAVE_vec_sum2v4si (TARGET_VX)
#define HAVE_vec_sum4v16qi (TARGET_VX)
#define HAVE_vec_sum4v8hi (TARGET_VX)
#define HAVE_vec_test_mask_intv16qi (TARGET_VX)
#define HAVE_vec_test_mask_intv8hi (TARGET_VX)
#define HAVE_vec_test_mask_intv4si (TARGET_VX)
#define HAVE_vec_test_mask_intv2di (TARGET_VX)
#define HAVE_vec_test_mask_intv1ti ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_test_mask_intv2df (TARGET_VX)
#define HAVE_vec_test_mask_intv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_test_mask_intv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_test_mask_inttf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vfaezv16qi (TARGET_VX)
#define HAVE_vfaezv8hi (TARGET_VX)
#define HAVE_vfaezv4si (TARGET_VX)
#define HAVE_vfaesv16qi (TARGET_VX)
#define HAVE_vfaesv8hi (TARGET_VX)
#define HAVE_vfaesv4si (TARGET_VX)
#define HAVE_vfaezsv16qi (TARGET_VX)
#define HAVE_vfaezsv8hi (TARGET_VX)
#define HAVE_vfaezsv4si (TARGET_VX)
#define HAVE_vfeesv16qi (TARGET_VX)
#define HAVE_vfeesv8hi (TARGET_VX)
#define HAVE_vfeesv4si (TARGET_VX)
#define HAVE_vfeezsv16qi (TARGET_VX)
#define HAVE_vfeezsv8hi (TARGET_VX)
#define HAVE_vfeezsv4si (TARGET_VX)
#define HAVE_vfenesv16qi (TARGET_VX)
#define HAVE_vfenesv8hi (TARGET_VX)
#define HAVE_vfenesv4si (TARGET_VX)
#define HAVE_vfenezsv16qi (TARGET_VX)
#define HAVE_vfenezsv8hi (TARGET_VX)
#define HAVE_vfenezsv4si (TARGET_VX)
#define HAVE_vistrsv16qi (TARGET_VX)
#define HAVE_vistrsv8hi (TARGET_VX)
#define HAVE_vistrsv4si (TARGET_VX)
#define HAVE_vstrczv16qi (TARGET_VX)
#define HAVE_vstrczv8hi (TARGET_VX)
#define HAVE_vstrczv4si (TARGET_VX)
#define HAVE_vstrcsv16qi (TARGET_VX)
#define HAVE_vstrcsv8hi (TARGET_VX)
#define HAVE_vstrcsv4si (TARGET_VX)
#define HAVE_vstrczsv16qi (TARGET_VX)
#define HAVE_vstrczsv8hi (TARGET_VX)
#define HAVE_vstrczsv4si (TARGET_VX)
#define HAVE_vstrsv16qi (TARGET_VXE2)
#define HAVE_vstrsv8hi (TARGET_VXE2)
#define HAVE_vstrsv4si (TARGET_VXE2)
#define HAVE_vstrszv16qi (TARGET_VXE2)
#define HAVE_vstrszv8hi (TARGET_VXE2)
#define HAVE_vstrszv4si (TARGET_VXE2)
#define HAVE_vec_ctd_s64 (TARGET_VX)
#define HAVE_vec_ctd_u64 (TARGET_VX)
#define HAVE_vec_ctsl (TARGET_VX)
#define HAVE_vec_ctul (TARGET_VX)
#define HAVE_vec_ld2f (TARGET_VX)
#define HAVE_vec_st2f (TARGET_VX)
#define HAVE_vftciv4sf_intcconly ((TARGET_VX && CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[1]), 'J', "J")) && (TARGET_VXE))
#define HAVE_vftciv2df_intcconly (TARGET_VX && CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[1]), 'J', "J"))
#define HAVE_vftciv1tf_intcconly ((TARGET_VX && CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[1]), 'J', "J")) && (TARGET_VXE))
#define HAVE_vftcitf_intcconly ((TARGET_VX && CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[1]), 'J', "J")) && (TARGET_VXE))
#define HAVE_vftciv4sf_intcc ((TARGET_VX && CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'J', "J")) && (TARGET_VXE))
#define HAVE_vftciv2df_intcc (TARGET_VX && CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'J', "J"))
#define HAVE_vftciv1tf_intcc ((TARGET_VX && CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'J', "J")) && (TARGET_VXE))
#define HAVE_vftcitf_intcc ((TARGET_VX && CONST_OK_FOR_CONSTRAINT_P (INTVAL (operands[2]), 'J', "J")) && (TARGET_VXE))
#define HAVE_vec_cmpeqv16qi_cc (TARGET_VX)
#define HAVE_vec_cmpeqv8hi_cc (TARGET_VX)
#define HAVE_vec_cmpeqv4si_cc (TARGET_VX)
#define HAVE_vec_cmpeqv2di_cc (TARGET_VX)
#define HAVE_vec_cmphv16qi_cc (TARGET_VX)
#define HAVE_vec_cmphv8hi_cc (TARGET_VX)
#define HAVE_vec_cmphv4si_cc (TARGET_VX)
#define HAVE_vec_cmphv2di_cc (TARGET_VX)
#define HAVE_vec_cmphlv16qi_cc (TARGET_VX)
#define HAVE_vec_cmphlv8hi_cc (TARGET_VX)
#define HAVE_vec_cmphlv4si_cc (TARGET_VX)
#define HAVE_vec_cmphlv2di_cc (TARGET_VX)
#define HAVE_vec_cmpeqv4sf_cc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpeqv2df_cc (TARGET_VX)
#define HAVE_vec_cmpeqv1tf_cc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpeqtf_cc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmphv4sf_cc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmphv2df_cc (TARGET_VX)
#define HAVE_vec_cmphv1tf_cc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmphtf_cc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmphev4sf_cc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmphev2df_cc (TARGET_VX)
#define HAVE_vec_cmphev1tf_cc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmphetf_cc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_movtf 1
#define HAVE_vec_setv1qi (TARGET_VX)
#define HAVE_vec_setv2qi (TARGET_VX)
#define HAVE_vec_setv4qi (TARGET_VX)
#define HAVE_vec_setv8qi (TARGET_VX)
#define HAVE_vec_setv16qi (TARGET_VX)
#define HAVE_vec_setv1hi (TARGET_VX)
#define HAVE_vec_setv2hi (TARGET_VX)
#define HAVE_vec_setv4hi (TARGET_VX)
#define HAVE_vec_setv8hi (TARGET_VX)
#define HAVE_vec_setv1si (TARGET_VX)
#define HAVE_vec_setv2si (TARGET_VX)
#define HAVE_vec_setv4si (TARGET_VX)
#define HAVE_vec_setv1di (TARGET_VX)
#define HAVE_vec_setv2di (TARGET_VX)
#define HAVE_vec_setv1sf (TARGET_VX)
#define HAVE_vec_setv2sf (TARGET_VX)
#define HAVE_vec_setv4sf (TARGET_VX)
#define HAVE_vec_setv1df (TARGET_VX)
#define HAVE_vec_setv2df (TARGET_VX)
#define HAVE_vec_extractv1qiqi (TARGET_VX)
#define HAVE_vec_extractv2qiqi (TARGET_VX)
#define HAVE_vec_extractv4qiqi (TARGET_VX)
#define HAVE_vec_extractv8qiqi (TARGET_VX)
#define HAVE_vec_extractv16qiqi (TARGET_VX)
#define HAVE_vec_extractv1hihi (TARGET_VX)
#define HAVE_vec_extractv2hihi (TARGET_VX)
#define HAVE_vec_extractv4hihi (TARGET_VX)
#define HAVE_vec_extractv8hihi (TARGET_VX)
#define HAVE_vec_extractv1sisi (TARGET_VX)
#define HAVE_vec_extractv2sisi (TARGET_VX)
#define HAVE_vec_extractv4sisi (TARGET_VX)
#define HAVE_vec_extractv1didi (TARGET_VX)
#define HAVE_vec_extractv2didi (TARGET_VX)
#define HAVE_vec_extractv1sfsf (TARGET_VX)
#define HAVE_vec_extractv2sfsf (TARGET_VX)
#define HAVE_vec_extractv4sfsf (TARGET_VX)
#define HAVE_vec_extractv1dfdf (TARGET_VX)
#define HAVE_vec_extractv2dfdf (TARGET_VX)
#define HAVE_vec_initv16qiqi (TARGET_VX)
#define HAVE_vec_initv8hihi (TARGET_VX)
#define HAVE_vec_initv4sisi (TARGET_VX)
#define HAVE_vec_initv4sfsf (TARGET_VX)
#define HAVE_vec_initv2didi (TARGET_VX)
#define HAVE_vec_initv2dfdf (TARGET_VX)
#define HAVE_vec_initv1titi (TARGET_VX)
#define HAVE_vec_initv1tftf (TARGET_VX)
#define HAVE_vec_inittftf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vcondv16qiv16qi (TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V16QImode))
#define HAVE_vcondv8hiv16qi (TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V16QImode))
#define HAVE_vcondv4siv16qi (TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V16QImode))
#define HAVE_vcondv2div16qi (TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V16QImode))
#define HAVE_vcondv1tiv16qi ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V16QImode)) && (TARGET_VXE))
#define HAVE_vcondv2dfv16qi (TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V16QImode))
#define HAVE_vcondv4sfv16qi ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V16QImode)) && (TARGET_VXE))
#define HAVE_vcondv1tfv16qi ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V16QImode)) && (TARGET_VXE))
#define HAVE_vcondtfv16qi ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V16QImode)) && (TARGET_VXE))
#define HAVE_vcondv16qiv8hi (TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V8HImode))
#define HAVE_vcondv8hiv8hi (TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V8HImode))
#define HAVE_vcondv4siv8hi (TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V8HImode))
#define HAVE_vcondv2div8hi (TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V8HImode))
#define HAVE_vcondv1tiv8hi ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V8HImode)) && (TARGET_VXE))
#define HAVE_vcondv2dfv8hi (TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V8HImode))
#define HAVE_vcondv4sfv8hi ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V8HImode)) && (TARGET_VXE))
#define HAVE_vcondv1tfv8hi ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V8HImode)) && (TARGET_VXE))
#define HAVE_vcondtfv8hi ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V8HImode)) && (TARGET_VXE))
#define HAVE_vcondv16qiv4si (TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V4SImode))
#define HAVE_vcondv8hiv4si (TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V4SImode))
#define HAVE_vcondv4siv4si (TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V4SImode))
#define HAVE_vcondv2div4si (TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V4SImode))
#define HAVE_vcondv1tiv4si ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V4SImode)) && (TARGET_VXE))
#define HAVE_vcondv2dfv4si (TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V4SImode))
#define HAVE_vcondv4sfv4si ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V4SImode)) && (TARGET_VXE))
#define HAVE_vcondv1tfv4si ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V4SImode)) && (TARGET_VXE))
#define HAVE_vcondtfv4si ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V4SImode)) && (TARGET_VXE))
#define HAVE_vcondv16qiv2di (TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V2DImode))
#define HAVE_vcondv8hiv2di (TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V2DImode))
#define HAVE_vcondv4siv2di (TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V2DImode))
#define HAVE_vcondv2div2di (TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V2DImode))
#define HAVE_vcondv1tiv2di ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V2DImode)) && (TARGET_VXE))
#define HAVE_vcondv2dfv2di (TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V2DImode))
#define HAVE_vcondv4sfv2di ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V2DImode)) && (TARGET_VXE))
#define HAVE_vcondv1tfv2di ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V2DImode)) && (TARGET_VXE))
#define HAVE_vcondtfv2di ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V2DImode)) && (TARGET_VXE))
#define HAVE_vcondv16qiv2df (TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V2DFmode))
#define HAVE_vcondv8hiv2df (TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V2DFmode))
#define HAVE_vcondv4siv2df (TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V2DFmode))
#define HAVE_vcondv2div2df (TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V2DFmode))
#define HAVE_vcondv1tiv2df ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V2DFmode)) && (TARGET_VXE))
#define HAVE_vcondv2dfv2df (TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V2DFmode))
#define HAVE_vcondv4sfv2df ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V2DFmode)) && (TARGET_VXE))
#define HAVE_vcondv1tfv2df ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V2DFmode)) && (TARGET_VXE))
#define HAVE_vcondtfv2df ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V2DFmode)) && (TARGET_VXE))
#define HAVE_vcondv16qiv4sf ((TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vcondv8hiv4sf ((TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vcondv4siv4sf ((TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vcondv2div4sf ((TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vcondv1tiv4sf ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vcondv2dfv4sf ((TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vcondv4sfv4sf ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vcondv1tfv4sf ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vcondtfv4sf ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vcondv16qiv1tf ((TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vcondv8hiv1tf ((TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vcondv4siv1tf ((TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vcondv2div1tf ((TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vcondv1tiv1tf ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vcondv2dfv1tf ((TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vcondv4sfv1tf ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vcondv1tfv1tf ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vcondtfv1tf ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vcondv16qitf ((TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vcondv8hitf ((TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vcondv4sitf ((TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vcondv2ditf ((TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vcondv1titf ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vcondv2dftf ((TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vcondv4sftf ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vcondv1tftf ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vcondtftf ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vconduv16qiv16qi (TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V16QImode))
#define HAVE_vconduv8hiv16qi (TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V16QImode))
#define HAVE_vconduv4siv16qi (TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V16QImode))
#define HAVE_vconduv2div16qi (TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V16QImode))
#define HAVE_vconduv1tiv16qi ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V16QImode)) && (TARGET_VXE))
#define HAVE_vconduv2dfv16qi (TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V16QImode))
#define HAVE_vconduv4sfv16qi ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V16QImode)) && (TARGET_VXE))
#define HAVE_vconduv1tfv16qi ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V16QImode)) && (TARGET_VXE))
#define HAVE_vcondutfv16qi ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V16QImode)) && (TARGET_VXE))
#define HAVE_vconduv16qiv8hi (TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V8HImode))
#define HAVE_vconduv8hiv8hi (TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V8HImode))
#define HAVE_vconduv4siv8hi (TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V8HImode))
#define HAVE_vconduv2div8hi (TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V8HImode))
#define HAVE_vconduv1tiv8hi ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V8HImode)) && (TARGET_VXE))
#define HAVE_vconduv2dfv8hi (TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V8HImode))
#define HAVE_vconduv4sfv8hi ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V8HImode)) && (TARGET_VXE))
#define HAVE_vconduv1tfv8hi ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V8HImode)) && (TARGET_VXE))
#define HAVE_vcondutfv8hi ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V8HImode)) && (TARGET_VXE))
#define HAVE_vconduv16qiv4si (TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V4SImode))
#define HAVE_vconduv8hiv4si (TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V4SImode))
#define HAVE_vconduv4siv4si (TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V4SImode))
#define HAVE_vconduv2div4si (TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V4SImode))
#define HAVE_vconduv1tiv4si ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V4SImode)) && (TARGET_VXE))
#define HAVE_vconduv2dfv4si (TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V4SImode))
#define HAVE_vconduv4sfv4si ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V4SImode)) && (TARGET_VXE))
#define HAVE_vconduv1tfv4si ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V4SImode)) && (TARGET_VXE))
#define HAVE_vcondutfv4si ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V4SImode)) && (TARGET_VXE))
#define HAVE_vconduv16qiv2di (TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V2DImode))
#define HAVE_vconduv8hiv2di (TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V2DImode))
#define HAVE_vconduv4siv2di (TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V2DImode))
#define HAVE_vconduv2div2di (TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V2DImode))
#define HAVE_vconduv1tiv2di ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V2DImode)) && (TARGET_VXE))
#define HAVE_vconduv2dfv2di (TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V2DImode))
#define HAVE_vconduv4sfv2di ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V2DImode)) && (TARGET_VXE))
#define HAVE_vconduv1tfv2di ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V2DImode)) && (TARGET_VXE))
#define HAVE_vcondutfv2di ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V2DImode)) && (TARGET_VXE))
#define HAVE_vconduv16qiv2df (TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V2DFmode))
#define HAVE_vconduv8hiv2df (TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V2DFmode))
#define HAVE_vconduv4siv2df (TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V2DFmode))
#define HAVE_vconduv2div2df (TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V2DFmode))
#define HAVE_vconduv1tiv2df ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V2DFmode)) && (TARGET_VXE))
#define HAVE_vconduv2dfv2df (TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V2DFmode))
#define HAVE_vconduv4sfv2df ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V2DFmode)) && (TARGET_VXE))
#define HAVE_vconduv1tfv2df ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V2DFmode)) && (TARGET_VXE))
#define HAVE_vcondutfv2df ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V2DFmode)) && (TARGET_VXE))
#define HAVE_vconduv16qiv4sf ((TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vconduv8hiv4sf ((TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vconduv4siv4sf ((TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vconduv2div4sf ((TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vconduv1tiv4sf ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vconduv2dfv4sf ((TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vconduv4sfv4sf ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vconduv1tfv4sf ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vcondutfv4sf ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V4SFmode)) && (TARGET_VXE))
#define HAVE_vconduv16qiv1tf ((TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vconduv8hiv1tf ((TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vconduv4siv1tf ((TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vconduv2div1tf ((TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vconduv1tiv1tf ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vconduv2dfv1tf ((TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vconduv4sfv1tf ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vconduv1tfv1tf ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vcondutfv1tf ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (V1TFmode)) && (TARGET_VXE))
#define HAVE_vconduv16qitf ((TARGET_VX && GET_MODE_NUNITS (V16QImode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vconduv8hitf ((TARGET_VX && GET_MODE_NUNITS (V8HImode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vconduv4sitf ((TARGET_VX && GET_MODE_NUNITS (V4SImode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vconduv2ditf ((TARGET_VX && GET_MODE_NUNITS (V2DImode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vconduv1titf ((TARGET_VX && GET_MODE_NUNITS (V1TImode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vconduv2dftf ((TARGET_VX && GET_MODE_NUNITS (V2DFmode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vconduv4sftf ((TARGET_VX && GET_MODE_NUNITS (V4SFmode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vconduv1tftf ((TARGET_VX && GET_MODE_NUNITS (V1TFmode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vcondutftf ((TARGET_VX && GET_MODE_NUNITS (TFmode) == GET_MODE_NUNITS (TFmode)) && (TARGET_VXE))
#define HAVE_vcond_mask_v1qiv1qi (TARGET_VX)
#define HAVE_vcond_mask_v2qiv2qi (TARGET_VX)
#define HAVE_vcond_mask_v4qiv4qi (TARGET_VX)
#define HAVE_vcond_mask_v8qiv8qi (TARGET_VX)
#define HAVE_vcond_mask_v16qiv16qi (TARGET_VX)
#define HAVE_vcond_mask_v1hiv1hi (TARGET_VX)
#define HAVE_vcond_mask_v2hiv2hi (TARGET_VX)
#define HAVE_vcond_mask_v4hiv4hi (TARGET_VX)
#define HAVE_vcond_mask_v8hiv8hi (TARGET_VX)
#define HAVE_vcond_mask_v1siv1si (TARGET_VX)
#define HAVE_vcond_mask_v2siv2si (TARGET_VX)
#define HAVE_vcond_mask_v4siv4si (TARGET_VX)
#define HAVE_vcond_mask_v1div1di (TARGET_VX)
#define HAVE_vcond_mask_v2div2di (TARGET_VX)
#define HAVE_vcond_mask_v1sfv1si (TARGET_VX)
#define HAVE_vcond_mask_v2sfv2si (TARGET_VX)
#define HAVE_vcond_mask_v4sfv4si (TARGET_VX)
#define HAVE_vcond_mask_v1dfv1di (TARGET_VX)
#define HAVE_vcond_mask_v2dfv2di (TARGET_VX)
#define HAVE_eltswapv16qi (TARGET_VX)
#define HAVE_popcountv16qi2 (TARGET_VX)
#define HAVE_popcountv8hi2 (TARGET_VX)
#define HAVE_popcountv4si2 (TARGET_VX)
#define HAVE_popcountv2di2 (TARGET_VX)
#define HAVE_popcountv8hi2_vx (TARGET_VX && !TARGET_VXE)
#define HAVE_popcountv4si2_vx (TARGET_VX && !TARGET_VXE)
#define HAVE_popcountv2di2_vx (TARGET_VX && !TARGET_VXE)
#define HAVE_ashlv1qi3 (TARGET_VX)
#define HAVE_ashrv1qi3 (TARGET_VX)
#define HAVE_lshrv1qi3 (TARGET_VX)
#define HAVE_rotlv1qi3 (TARGET_VX)
#define HAVE_ashlv2qi3 (TARGET_VX)
#define HAVE_ashrv2qi3 (TARGET_VX)
#define HAVE_lshrv2qi3 (TARGET_VX)
#define HAVE_rotlv2qi3 (TARGET_VX)
#define HAVE_ashlv4qi3 (TARGET_VX)
#define HAVE_ashrv4qi3 (TARGET_VX)
#define HAVE_lshrv4qi3 (TARGET_VX)
#define HAVE_rotlv4qi3 (TARGET_VX)
#define HAVE_ashlv8qi3 (TARGET_VX)
#define HAVE_ashrv8qi3 (TARGET_VX)
#define HAVE_lshrv8qi3 (TARGET_VX)
#define HAVE_rotlv8qi3 (TARGET_VX)
#define HAVE_ashlv16qi3 (TARGET_VX)
#define HAVE_ashrv16qi3 (TARGET_VX)
#define HAVE_lshrv16qi3 (TARGET_VX)
#define HAVE_rotlv16qi3 (TARGET_VX)
#define HAVE_ashlv1hi3 (TARGET_VX)
#define HAVE_ashrv1hi3 (TARGET_VX)
#define HAVE_lshrv1hi3 (TARGET_VX)
#define HAVE_rotlv1hi3 (TARGET_VX)
#define HAVE_ashlv2hi3 (TARGET_VX)
#define HAVE_ashrv2hi3 (TARGET_VX)
#define HAVE_lshrv2hi3 (TARGET_VX)
#define HAVE_rotlv2hi3 (TARGET_VX)
#define HAVE_ashlv4hi3 (TARGET_VX)
#define HAVE_ashrv4hi3 (TARGET_VX)
#define HAVE_lshrv4hi3 (TARGET_VX)
#define HAVE_rotlv4hi3 (TARGET_VX)
#define HAVE_ashlv8hi3 (TARGET_VX)
#define HAVE_ashrv8hi3 (TARGET_VX)
#define HAVE_lshrv8hi3 (TARGET_VX)
#define HAVE_rotlv8hi3 (TARGET_VX)
#define HAVE_ashlv1si3 (TARGET_VX)
#define HAVE_ashrv1si3 (TARGET_VX)
#define HAVE_lshrv1si3 (TARGET_VX)
#define HAVE_rotlv1si3 (TARGET_VX)
#define HAVE_ashlv2si3 (TARGET_VX)
#define HAVE_ashrv2si3 (TARGET_VX)
#define HAVE_lshrv2si3 (TARGET_VX)
#define HAVE_rotlv2si3 (TARGET_VX)
#define HAVE_ashlv4si3 (TARGET_VX)
#define HAVE_ashrv4si3 (TARGET_VX)
#define HAVE_lshrv4si3 (TARGET_VX)
#define HAVE_rotlv4si3 (TARGET_VX)
#define HAVE_ashlv1di3 (TARGET_VX)
#define HAVE_ashrv1di3 (TARGET_VX)
#define HAVE_lshrv1di3 (TARGET_VX)
#define HAVE_rotlv1di3 (TARGET_VX)
#define HAVE_ashlv2di3 (TARGET_VX)
#define HAVE_ashrv2di3 (TARGET_VX)
#define HAVE_lshrv2di3 (TARGET_VX)
#define HAVE_rotlv2di3 (TARGET_VX)
#define HAVE_rotlv4si3_di (TARGET_VX)
#define HAVE_rotlv4sf3_di (TARGET_VX)
#define HAVE_vec_shr_v16qi (TARGET_VX)
#define HAVE_vec_shr_v8hi (TARGET_VX)
#define HAVE_vec_shr_v4si (TARGET_VX)
#define HAVE_vec_shr_v4sf (TARGET_VX)
#define HAVE_vec_shr_v2di (TARGET_VX)
#define HAVE_vec_shr_v2df (TARGET_VX)
#define HAVE_vec_shr_v1ti (TARGET_VX)
#define HAVE_vec_shr_v1tf (TARGET_VX)
#define HAVE_vec_shr_tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_widen_umult_lo_v1qi (TARGET_VX)
#define HAVE_vec_widen_umult_lo_v2qi (TARGET_VX)
#define HAVE_vec_widen_umult_lo_v4qi (TARGET_VX)
#define HAVE_vec_widen_umult_lo_v8qi (TARGET_VX)
#define HAVE_vec_widen_umult_lo_v16qi (TARGET_VX)
#define HAVE_vec_widen_umult_lo_v1hi (TARGET_VX)
#define HAVE_vec_widen_umult_lo_v2hi (TARGET_VX)
#define HAVE_vec_widen_umult_lo_v4hi (TARGET_VX)
#define HAVE_vec_widen_umult_lo_v8hi (TARGET_VX)
#define HAVE_vec_widen_umult_lo_v1si (TARGET_VX)
#define HAVE_vec_widen_umult_lo_v2si (TARGET_VX)
#define HAVE_vec_widen_umult_lo_v4si (TARGET_VX)
#define HAVE_vec_widen_umult_hi_v1qi (TARGET_VX)
#define HAVE_vec_widen_umult_hi_v2qi (TARGET_VX)
#define HAVE_vec_widen_umult_hi_v4qi (TARGET_VX)
#define HAVE_vec_widen_umult_hi_v8qi (TARGET_VX)
#define HAVE_vec_widen_umult_hi_v16qi (TARGET_VX)
#define HAVE_vec_widen_umult_hi_v1hi (TARGET_VX)
#define HAVE_vec_widen_umult_hi_v2hi (TARGET_VX)
#define HAVE_vec_widen_umult_hi_v4hi (TARGET_VX)
#define HAVE_vec_widen_umult_hi_v8hi (TARGET_VX)
#define HAVE_vec_widen_umult_hi_v1si (TARGET_VX)
#define HAVE_vec_widen_umult_hi_v2si (TARGET_VX)
#define HAVE_vec_widen_umult_hi_v4si (TARGET_VX)
#define HAVE_vec_widen_smult_lo_v1qi (TARGET_VX)
#define HAVE_vec_widen_smult_lo_v2qi (TARGET_VX)
#define HAVE_vec_widen_smult_lo_v4qi (TARGET_VX)
#define HAVE_vec_widen_smult_lo_v8qi (TARGET_VX)
#define HAVE_vec_widen_smult_lo_v16qi (TARGET_VX)
#define HAVE_vec_widen_smult_lo_v1hi (TARGET_VX)
#define HAVE_vec_widen_smult_lo_v2hi (TARGET_VX)
#define HAVE_vec_widen_smult_lo_v4hi (TARGET_VX)
#define HAVE_vec_widen_smult_lo_v8hi (TARGET_VX)
#define HAVE_vec_widen_smult_lo_v1si (TARGET_VX)
#define HAVE_vec_widen_smult_lo_v2si (TARGET_VX)
#define HAVE_vec_widen_smult_lo_v4si (TARGET_VX)
#define HAVE_vec_widen_smult_hi_v1qi (TARGET_VX)
#define HAVE_vec_widen_smult_hi_v2qi (TARGET_VX)
#define HAVE_vec_widen_smult_hi_v4qi (TARGET_VX)
#define HAVE_vec_widen_smult_hi_v8qi (TARGET_VX)
#define HAVE_vec_widen_smult_hi_v16qi (TARGET_VX)
#define HAVE_vec_widen_smult_hi_v1hi (TARGET_VX)
#define HAVE_vec_widen_smult_hi_v2hi (TARGET_VX)
#define HAVE_vec_widen_smult_hi_v4hi (TARGET_VX)
#define HAVE_vec_widen_smult_hi_v8hi (TARGET_VX)
#define HAVE_vec_widen_smult_hi_v1si (TARGET_VX)
#define HAVE_vec_widen_smult_hi_v2si (TARGET_VX)
#define HAVE_vec_widen_smult_hi_v4si (TARGET_VX)
#define HAVE_addtf3 (HAVE_TF (addtf3))
#define HAVE_subtf3 (HAVE_TF (subtf3))
#define HAVE_multf3 (HAVE_TF (multf3))
#define HAVE_divtf3 (HAVE_TF (divtf3))
#define HAVE_sqrttf2 (HAVE_TF (sqrttf2))
#define HAVE_negtf2 (HAVE_TF (negtf2))
#define HAVE_abstf2 (HAVE_TF (abstf2))
#define HAVE_smaxv4sf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_smaxv2df3 (TARGET_VX)
#define HAVE_smaxv1tf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_smaxtf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_sminv4sf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_sminv2df3 (TARGET_VX)
#define HAVE_sminv1tf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_smintf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_copysignv1sf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_copysignv2sf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_copysignv4sf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_copysignv1df3 (TARGET_VX)
#define HAVE_copysignv2df3 (TARGET_VX)
#define HAVE_copysignv1tf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_copysigntf3 ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpv16qiv16qi (TARGET_VX)
#define HAVE_vec_cmpv8hiv8hi (TARGET_VX)
#define HAVE_vec_cmpv4siv4si (TARGET_VX)
#define HAVE_vec_cmpv2div2di (TARGET_VX)
#define HAVE_vec_cmpv1tiv1ti ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpv2dfv2di (TARGET_VX)
#define HAVE_vec_cmpv4sfv4si ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpv1tfv1ti ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmptfv1ti ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpuv16qiv16qi (TARGET_VX)
#define HAVE_vec_cmpuv8hiv8hi (TARGET_VX)
#define HAVE_vec_cmpuv4siv4si (TARGET_VX)
#define HAVE_vec_cmpuv2div2di (TARGET_VX)
#define HAVE_vec_cmpltv1sf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpltv2sf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpltv4sf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpltv1df_quiet_nocc (TARGET_VX)
#define HAVE_vec_cmpltv2df_quiet_nocc (TARGET_VX)
#define HAVE_vec_cmpltv1tf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmplttf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmplev1sf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmplev2sf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmplev4sf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmplev1df_quiet_nocc (TARGET_VX)
#define HAVE_vec_cmplev2df_quiet_nocc (TARGET_VX)
#define HAVE_vec_cmplev1tf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpletf_quiet_nocc ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpungtv1sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpungtv2sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpungtv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpungtv1df (TARGET_VX)
#define HAVE_vec_cmpungtv2df (TARGET_VX)
#define HAVE_vec_cmpungtv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpungttf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpungev1sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpungev2sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpungev4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpungev1df (TARGET_VX)
#define HAVE_vec_cmpungev2df (TARGET_VX)
#define HAVE_vec_cmpungev1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpungetf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpuneqv1sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpuneqv2sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpuneqv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpuneqv1df (TARGET_VX)
#define HAVE_vec_cmpuneqv2df (TARGET_VX)
#define HAVE_vec_cmpuneqv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpuneqtf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpltgtv1sf (TARGET_VXE)
#define HAVE_vec_cmpltgtv2sf (TARGET_VXE)
#define HAVE_vec_cmpltgtv4sf (TARGET_VXE)
#define HAVE_vec_cmpltgtv1df (TARGET_VXE)
#define HAVE_vec_cmpltgtv2df (TARGET_VXE)
#define HAVE_vec_cmpltgtv1tf (TARGET_VXE)
#define HAVE_vec_cmpltgttf (TARGET_VXE)
#define HAVE_vec_cmporderedv1sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmporderedv2sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmporderedv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmporderedv1df (TARGET_VX)
#define HAVE_vec_cmporderedv2df (TARGET_VX)
#define HAVE_vec_cmporderedv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmporderedtf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpunorderedv1sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpunorderedv2sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpunorderedv4sf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpunorderedv1df (TARGET_VX)
#define HAVE_vec_cmpunorderedv2df (TARGET_VX)
#define HAVE_vec_cmpunorderedv1tf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpunorderedtf ((TARGET_VX) && (TARGET_VXE))
#define HAVE_vec_cmpungt (TARGET_VX)
#define HAVE_vec_cmpunge (TARGET_VX)
#define HAVE_vec_cmpuneq (TARGET_VX)
#define HAVE_vec_cmpltgt (TARGET_VX)
#define HAVE_vec_cmpordered (TARGET_VX)
#define HAVE_vec_cmpunordered (TARGET_VX)
#define HAVE_vec_unpacks_lo_v4sf (TARGET_VX)
#define HAVE_vec_unpacks_hi_v4sf (TARGET_VX)
#define HAVE_vec_unpacks_lo_v2df (TARGET_VXE)
#define HAVE_vec_unpacks_hi_v2df (TARGET_VXE)
#define HAVE_vec_pack_trunc_v2df (TARGET_VX)
#define HAVE_floatditf2_vr (TARGET_VXE)
#define HAVE_floatsitf2_vr (TARGET_VXE)
#define HAVE_floatditf2 (HAVE_TF (floatditf2))
#define HAVE_floatsitf2 (HAVE_TF (floatsitf2))
#define HAVE_floatunsditf2_vr ((TARGET_VXE) && (TARGET_ZARCH))
#define HAVE_floatunssitf2_vr (TARGET_VXE)
#define HAVE_floatunsditf2 ((HAVE_TF (floatunsditf2)) && (TARGET_ZARCH))
#define HAVE_floatunssitf2 (HAVE_TF (floatunssitf2))
#define HAVE_fix_trunctfdi2_vr ((TARGET_VXE) && (TARGET_ZARCH))
#define HAVE_fix_trunctfsi2_vr (TARGET_VXE)
#define HAVE_fix_trunctfdi2 ((HAVE_TF (fix_trunctfdi2)) && (TARGET_ZARCH))
#define HAVE_fix_trunctfsi2 (HAVE_TF (fix_trunctfsi2))
#define HAVE_fixuns_trunctfdi2_vr ((TARGET_VXE) && (TARGET_ZARCH))
#define HAVE_fixuns_trunctfsi2_vr (TARGET_VXE)
#define HAVE_fixuns_trunctfdi2 ((HAVE_TF (fixuns_trunctfdi2)) && (TARGET_ZARCH))
#define HAVE_fixuns_trunctfsi2 (HAVE_TF (fixuns_trunctfsi2))
#define HAVE_floortf2 (HAVE_TF (floortf2))
#define HAVE_btrunctf2 (HAVE_TF (btrunctf2))
#define HAVE_roundtf2 (HAVE_TF (roundtf2))
#define HAVE_ceiltf2 (HAVE_TF (ceiltf2))
#define HAVE_nearbyinttf2 (HAVE_TF (nearbyinttf2))
#define HAVE_rinttf2 (HAVE_TF (rinttf2))
#define HAVE_trunctfdf2_vr (TARGET_VXE)
#define HAVE_trunctfdf2 (HAVE_TF (trunctfdf2))
#define HAVE_trunctfsf2_vr (TARGET_VXE)
#define HAVE_trunctfsf2 (HAVE_TF (trunctfsf2))
#define HAVE_trunctftd2_vr (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) > GET_MODE_SIZE (TDmode) \
   && TARGET_VXE)
#define HAVE_trunctfdd2_vr (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) > GET_MODE_SIZE (DDmode) \
   && TARGET_VXE)
#define HAVE_trunctfsd2_vr (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) > GET_MODE_SIZE (SDmode) \
   && TARGET_VXE)
#define HAVE_trunctftd2 (HAVE_TF (trunctftd2))
#define HAVE_trunctfdd2 (HAVE_TF (trunctfdd2))
#define HAVE_trunctfsd2 (HAVE_TF (trunctfsd2))
#define HAVE_trunctdtf2_vr (TARGET_HARD_DFP && TARGET_VXE)
#define HAVE_trunctdtf2 (HAVE_TF (trunctdtf2))
#define HAVE_extenddftf2 (HAVE_TF (extenddftf2))
#define HAVE_extendsftf2_vr (TARGET_VXE)
#define HAVE_extendsftf2 (HAVE_TF (extendsftf2))
#define HAVE_extendtdtf2_vr (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) < GET_MODE_SIZE (TFmode) \
   && TARGET_VXE)
#define HAVE_extendddtf2_vr (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) < GET_MODE_SIZE (TFmode) \
   && TARGET_VXE)
#define HAVE_extendsdtf2_vr (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) < GET_MODE_SIZE (TFmode) \
   && TARGET_VXE)
#define HAVE_extendtdtf2 (HAVE_TF (extendtdtf2))
#define HAVE_extendddtf2 (HAVE_TF (extendddtf2))
#define HAVE_extendsdtf2 (HAVE_TF (extendsdtf2))
#define HAVE_extendtftd2_vr (TARGET_HARD_DFP && TARGET_VXE)
#define HAVE_extendtftd2 (HAVE_TF (extendtftd2))
#define HAVE_signbittf2_vr (TARGET_VXE)
#define HAVE_signbittf2 (HAVE_TF (signbittf2))
#define HAVE_isinftf2_vr (TARGET_VXE)
#define HAVE_isinftf2 (HAVE_TF (isinftf2))
#define HAVE_bswapv8hi (TARGET_VX)
#define HAVE_bswapv4si (TARGET_VX)
#define HAVE_bswapv4sf (TARGET_VX)
#define HAVE_bswapv2di (TARGET_VX)
#define HAVE_bswapv2df (TARGET_VX)
#define HAVE_bswapv1ti (TARGET_VX)
#define HAVE_bswapv1tf (TARGET_VX)
#define HAVE_bswapti (TARGET_VX)
#define HAVE_bswaptf (TARGET_VX)
#define HAVE_len_load_v16qi (TARGET_VX && TARGET_64BIT)
#define HAVE_len_store_v16qi (TARGET_VX && TARGET_64BIT)
#define HAVE_reloadtidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadtisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloaddisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadsidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadhidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadhisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadqidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadqisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadtfdi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadtfsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadfprx2di_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadfprx2si_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddfdi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloaddfsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadsfdi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsfsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadtddi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadtdsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddddi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadddsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadsddi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsdsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1qidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1qisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv2qidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv2qisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv4qidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv4qisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv8qidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv8qisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv16qidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv16qisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1hidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1hisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv2hidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv2hisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv4hidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv4hisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv8hidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv8hisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1sidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1sisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv2sidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv2sisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv4sidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv4sisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1didi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1disi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv2didi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv2disi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1sfdi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1sfsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv2sfdi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv2sfsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv4sfdi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv4sfsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1tidi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1tisi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1dfdi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1dfsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv2dfdi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv2dfsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1tfdi_tomem_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1tfsi_tomem_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadtidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadtisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloaddisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadsidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadhidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadhisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadqidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadqisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadtfdi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadtfsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadfprx2di_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadfprx2si_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddfdi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloaddfsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadsfdi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsfsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadtddi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadtdsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddddi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadddsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadsddi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsdsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1qidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1qisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv2qidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv2qisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv4qidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv4qisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv8qidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv8qisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv16qidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv16qisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1hidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1hisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv2hidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv2hisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv4hidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv4hisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv8hidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv8hisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1sidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1sisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv2sidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv2sisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv4sidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv4sisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1didi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1disi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv2didi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv2disi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1sfdi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1sfsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv2sfdi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv2sfsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv4sfdi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv4sfsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1tidi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1tisi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1dfdi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1dfsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv2dfdi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv2dfsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloadv1tfdi_toreg_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadv1tfsi_toreg_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddi_larl_odd_addend_z10 ((TARGET_Z10) && (TARGET_64BIT))
#define HAVE_reloadsi_larl_odd_addend_z10 ((TARGET_Z10) && (!TARGET_64BIT))
#define HAVE_reloaddi_plus (TARGET_64BIT)
#define HAVE_reloadsi_plus (!TARGET_64BIT)
#define HAVE_reloaddi_la_in (TARGET_64BIT)
#define HAVE_reloadsi_la_in (!TARGET_64BIT)
#define HAVE_reloaddi_la_out (TARGET_64BIT)
#define HAVE_reloadsi_la_out (!TARGET_64BIT)
#define HAVE_reloaddi_PIC_addr (TARGET_64BIT)
#define HAVE_reloadsi_PIC_addr (!TARGET_64BIT)
#define HAVE_movdi 1
#define HAVE_movsi 1
#define HAVE_movhi 1
#define HAVE_movqi 1
#define HAVE_movtf_fpr (!TARGET_VXE)
#define HAVE_movfprx2 (TARGET_VXE)
#define HAVE_movtd 1
#define HAVE_movdf 1
#define HAVE_movdd 1
#define HAVE_load_multiple (reload_completed)
#define HAVE_store_multiple (reload_completed)
#define HAVE_strlendi (TARGET_64BIT)
#define HAVE_strlensi (!TARGET_64BIT)
#define HAVE_strlen_srstdi (TARGET_64BIT)
#define HAVE_strlen_srstsi (!TARGET_64BIT)
#define HAVE_cmpstrsi 1
#define HAVE_movstr 1
#define HAVE_movstrdi (TARGET_64BIT)
#define HAVE_movstrsi (!TARGET_64BIT)
#define HAVE_cpymemdi (TARGET_ZARCH)
#define HAVE_cpymemsi 1
#define HAVE_cpymem_short 1
#define HAVE_cpymem_long 1
#define HAVE_movmemdi (TARGET_ZARCH)
#define HAVE_movmemsi 1
#define HAVE_mvcrl (TARGET_Z15)
#define HAVE_signbittf2_fpr ((TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_signbitfprx22 ((TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_signbitdf2 (TARGET_HARD_FLOAT)
#define HAVE_signbitsf2 (TARGET_HARD_FLOAT)
#define HAVE_signbittd2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_signbitdd2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_signbitsd2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_isinftf2_fpr ((TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_isinffprx22 ((TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_isinfdf2 (TARGET_HARD_FLOAT)
#define HAVE_isinfsf2 (TARGET_HARD_FLOAT)
#define HAVE_isinftd2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_isinfdd2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_isinfsd2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_setmemdi (TARGET_ZARCH)
#define HAVE_setmemsi 1
#define HAVE_clrmem_short 1
#define HAVE_setmem_long_di (TARGET_64BIT)
#define HAVE_setmem_long_si (!TARGET_64BIT)
#define HAVE_cmpmemsi 1
#define HAVE_cmpmem_short 1
#define HAVE_cmpmem_long 1
#define HAVE_extzv (TARGET_Z10)
#define HAVE_insv 1
#define HAVE_extendsidi2 1
#define HAVE_extendhidi2 1
#define HAVE_extendqidi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendqisi2 1
#define HAVE_zero_extendsidi2 1
#define HAVE_zero_extendhidi2 1
#define HAVE_zero_extendqidi2 1
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendqihi2 (TARGET_ZARCH && !TARGET_EXTIMM)
#define HAVE_fixuns_trunctfdi2_fpr ((TARGET_HARD_FLOAT) && (((TARGET_ZARCH) && (!TARGET_VXE)) && (TARGET_ZARCH)))
#define HAVE_fixuns_trunctfsi2_fpr ((TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_fixuns_truncfprx2di2 ((TARGET_HARD_FLOAT) && (((TARGET_ZARCH) && (TARGET_VXE)) && (TARGET_ZARCH)))
#define HAVE_fixuns_truncfprx2si2 ((TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_fixuns_truncdfdi2 ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fixuns_truncdfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fixuns_truncsfdi2 ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fixuns_truncsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fixuns_trunctddi2 ((TARGET_HARD_FLOAT) && (((TARGET_ZARCH) && (TARGET_HARD_DFP)) && (TARGET_ZARCH)))
#define HAVE_fixuns_trunctdsi2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_fixuns_truncdddi2 ((TARGET_HARD_FLOAT) && (((TARGET_ZARCH) && (TARGET_HARD_DFP)) && (TARGET_ZARCH)))
#define HAVE_fixuns_truncddsi2 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_fixuns_trunctfdi2_emu ((!TARGET_Z196 && TARGET_HARD_FLOAT) && (((TARGET_ZARCH) && (!TARGET_VXE)) && (TARGET_ZARCH)))
#define HAVE_fixuns_trunctfsi2_emu ((!TARGET_Z196 && TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_fixuns_truncfprx2di2_emu ((!TARGET_Z196 && TARGET_HARD_FLOAT) && (((TARGET_ZARCH) && (TARGET_VXE)) && (TARGET_ZARCH)))
#define HAVE_fixuns_truncfprx2si2_emu ((!TARGET_Z196 && TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_fixuns_truncdfdi2_emu ((!TARGET_Z196 && TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fixuns_truncdfsi2_emu (!TARGET_Z196 && TARGET_HARD_FLOAT)
#define HAVE_fixuns_truncsfdi2_emu ((!TARGET_Z196 && TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fixuns_truncsfsi2_emu (!TARGET_Z196 && TARGET_HARD_FLOAT)
#define HAVE_fixuns_truncdddi2_emu (!TARGET_Z196 && TARGET_HARD_DFP)
#define HAVE_fixuns_trunctddi2_emu (!TARGET_Z196 && TARGET_HARD_DFP)
#define HAVE_fixuns_trunctdsi2_emu (!TARGET_Z196 && TARGET_HARD_DFP)
#define HAVE_fixuns_truncddsi2_emu (!TARGET_Z196 && TARGET_HARD_DFP)
#define HAVE_fix_truncdfdi2 ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fix_truncdfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fix_truncsfdi2 ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fix_truncsfsi2 (TARGET_HARD_FLOAT)
#define HAVE_fix_trunctfdi2_bfp ((TARGET_HARD_FLOAT) && ((((TARGET_ZARCH) && (!TARGET_VXE)) && (TARGET_ZARCH)) && (TARGET_ZARCH)))
#define HAVE_fix_trunctfsi2_bfp ((TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_fix_truncfprx2di2_bfp ((TARGET_HARD_FLOAT) && ((((TARGET_ZARCH) && (TARGET_VXE)) && (TARGET_ZARCH)) && (TARGET_ZARCH)))
#define HAVE_fix_truncfprx2si2_bfp ((TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_fix_truncdfdi2_bfp ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fix_truncdfsi2_bfp (TARGET_HARD_FLOAT)
#define HAVE_fix_truncsfdi2_bfp ((TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_fix_truncsfsi2_bfp (TARGET_HARD_FLOAT)
#define HAVE_fix_trunctddi2 (TARGET_ZARCH && TARGET_HARD_DFP)
#define HAVE_fix_truncdddi2 (TARGET_ZARCH && TARGET_HARD_DFP)
#define HAVE_fix_trunctfdi2_fpr ((TARGET_HARD_FLOAT && !TARGET_VXE) && (TARGET_ZARCH))
#define HAVE_fix_trunctfsi2_fpr (TARGET_HARD_FLOAT && !TARGET_VXE)
#define HAVE_floatunsditf2_fpr ((TARGET_Z196 && TARGET_HARD_FLOAT) && ((!TARGET_VXE) && (TARGET_ZARCH)))
#define HAVE_floatunssitf2_fpr ((TARGET_Z196 && TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_floatunsdifprx22 ((TARGET_Z196 && TARGET_HARD_FLOAT) && ((TARGET_VXE) && (TARGET_ZARCH)))
#define HAVE_floatunssifprx22 ((TARGET_Z196 && TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_floatunsdidf2 ((TARGET_Z196 && TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_floatunssidf2 (TARGET_Z196 && TARGET_HARD_FLOAT)
#define HAVE_floatunsdisf2 ((TARGET_Z196 && TARGET_HARD_FLOAT) && (TARGET_ZARCH))
#define HAVE_floatunssisf2 (TARGET_Z196 && TARGET_HARD_FLOAT)
#define HAVE_floatunsditd2 ((TARGET_Z196 && TARGET_HARD_FLOAT) && ((TARGET_HARD_DFP) && (TARGET_ZARCH)))
#define HAVE_floatunssitd2 ((TARGET_Z196 && TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_floatunsdidd2 ((TARGET_Z196 && TARGET_HARD_FLOAT) && ((TARGET_HARD_DFP) && (TARGET_ZARCH)))
#define HAVE_floatunssidd2 ((TARGET_Z196 && TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_trunctddd2 (TARGET_HARD_DFP)
#define HAVE_trunctdsd2 (TARGET_HARD_DFP)
#define HAVE_extenddftf2_fpr ((TARGET_HARD_FLOAT \
   && GET_MODE_SIZE (TFmode) > GET_MODE_SIZE (DFmode)) && (!TARGET_VXE))
#define HAVE_extenddffprx22 ((TARGET_HARD_FLOAT \
   && GET_MODE_SIZE (FPRX2mode) > GET_MODE_SIZE (DFmode)) && (TARGET_VXE))
#define HAVE_extenddfdf2 (TARGET_HARD_FLOAT \
   && GET_MODE_SIZE (DFmode) > GET_MODE_SIZE (DFmode))
#define HAVE_extenddfsf2 (TARGET_HARD_FLOAT \
   && GET_MODE_SIZE (SFmode) > GET_MODE_SIZE (DFmode))
#define HAVE_extendsftf2_fpr ((TARGET_HARD_FLOAT \
   && GET_MODE_SIZE (TFmode) > GET_MODE_SIZE (SFmode)) && (!TARGET_VXE))
#define HAVE_extendsffprx22 ((TARGET_HARD_FLOAT \
   && GET_MODE_SIZE (FPRX2mode) > GET_MODE_SIZE (SFmode)) && (TARGET_VXE))
#define HAVE_extendsfdf2 (TARGET_HARD_FLOAT \
   && GET_MODE_SIZE (DFmode) > GET_MODE_SIZE (SFmode))
#define HAVE_extendsfsf2 (TARGET_HARD_FLOAT \
   && GET_MODE_SIZE (SFmode) > GET_MODE_SIZE (SFmode))
#define HAVE_extendsdtd2 (TARGET_HARD_DFP)
#define HAVE_trunctftd2_fpr ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) > GET_MODE_SIZE (TDmode)) && (!TARGET_VXE))
#define HAVE_truncfprx2td2 ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (FPRX2mode) > GET_MODE_SIZE (TDmode)) && (TARGET_VXE))
#define HAVE_truncdftd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DFmode) > GET_MODE_SIZE (TDmode))
#define HAVE_truncsftd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SFmode) > GET_MODE_SIZE (TDmode))
#define HAVE_trunctfdd2_fpr ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) > GET_MODE_SIZE (DDmode)) && (!TARGET_VXE))
#define HAVE_truncfprx2dd2 ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (FPRX2mode) > GET_MODE_SIZE (DDmode)) && (TARGET_VXE))
#define HAVE_truncdfdd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DFmode) > GET_MODE_SIZE (DDmode))
#define HAVE_truncsfdd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SFmode) > GET_MODE_SIZE (DDmode))
#define HAVE_trunctfsd2_fpr ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) > GET_MODE_SIZE (SDmode)) && (!TARGET_VXE))
#define HAVE_truncfprx2sd2 ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (FPRX2mode) > GET_MODE_SIZE (SDmode)) && (TARGET_VXE))
#define HAVE_truncdfsd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DFmode) > GET_MODE_SIZE (SDmode))
#define HAVE_truncsfsd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SFmode) > GET_MODE_SIZE (SDmode))
#define HAVE_trunctdtf2_fpr ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) >= GET_MODE_SIZE (TFmode)) && (!TARGET_VXE))
#define HAVE_trunctdfprx22 ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) >= GET_MODE_SIZE (FPRX2mode)) && (TARGET_VXE))
#define HAVE_trunctddf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) >= GET_MODE_SIZE (DFmode))
#define HAVE_trunctdsf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) >= GET_MODE_SIZE (SFmode))
#define HAVE_truncddtf2_fpr ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) >= GET_MODE_SIZE (TFmode)) && (!TARGET_VXE))
#define HAVE_truncddfprx22 ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) >= GET_MODE_SIZE (FPRX2mode)) && (TARGET_VXE))
#define HAVE_truncdddf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) >= GET_MODE_SIZE (DFmode))
#define HAVE_truncddsf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) >= GET_MODE_SIZE (SFmode))
#define HAVE_truncsdtf2_fpr ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) >= GET_MODE_SIZE (TFmode)) && (!TARGET_VXE))
#define HAVE_truncsdfprx22 ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) >= GET_MODE_SIZE (FPRX2mode)) && (TARGET_VXE))
#define HAVE_truncsddf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) >= GET_MODE_SIZE (DFmode))
#define HAVE_truncsdsf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) >= GET_MODE_SIZE (SFmode))
#define HAVE_extendtftd2_fpr ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) <= GET_MODE_SIZE (TDmode)) && (!TARGET_VXE))
#define HAVE_extendfprx2td2 ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (FPRX2mode) <= GET_MODE_SIZE (TDmode)) && (TARGET_VXE))
#define HAVE_extenddftd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DFmode) <= GET_MODE_SIZE (TDmode))
#define HAVE_extendsftd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SFmode) <= GET_MODE_SIZE (TDmode))
#define HAVE_extendtfdd2_fpr ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) <= GET_MODE_SIZE (DDmode)) && (!TARGET_VXE))
#define HAVE_extendfprx2dd2 ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (FPRX2mode) <= GET_MODE_SIZE (DDmode)) && (TARGET_VXE))
#define HAVE_extenddfdd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DFmode) <= GET_MODE_SIZE (DDmode))
#define HAVE_extendsfdd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SFmode) <= GET_MODE_SIZE (DDmode))
#define HAVE_extendtfsd2_fpr ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (TFmode) <= GET_MODE_SIZE (SDmode)) && (!TARGET_VXE))
#define HAVE_extendfprx2sd2 ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (FPRX2mode) <= GET_MODE_SIZE (SDmode)) && (TARGET_VXE))
#define HAVE_extenddfsd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DFmode) <= GET_MODE_SIZE (SDmode))
#define HAVE_extendsfsd2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SFmode) <= GET_MODE_SIZE (SDmode))
#define HAVE_extendtdtf2_fpr ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) < GET_MODE_SIZE (TFmode)) && (!TARGET_VXE))
#define HAVE_extendtdfprx22 ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) < GET_MODE_SIZE (FPRX2mode)) && (TARGET_VXE))
#define HAVE_extendtddf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) < GET_MODE_SIZE (DFmode))
#define HAVE_extendtdsf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (TDmode) < GET_MODE_SIZE (SFmode))
#define HAVE_extendddtf2_fpr ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) < GET_MODE_SIZE (TFmode)) && (!TARGET_VXE))
#define HAVE_extendddfprx22 ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) < GET_MODE_SIZE (FPRX2mode)) && (TARGET_VXE))
#define HAVE_extenddddf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) < GET_MODE_SIZE (DFmode))
#define HAVE_extendddsf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (DDmode) < GET_MODE_SIZE (SFmode))
#define HAVE_extendsdtf2_fpr ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) < GET_MODE_SIZE (TFmode)) && (!TARGET_VXE))
#define HAVE_extendsdfprx22 ((TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) < GET_MODE_SIZE (FPRX2mode)) && (TARGET_VXE))
#define HAVE_extendsddf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) < GET_MODE_SIZE (DFmode))
#define HAVE_extendsdsf2 (TARGET_HARD_DFP \
   && GET_MODE_SIZE (SDmode) < GET_MODE_SIZE (SFmode))
#define HAVE_addti3 (TARGET_ZARCH)
#define HAVE_adddi3 1
#define HAVE_addsi3 1
#define HAVE_addvdi4 (TARGET_ZARCH)
#define HAVE_addvsi4 1
#define HAVE_addptrdi3 (TARGET_64BIT)
#define HAVE_addptrsi3 (!TARGET_64BIT)
#define HAVE_subti3 (TARGET_ZARCH)
#define HAVE_subdi3 1
#define HAVE_subsi3 1
#define HAVE_subvdi4 (TARGET_ZARCH)
#define HAVE_subvsi4 1
#define HAVE_adddicc (TARGET_ZARCH)
#define HAVE_addsicc 1
#define HAVE_cstoredi4 (TARGET_ZARCH)
#define HAVE_cstoresi4 1
#define HAVE_cstorecc4 1
#define HAVE_movdicc ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_movsicc (TARGET_Z196)
#define HAVE_movhicc (TARGET_Z196)
#define HAVE_movqicc (TARGET_Z196)
#define HAVE_muldi3 (TARGET_ZARCH)
#define HAVE_mulsi3 1
#define HAVE_mulvdi4 ((TARGET_Z14) && (TARGET_ZARCH))
#define HAVE_mulvsi4 (TARGET_Z14)
#define HAVE_divmoddi4 (TARGET_ZARCH)
#define HAVE_udivmoddi4 (TARGET_ZARCH)
#define HAVE_divmodsi4 (!TARGET_ZARCH)
#define HAVE_udivmodsi4 (!TARGET_ZARCH)
#define HAVE_anddi3 (TARGET_ZARCH)
#define HAVE_andsi3 1
#define HAVE_andhi3 1
#define HAVE_andqi3 1
#define HAVE_iordi3 (TARGET_ZARCH)
#define HAVE_iorsi3 1
#define HAVE_iorhi3 1
#define HAVE_iorqi3 1
#define HAVE_xordi3 (TARGET_ZARCH)
#define HAVE_xorsi3 1
#define HAVE_xorhi3 1
#define HAVE_xorqi3 1
#define HAVE_negdi2 1
#define HAVE_negsi2 1
#define HAVE_negtf2_fpr ((TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_negfprx22 ((TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_negdf2 (TARGET_HARD_FLOAT)
#define HAVE_negsf2 (TARGET_HARD_FLOAT)
#define HAVE_abstf2_fpr ((TARGET_HARD_FLOAT) && (!TARGET_VXE))
#define HAVE_absfprx22 ((TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_absdf2 (TARGET_HARD_FLOAT)
#define HAVE_abssf2 (TARGET_HARD_FLOAT)
#define HAVE_one_cmpldi2 (TARGET_ZARCH)
#define HAVE_one_cmplsi2 1
#define HAVE_one_cmplhi2 1
#define HAVE_one_cmplqi2 1
#define HAVE_clzdi2 (TARGET_EXTIMM && TARGET_ZARCH)
#define HAVE_rotldi3 (TARGET_ZARCH)
#define HAVE_rotlsi3 1
#define HAVE_ashldi3 1
#define HAVE_lshrdi3 1
#define HAVE_ashlsi3 1
#define HAVE_lshrsi3 1
#define HAVE_ashrdi3 1
#define HAVE_ashrsi3 1
#define HAVE_cbranchdi4 (TARGET_ZARCH)
#define HAVE_cbranchsi4 1
#define HAVE_cbranchtf4 (TARGET_HARD_FLOAT)
#define HAVE_cbranchfprx24 ((TARGET_HARD_FLOAT) && (TARGET_VXE))
#define HAVE_cbranchdf4 (TARGET_HARD_FLOAT)
#define HAVE_cbranchsf4 (TARGET_HARD_FLOAT)
#define HAVE_cbranchtd4 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_cbranchdd4 ((TARGET_HARD_FLOAT) && (TARGET_HARD_DFP))
#define HAVE_cbranchcc4 1
#define HAVE_ctrapdi4 (TARGET_ZARCH)
#define HAVE_ctrapsi4 1
#define HAVE_ctraptf4 (!TARGET_VXE)
#define HAVE_ctrapfprx24 (TARGET_VXE)
#define HAVE_ctrapdf4 1
#define HAVE_ctrapsf4 1
#define HAVE_ctraptd4 (TARGET_HARD_DFP)
#define HAVE_ctrapdd4 (TARGET_HARD_DFP)
#define HAVE_doloop_end 1
#define HAVE_jump 1
#define HAVE_indirect_jump 1
#define HAVE_casesi_jump 1
#define HAVE_casesi 1
#define HAVE_untyped_call 1
#define HAVE_sibcall 1
#define HAVE_sibcall_value 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_get_thread_pointerdi (TARGET_64BIT)
#define HAVE_get_thread_pointersi (!TARGET_64BIT)
#define HAVE_set_thread_pointerdi (TARGET_64BIT)
#define HAVE_set_thread_pointersi (!TARGET_64BIT)
#define HAVE_mem_thread_fence 1
#define HAVE_atomic_loadti (TARGET_ZARCH)
#define HAVE_atomic_loaddi 1
#define HAVE_atomic_loadsi 1
#define HAVE_atomic_loadhi 1
#define HAVE_atomic_loadqi 1
#define HAVE_atomic_storeti (TARGET_ZARCH)
#define HAVE_atomic_storedi 1
#define HAVE_atomic_storesi 1
#define HAVE_atomic_storehi 1
#define HAVE_atomic_storeqi 1
#define HAVE_atomic_compare_and_swapti (TARGET_ZARCH)
#define HAVE_atomic_compare_and_swapdi 1
#define HAVE_atomic_compare_and_swapsi 1
#define HAVE_atomic_compare_and_swaphi 1
#define HAVE_atomic_compare_and_swapqi 1
#define HAVE_atomic_compare_and_swapti_internal ((GET_MODE (operands[4]) == CCZmode \
   || GET_MODE (operands[4]) == CCZ1mode) && (TARGET_ZARCH))
#define HAVE_atomic_compare_and_swapdi_internal (GET_MODE (operands[4]) == CCZmode \
   || GET_MODE (operands[4]) == CCZ1mode)
#define HAVE_atomic_compare_and_swapsi_internal (GET_MODE (operands[4]) == CCZmode \
   || GET_MODE (operands[4]) == CCZ1mode)
#define HAVE_atomic_fetch_anddi ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_ordi ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_xordi ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_adddi ((TARGET_Z196) && (TARGET_ZARCH))
#define HAVE_atomic_fetch_andsi (TARGET_Z196)
#define HAVE_atomic_fetch_orsi (TARGET_Z196)
#define HAVE_atomic_fetch_xorsi (TARGET_Z196)
#define HAVE_atomic_fetch_addsi (TARGET_Z196)
#define HAVE_atomic_andhi 1
#define HAVE_atomic_orhi 1
#define HAVE_atomic_xorhi 1
#define HAVE_atomic_addhi 1
#define HAVE_atomic_subhi 1
#define HAVE_atomic_nandhi 1
#define HAVE_atomic_andqi 1
#define HAVE_atomic_orqi 1
#define HAVE_atomic_xorqi 1
#define HAVE_atomic_addqi 1
#define HAVE_atomic_subqi 1
#define HAVE_atomic_nandqi 1
#define HAVE_atomic_fetch_andhi 1
#define HAVE_atomic_fetch_orhi 1
#define HAVE_atomic_fetch_xorhi 1
#define HAVE_atomic_fetch_addhi 1
#define HAVE_atomic_fetch_subhi 1
#define HAVE_atomic_fetch_nandhi 1
#define HAVE_atomic_fetch_andqi 1
#define HAVE_atomic_fetch_orqi 1
#define HAVE_atomic_fetch_xorqi 1
#define HAVE_atomic_fetch_addqi 1
#define HAVE_atomic_fetch_subqi 1
#define HAVE_atomic_fetch_nandqi 1
#define HAVE_atomic_and_fetchhi 1
#define HAVE_atomic_or_fetchhi 1
#define HAVE_atomic_xor_fetchhi 1
#define HAVE_atomic_add_fetchhi 1
#define HAVE_atomic_sub_fetchhi 1
#define HAVE_atomic_nand_fetchhi 1
#define HAVE_atomic_and_fetchqi 1
#define HAVE_atomic_or_fetchqi 1
#define HAVE_atomic_xor_fetchqi 1
#define HAVE_atomic_add_fetchqi 1
#define HAVE_atomic_sub_fetchqi 1
#define HAVE_atomic_nand_fetchqi 1
#define HAVE_atomic_exchangeti (TARGET_ZARCH)
#define HAVE_atomic_exchangedi 1
#define HAVE_atomic_exchangesi 1
#define HAVE_atomic_exchangehi 1
#define HAVE_atomic_exchangeqi 1
#define HAVE_allocate_stack (TARGET_BACKCHAIN)
#define HAVE_probe_stack2di (TARGET_ZARCH)
#define HAVE_probe_stack2si (!TARGET_ZARCH)
#define HAVE_probe_stack 1
#define HAVE_builtin_setjmp_receiver (flag_pic)
#define HAVE_save_stack_function 1
#define HAVE_restore_stack_function 1
#define HAVE_restore_stack_block (TARGET_BACKCHAIN)
#define HAVE_save_stack_nonlocal 1
#define HAVE_restore_stack_nonlocal 1
#define HAVE_exception_receiver 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_return_use 1
#define HAVE_ptr_extend (TARGET_64BIT)
#define HAVE_stack_protect_set 1
#define HAVE_stack_protect_test 1
#define HAVE_popcountdi2_z196 (TARGET_Z196)
#define HAVE_popcountdi2 (TARGET_Z196)
#define HAVE_popcountsi2_z196 (TARGET_Z196)
#define HAVE_popcountsi2 (TARGET_Z196)
#define HAVE_popcounthi2_z196 (TARGET_Z196)
#define HAVE_popcounthi2 (TARGET_Z196)
#define HAVE_popcountqi2 (TARGET_Z196)
#define HAVE_tbegin (TARGET_HTM)
#define HAVE_tbegin_nofloat (TARGET_HTM)
#define HAVE_tbegin_retry (TARGET_HTM)
#define HAVE_tbegin_retry_nofloat (TARGET_HTM)
#define HAVE_tbeginc (TARGET_HTM)
#define HAVE_tend (TARGET_HTM)
#define HAVE_tabort (TARGET_HTM)
#define HAVE_tx_assist (TARGET_HTM)
#define HAVE_split_stack_prologue 1
#define HAVE_split_stack_space_check 1
#define HAVE_speculation_barrier (TARGET_ZEC12)
#define HAVE_rawmemchrsi (TARGET_VX)
#define HAVE_rawmemchrhi (TARGET_VX)
#define HAVE_rawmemchrqi (TARGET_VX)
static inline rtx gen_prologue_tpf                        (rtx, rtx);
static inline rtx
gen_prologue_tpf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
static inline rtx gen_epilogue_tpf                        (rtx, rtx);
static inline rtx
gen_epilogue_tpf(rtx ARG_UNUSED (a), rtx ARG_UNUSED (b))
{
  return 0;
}
extern rtx        gen_vec_gather_elementv4si              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_gather_elementv2di              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_gather_elementv2df              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_gather_elementv4sf              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_insert_and_zerov16qi            (rtx, rtx);
extern rtx        gen_vec_insert_and_zerov8hi             (rtx, rtx);
extern rtx        gen_vec_insert_and_zerov4si             (rtx, rtx);
extern rtx        gen_vec_insert_and_zerov2di             (rtx, rtx);
extern rtx        gen_vec_insert_and_zerov2df             (rtx, rtx);
extern rtx        gen_vec_insert_and_zerov4sf             (rtx, rtx);
extern rtx        gen_vlbb                                (rtx, rtx, rtx);
extern rtx        gen_vec_packv8hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_packv4si                        (rtx, rtx, rtx);
extern rtx        gen_vec_packv2di                        (rtx, rtx, rtx);
extern rtx        gen_vec_packsv8hi                       (rtx, rtx, rtx);
extern rtx        gen_vec_packsv4si                       (rtx, rtx, rtx);
extern rtx        gen_vec_packsv2di                       (rtx, rtx, rtx);
extern rtx        gen_vec_packsuv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_packsuv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_packsuv2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_zpermv8hi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_zpermv4si                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_zpermv4sf                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_zpermv2di                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_zpermv2df                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_scatter_elementv4si_DI          (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_scatter_elementv4sf_DI          (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_scatter_elementv2di_SI          (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_scatter_elementv2df_SI          (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_scatter_elementv4si_SI          (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_scatter_elementv2di_DI          (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_scatter_elementv2df_DI          (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_scatter_elementv4sf_SI          (rtx, rtx, rtx, rtx);
extern rtx        gen_vselv16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vselv8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vselv4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vselv2di                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vselv1ti                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vselv1df                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vselv2df                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vselv1sf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vselv2sf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vselv4sf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vselv1tf                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vseltf                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_extendv16qi                     (rtx, rtx);
extern rtx        gen_vec_extendv8hi                      (rtx, rtx);
extern rtx        gen_vec_extendv4si                      (rtx, rtx);
extern rtx        gen_vstlv1qi                            (rtx, rtx, rtx);
extern rtx        gen_vstlv2qi                            (rtx, rtx, rtx);
extern rtx        gen_vstlv4qi                            (rtx, rtx, rtx);
extern rtx        gen_vstlv8qi                            (rtx, rtx, rtx);
extern rtx        gen_vstlv16qi                           (rtx, rtx, rtx);
extern rtx        gen_vstlv1hi                            (rtx, rtx, rtx);
extern rtx        gen_vstlv2hi                            (rtx, rtx, rtx);
extern rtx        gen_vstlv4hi                            (rtx, rtx, rtx);
extern rtx        gen_vstlv8hi                            (rtx, rtx, rtx);
extern rtx        gen_vstlv1si                            (rtx, rtx, rtx);
extern rtx        gen_vstlv2si                            (rtx, rtx, rtx);
extern rtx        gen_vstlv4si                            (rtx, rtx, rtx);
extern rtx        gen_vstlv1di                            (rtx, rtx, rtx);
extern rtx        gen_vstlv2di                            (rtx, rtx, rtx);
extern rtx        gen_vstlv1sf                            (rtx, rtx, rtx);
extern rtx        gen_vstlv2sf                            (rtx, rtx, rtx);
extern rtx        gen_vstlv4sf                            (rtx, rtx, rtx);
extern rtx        gen_vstlv1df                            (rtx, rtx, rtx);
extern rtx        gen_vstlv2df                            (rtx, rtx, rtx);
extern rtx        gen_vbpermv16qi                         (rtx, rtx, rtx);
extern rtx        gen_vec_unpackhv16qi                    (rtx, rtx);
extern rtx        gen_vec_unpackhv8hi                     (rtx, rtx);
extern rtx        gen_vec_unpackhv4si                     (rtx, rtx);
extern rtx        gen_vec_unpackh_lv16qi                  (rtx, rtx);
extern rtx        gen_vec_unpackh_lv8hi                   (rtx, rtx);
extern rtx        gen_vec_unpackh_lv4si                   (rtx, rtx);
extern rtx        gen_vec_unpacklv16qi                    (rtx, rtx);
extern rtx        gen_vec_unpacklv8hi                     (rtx, rtx);
extern rtx        gen_vec_unpacklv4si                     (rtx, rtx);
extern rtx        gen_vec_unpackl_lv16qi                  (rtx, rtx);
extern rtx        gen_vec_unpackl_lv8hi                   (rtx, rtx);
extern rtx        gen_vec_unpackl_lv4si                   (rtx, rtx);
extern rtx        gen_vaccb_v16qi                         (rtx, rtx, rtx);
extern rtx        gen_vacch_v8hi                          (rtx, rtx, rtx);
extern rtx        gen_vaccf_v4si                          (rtx, rtx, rtx);
extern rtx        gen_vaccg_v2di                          (rtx, rtx, rtx);
extern rtx        gen_vaccq_v1ti                          (rtx, rtx, rtx);
extern rtx        gen_vaccq_ti                            (rtx, rtx, rtx);
extern rtx        gen_vacq                                (rtx, rtx, rtx, rtx);
extern rtx        gen_vacccq                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_andcv16qi3                      (rtx, rtx, rtx);
extern rtx        gen_vec_andcv8hi3                       (rtx, rtx, rtx);
extern rtx        gen_vec_andcv4si3                       (rtx, rtx, rtx);
extern rtx        gen_vec_andcv2di3                       (rtx, rtx, rtx);
extern rtx        gen_vec_andcv2df3                       (rtx, rtx, rtx);
extern rtx        gen_vec_andcv1ti3                       (rtx, rtx, rtx);
extern rtx        gen_vec_andcti3                         (rtx, rtx, rtx);
extern rtx        gen_vec_andcv4sf3                       (rtx, rtx, rtx);
extern rtx        gen_vec_andcv1tf3                       (rtx, rtx, rtx);
extern rtx        gen_vec_avgv16qi                        (rtx, rtx, rtx);
extern rtx        gen_vec_avgv8hi                         (rtx, rtx, rtx);
extern rtx        gen_vec_avgv4si                         (rtx, rtx, rtx);
extern rtx        gen_vec_avgv2di                         (rtx, rtx, rtx);
extern rtx        gen_vec_avguv16qi                       (rtx, rtx, rtx);
extern rtx        gen_vec_avguv8hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_avguv4si                        (rtx, rtx, rtx);
extern rtx        gen_vec_avguv2di                        (rtx, rtx, rtx);
extern rtx        gen_vec_checksum                        (rtx, rtx, rtx);
extern rtx        gen_vec_gfmsumv16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_gfmsumv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_gfmsumv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_gfmsum_128                      (rtx, rtx, rtx);
extern rtx        gen_vec_gfmsum_accumv16qi               (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_gfmsum_accumv8hi                (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_gfmsum_accumv4si                (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_gfmsum_accum_128                (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmalv16qi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmalv8hi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmalv4si                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmahv16qi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmahv8hi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmahv4si                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmalhv16qi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmalhv8hi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmalhv4si                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmaev16qi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmaev8hi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmaev4si                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmalev16qi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmalev8hi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmalev4si                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmaov16qi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmaov8hi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmaov4si                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmalov16qi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmalov8hi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vmalov4si                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_smulhv16qi                      (rtx, rtx, rtx);
extern rtx        gen_vec_smulhv8hi                       (rtx, rtx, rtx);
extern rtx        gen_vec_smulhv4si                       (rtx, rtx, rtx);
extern rtx        gen_vec_umulhv16qi                      (rtx, rtx, rtx);
extern rtx        gen_vec_umulhv8hi                       (rtx, rtx, rtx);
extern rtx        gen_vec_umulhv4si                       (rtx, rtx, rtx);
extern rtx        gen_vec_norv16qi3                       (rtx, rtx, rtx);
extern rtx        gen_vec_norv8hi3                        (rtx, rtx, rtx);
extern rtx        gen_vec_norv4si3                        (rtx, rtx, rtx);
extern rtx        gen_vec_norv2di3                        (rtx, rtx, rtx);
extern rtx        gen_vec_norv2df3                        (rtx, rtx, rtx);
extern rtx        gen_vec_norv1ti3                        (rtx, rtx, rtx);
extern rtx        gen_vec_norti3                          (rtx, rtx, rtx);
extern rtx        gen_vec_norv4sf3                        (rtx, rtx, rtx);
extern rtx        gen_vec_norv1tf3                        (rtx, rtx, rtx);
extern rtx        gen_verimv16qi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_verimv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_verimv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_verimv2di                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sllv16qiv16qi                   (rtx, rtx, rtx);
extern rtx        gen_vec_sllv8hiv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_sllv4siv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_sllv2div16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_sllv16qiv8hi                    (rtx, rtx, rtx);
extern rtx        gen_vec_sllv8hiv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_sllv4siv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_sllv2div8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_sllv16qiv4si                    (rtx, rtx, rtx);
extern rtx        gen_vec_sllv8hiv4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_sllv4siv4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_sllv2div4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_sldv16qi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldv8hi                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldv4si                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldv2di                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldv1ti                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldv2df                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldv4sf                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldv1tf                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldtf                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldbv16qi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldbv8hi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldbv4si                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldbv2di                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldbv1ti                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldbv2df                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldbv4sf                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldbv1tf                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldbtf                          (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_srdbv16qi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_srdbv8hi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_srdbv4si                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_srdbv2di                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_srdbv1ti                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_srdbv2df                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_srdbv4sf                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_srdbv1tf                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_srdbtf                          (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sralv16qiv16qi                  (rtx, rtx, rtx);
extern rtx        gen_vec_sralv8hiv16qi                   (rtx, rtx, rtx);
extern rtx        gen_vec_sralv4siv16qi                   (rtx, rtx, rtx);
extern rtx        gen_vec_sralv2div16qi                   (rtx, rtx, rtx);
extern rtx        gen_vec_sralv16qiv8hi                   (rtx, rtx, rtx);
extern rtx        gen_vec_sralv8hiv8hi                    (rtx, rtx, rtx);
extern rtx        gen_vec_sralv4siv8hi                    (rtx, rtx, rtx);
extern rtx        gen_vec_sralv2div8hi                    (rtx, rtx, rtx);
extern rtx        gen_vec_sralv16qiv4si                   (rtx, rtx, rtx);
extern rtx        gen_vec_sralv8hiv4si                    (rtx, rtx, rtx);
extern rtx        gen_vec_sralv4siv4si                    (rtx, rtx, rtx);
extern rtx        gen_vec_sralv2div4si                    (rtx, rtx, rtx);
extern rtx        gen_vec_srabv16qi                       (rtx, rtx, rtx);
extern rtx        gen_vec_srabv8hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_srabv4si                        (rtx, rtx, rtx);
extern rtx        gen_vec_srabv2di                        (rtx, rtx, rtx);
extern rtx        gen_vec_srabv1ti                        (rtx, rtx, rtx);
extern rtx        gen_vec_srabv2df                        (rtx, rtx, rtx);
extern rtx        gen_vec_srabv4sf                        (rtx, rtx, rtx);
extern rtx        gen_vec_srabv1tf                        (rtx, rtx, rtx);
extern rtx        gen_vec_srabtf                          (rtx, rtx, rtx);
extern rtx        gen_vec_srlv16qiv16qi                   (rtx, rtx, rtx);
extern rtx        gen_vec_srlv8hiv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_srlv4siv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_srlv2div16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_srlv16qiv8hi                    (rtx, rtx, rtx);
extern rtx        gen_vec_srlv8hiv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_srlv4siv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_srlv2div8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_srlv16qiv4si                    (rtx, rtx, rtx);
extern rtx        gen_vec_srlv8hiv4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_srlv4siv4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_srlv2div4si                     (rtx, rtx, rtx);
extern rtx        gen_vscbib_v16qi                        (rtx, rtx, rtx);
extern rtx        gen_vscbih_v8hi                         (rtx, rtx, rtx);
extern rtx        gen_vscbif_v4si                         (rtx, rtx, rtx);
extern rtx        gen_vscbig_v2di                         (rtx, rtx, rtx);
extern rtx        gen_vscbiq_v1ti                         (rtx, rtx, rtx);
extern rtx        gen_vscbiq_ti                           (rtx, rtx, rtx);
extern rtx        gen_vsbiq                               (rtx, rtx, rtx, rtx);
extern rtx        gen_vsbcbiq                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sum_u128v4si                    (rtx, rtx, rtx);
extern rtx        gen_vec_sum_u128v2di                    (rtx, rtx, rtx);
extern rtx        gen_vec_msumv2di                        (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vmslg                               (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfaev16qi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vfaev8hi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vfaev4si                            (rtx, rtx, rtx, rtx);
extern rtx        gen_vfeev16qi                           (rtx, rtx, rtx);
extern rtx        gen_vfeev8hi                            (rtx, rtx, rtx);
extern rtx        gen_vfeev4si                            (rtx, rtx, rtx);
extern rtx        gen_vfeezv16qi                          (rtx, rtx, rtx);
extern rtx        gen_vfeezv8hi                           (rtx, rtx, rtx);
extern rtx        gen_vfeezv4si                           (rtx, rtx, rtx);
extern rtx        gen_vfenev16qi                          (rtx, rtx, rtx);
extern rtx        gen_vfenev8hi                           (rtx, rtx, rtx);
extern rtx        gen_vfenev4si                           (rtx, rtx, rtx);
extern rtx        gen_vfenezv16qi                         (rtx, rtx, rtx);
extern rtx        gen_vfenezv8hi                          (rtx, rtx, rtx);
extern rtx        gen_vfenezv4si                          (rtx, rtx, rtx);
extern rtx        gen_vistrv16qi                          (rtx, rtx);
extern rtx        gen_vistrv8hi                           (rtx, rtx);
extern rtx        gen_vistrv4si                           (rtx, rtx);
extern rtx        gen_vstrcv16qi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrcv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrcv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vstrsv16qi                      (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vstrsv8hi                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vstrsv4si                       (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcdgb                               (rtx, rtx, rtx, rtx);
extern rtx        gen_vcdlgb                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vcgdb                               (rtx, rtx, rtx, rtx);
extern rtx        gen_vclgdb                              (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_fpintv1sf                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_fpintv2sf                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_fpintv4sf                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_fpintv1df                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_fpintv2df                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_fpintv1tf                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_fpinttf                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vflls                               (rtx, rtx);
extern rtx        gen_vflrd                               (rtx, rtx, rtx, rtx);
extern rtx        gen_vftciv4sf                           (rtx, rtx, rtx);
extern rtx        gen_vftciv2df                           (rtx, rtx, rtx);
extern rtx        gen_vftciv1tf                           (rtx, rtx, rtx);
extern rtx        gen_vftcitf                             (rtx, rtx, rtx);
extern rtx        gen_vfminv4sf                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vfminv2df                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vfminv1tf                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vfmintf                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vfmaxv4sf                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vfmaxv2df                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vfmaxv1tf                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vfmaxtf                             (rtx, rtx, rtx, rtx);
extern rtx        gen_vclfnhs_v8hi                        (rtx, rtx, rtx);
extern rtx        gen_vclfnls_v8hi                        (rtx, rtx, rtx);
extern rtx        gen_vcrnfs_v8hi                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vcfn_v8hi                           (rtx, rtx, rtx);
extern rtx        gen_vcnf_v8hi                           (rtx, rtx, rtx);
extern rtx        gen_movv16qi                            (rtx, rtx);
extern rtx        gen_movv8hi                             (rtx, rtx);
extern rtx        gen_movv4si                             (rtx, rtx);
extern rtx        gen_movv4sf                             (rtx, rtx);
extern rtx        gen_movv2di                             (rtx, rtx);
extern rtx        gen_movv2df                             (rtx, rtx);
extern rtx        gen_movv1ti                             (rtx, rtx);
extern rtx        gen_movv1tf                             (rtx, rtx);
extern rtx        gen_movtf_vr                            (rtx, rtx);
extern rtx        gen_movv1qi                             (rtx, rtx);
extern rtx        gen_movv2qi                             (rtx, rtx);
extern rtx        gen_movv1hi                             (rtx, rtx);
extern rtx        gen_movv4qi                             (rtx, rtx);
extern rtx        gen_movv2hi                             (rtx, rtx);
extern rtx        gen_movv1si                             (rtx, rtx);
extern rtx        gen_movv1sf                             (rtx, rtx);
extern rtx        gen_movv8qi                             (rtx, rtx);
extern rtx        gen_movv4hi                             (rtx, rtx);
extern rtx        gen_movv2si                             (rtx, rtx);
extern rtx        gen_movv2sf                             (rtx, rtx);
extern rtx        gen_movv1di                             (rtx, rtx);
extern rtx        gen_movv1df                             (rtx, rtx);
extern rtx        gen_fprx2_to_tf                         (rtx, rtx);
extern rtx        gen_vec_permv16qi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vpdi1v2di                           (rtx, rtx, rtx);
extern rtx        gen_vpdi1v2df                           (rtx, rtx, rtx);
extern rtx        gen_vpdi4v2di                           (rtx, rtx, rtx);
extern rtx        gen_vpdi4v2df                           (rtx, rtx, rtx);
extern rtx        gen_vpdi4_2v4si                         (rtx, rtx, rtx);
extern rtx        gen_vpdi4_2v4sf                         (rtx, rtx, rtx);
extern rtx        gen_tf_to_fprx2                         (rtx, rtx);
extern rtx        gen_eltswapv8hi                         (rtx, rtx);
extern rtx        gen_eltswapv4si                         (rtx, rtx);
extern rtx        gen_eltswapv4sf                         (rtx, rtx);
extern rtx        gen_eltswapv2di                         (rtx, rtx);
extern rtx        gen_eltswapv2df                         (rtx, rtx);
extern rtx        gen_addv1qi3                            (rtx, rtx, rtx);
extern rtx        gen_addv2qi3                            (rtx, rtx, rtx);
extern rtx        gen_addv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_addv8qi3                            (rtx, rtx, rtx);
extern rtx        gen_addv16qi3                           (rtx, rtx, rtx);
extern rtx        gen_addv1hi3                            (rtx, rtx, rtx);
extern rtx        gen_addv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_addv4hi3                            (rtx, rtx, rtx);
extern rtx        gen_addv8hi3                            (rtx, rtx, rtx);
extern rtx        gen_addv1si3                            (rtx, rtx, rtx);
extern rtx        gen_addv2si3                            (rtx, rtx, rtx);
extern rtx        gen_addv4si3                            (rtx, rtx, rtx);
extern rtx        gen_addv1di3                            (rtx, rtx, rtx);
extern rtx        gen_addv2di3                            (rtx, rtx, rtx);
extern rtx        gen_addv1ti3                            (rtx, rtx, rtx);
extern rtx        gen_subv1qi3                            (rtx, rtx, rtx);
extern rtx        gen_subv2qi3                            (rtx, rtx, rtx);
extern rtx        gen_subv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_subv8qi3                            (rtx, rtx, rtx);
extern rtx        gen_subv16qi3                           (rtx, rtx, rtx);
extern rtx        gen_subv1hi3                            (rtx, rtx, rtx);
extern rtx        gen_subv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_subv4hi3                            (rtx, rtx, rtx);
extern rtx        gen_subv8hi3                            (rtx, rtx, rtx);
extern rtx        gen_subv1si3                            (rtx, rtx, rtx);
extern rtx        gen_subv2si3                            (rtx, rtx, rtx);
extern rtx        gen_subv4si3                            (rtx, rtx, rtx);
extern rtx        gen_subv1di3                            (rtx, rtx, rtx);
extern rtx        gen_subv2di3                            (rtx, rtx, rtx);
extern rtx        gen_subv1ti3                            (rtx, rtx, rtx);
extern rtx        gen_mulv1qi3                            (rtx, rtx, rtx);
extern rtx        gen_mulv2qi3                            (rtx, rtx, rtx);
extern rtx        gen_mulv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_mulv8qi3                            (rtx, rtx, rtx);
extern rtx        gen_mulv16qi3                           (rtx, rtx, rtx);
extern rtx        gen_mulv1hi3                            (rtx, rtx, rtx);
extern rtx        gen_mulv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_mulv4hi3                            (rtx, rtx, rtx);
extern rtx        gen_mulv8hi3                            (rtx, rtx, rtx);
extern rtx        gen_mulv1si3                            (rtx, rtx, rtx);
extern rtx        gen_mulv2si3                            (rtx, rtx, rtx);
extern rtx        gen_mulv4si3                            (rtx, rtx, rtx);
extern rtx        gen_negv1qi2                            (rtx, rtx);
extern rtx        gen_negv2qi2                            (rtx, rtx);
extern rtx        gen_negv4qi2                            (rtx, rtx);
extern rtx        gen_negv8qi2                            (rtx, rtx);
extern rtx        gen_negv16qi2                           (rtx, rtx);
extern rtx        gen_negv1hi2                            (rtx, rtx);
extern rtx        gen_negv2hi2                            (rtx, rtx);
extern rtx        gen_negv4hi2                            (rtx, rtx);
extern rtx        gen_negv8hi2                            (rtx, rtx);
extern rtx        gen_negv1si2                            (rtx, rtx);
extern rtx        gen_negv2si2                            (rtx, rtx);
extern rtx        gen_negv4si2                            (rtx, rtx);
extern rtx        gen_negv1di2                            (rtx, rtx);
extern rtx        gen_negv2di2                            (rtx, rtx);
extern rtx        gen_absv1qi2                            (rtx, rtx);
extern rtx        gen_absv2qi2                            (rtx, rtx);
extern rtx        gen_absv4qi2                            (rtx, rtx);
extern rtx        gen_absv8qi2                            (rtx, rtx);
extern rtx        gen_absv16qi2                           (rtx, rtx);
extern rtx        gen_absv1hi2                            (rtx, rtx);
extern rtx        gen_absv2hi2                            (rtx, rtx);
extern rtx        gen_absv4hi2                            (rtx, rtx);
extern rtx        gen_absv8hi2                            (rtx, rtx);
extern rtx        gen_absv1si2                            (rtx, rtx);
extern rtx        gen_absv2si2                            (rtx, rtx);
extern rtx        gen_absv4si2                            (rtx, rtx);
extern rtx        gen_absv1di2                            (rtx, rtx);
extern rtx        gen_absv2di2                            (rtx, rtx);
extern rtx        gen_andv1qi3                            (rtx, rtx, rtx);
extern rtx        gen_andv2qi3                            (rtx, rtx, rtx);
extern rtx        gen_andv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_andv8qi3                            (rtx, rtx, rtx);
extern rtx        gen_andv16qi3                           (rtx, rtx, rtx);
extern rtx        gen_andv1hi3                            (rtx, rtx, rtx);
extern rtx        gen_andv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_andv4hi3                            (rtx, rtx, rtx);
extern rtx        gen_andv8hi3                            (rtx, rtx, rtx);
extern rtx        gen_andv1si3                            (rtx, rtx, rtx);
extern rtx        gen_andv2si3                            (rtx, rtx, rtx);
extern rtx        gen_andv4si3                            (rtx, rtx, rtx);
extern rtx        gen_andv1di3                            (rtx, rtx, rtx);
extern rtx        gen_andv2di3                            (rtx, rtx, rtx);
extern rtx        gen_andv1sf3                            (rtx, rtx, rtx);
extern rtx        gen_andv2sf3                            (rtx, rtx, rtx);
extern rtx        gen_andv4sf3                            (rtx, rtx, rtx);
extern rtx        gen_andv1df3                            (rtx, rtx, rtx);
extern rtx        gen_andv2df3                            (rtx, rtx, rtx);
extern rtx        gen_andv1tf3                            (rtx, rtx, rtx);
extern rtx        gen_andv1ti3                            (rtx, rtx, rtx);
extern rtx        gen_andti3                              (rtx, rtx, rtx);
extern rtx        gen_notandv1qi3                         (rtx, rtx, rtx);
extern rtx        gen_notandv2qi3                         (rtx, rtx, rtx);
extern rtx        gen_notandv4qi3                         (rtx, rtx, rtx);
extern rtx        gen_notandv8qi3                         (rtx, rtx, rtx);
extern rtx        gen_notandv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_notandv1hi3                         (rtx, rtx, rtx);
extern rtx        gen_notandv2hi3                         (rtx, rtx, rtx);
extern rtx        gen_notandv4hi3                         (rtx, rtx, rtx);
extern rtx        gen_notandv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_notandv1si3                         (rtx, rtx, rtx);
extern rtx        gen_notandv2si3                         (rtx, rtx, rtx);
extern rtx        gen_notandv4si3                         (rtx, rtx, rtx);
extern rtx        gen_notandv1di3                         (rtx, rtx, rtx);
extern rtx        gen_notandv2di3                         (rtx, rtx, rtx);
extern rtx        gen_notandv1sf3                         (rtx, rtx, rtx);
extern rtx        gen_notandv2sf3                         (rtx, rtx, rtx);
extern rtx        gen_notandv4sf3                         (rtx, rtx, rtx);
extern rtx        gen_notandv1df3                         (rtx, rtx, rtx);
extern rtx        gen_notandv2df3                         (rtx, rtx, rtx);
extern rtx        gen_notandv1tf3                         (rtx, rtx, rtx);
extern rtx        gen_notandv1ti3                         (rtx, rtx, rtx);
extern rtx        gen_notandti3                           (rtx, rtx, rtx);
extern rtx        gen_iorv1qi3                            (rtx, rtx, rtx);
extern rtx        gen_iorv2qi3                            (rtx, rtx, rtx);
extern rtx        gen_iorv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_iorv8qi3                            (rtx, rtx, rtx);
extern rtx        gen_iorv16qi3                           (rtx, rtx, rtx);
extern rtx        gen_iorv1hi3                            (rtx, rtx, rtx);
extern rtx        gen_iorv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_iorv4hi3                            (rtx, rtx, rtx);
extern rtx        gen_iorv8hi3                            (rtx, rtx, rtx);
extern rtx        gen_iorv1si3                            (rtx, rtx, rtx);
extern rtx        gen_iorv2si3                            (rtx, rtx, rtx);
extern rtx        gen_iorv4si3                            (rtx, rtx, rtx);
extern rtx        gen_iorv1di3                            (rtx, rtx, rtx);
extern rtx        gen_iorv2di3                            (rtx, rtx, rtx);
extern rtx        gen_iorv1sf3                            (rtx, rtx, rtx);
extern rtx        gen_iorv2sf3                            (rtx, rtx, rtx);
extern rtx        gen_iorv4sf3                            (rtx, rtx, rtx);
extern rtx        gen_iorv1df3                            (rtx, rtx, rtx);
extern rtx        gen_iorv2df3                            (rtx, rtx, rtx);
extern rtx        gen_iorv1tf3                            (rtx, rtx, rtx);
extern rtx        gen_iorv1ti3                            (rtx, rtx, rtx);
extern rtx        gen_iorti3                              (rtx, rtx, rtx);
extern rtx        gen_ior_notv1qi3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv2qi3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv4qi3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv8qi3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv16qi3                       (rtx, rtx, rtx);
extern rtx        gen_ior_notv1hi3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv2hi3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv4hi3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv8hi3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv1si3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv2si3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv4si3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv1di3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv2di3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv1sf3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv2sf3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv4sf3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv1df3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv2df3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv1tf3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notv1ti3                        (rtx, rtx, rtx);
extern rtx        gen_ior_notti3                          (rtx, rtx, rtx);
extern rtx        gen_xorv1qi3                            (rtx, rtx, rtx);
extern rtx        gen_xorv2qi3                            (rtx, rtx, rtx);
extern rtx        gen_xorv4qi3                            (rtx, rtx, rtx);
extern rtx        gen_xorv8qi3                            (rtx, rtx, rtx);
extern rtx        gen_xorv16qi3                           (rtx, rtx, rtx);
extern rtx        gen_xorv1hi3                            (rtx, rtx, rtx);
extern rtx        gen_xorv2hi3                            (rtx, rtx, rtx);
extern rtx        gen_xorv4hi3                            (rtx, rtx, rtx);
extern rtx        gen_xorv8hi3                            (rtx, rtx, rtx);
extern rtx        gen_xorv1si3                            (rtx, rtx, rtx);
extern rtx        gen_xorv2si3                            (rtx, rtx, rtx);
extern rtx        gen_xorv4si3                            (rtx, rtx, rtx);
extern rtx        gen_xorv1di3                            (rtx, rtx, rtx);
extern rtx        gen_xorv2di3                            (rtx, rtx, rtx);
extern rtx        gen_xorv1sf3                            (rtx, rtx, rtx);
extern rtx        gen_xorv2sf3                            (rtx, rtx, rtx);
extern rtx        gen_xorv4sf3                            (rtx, rtx, rtx);
extern rtx        gen_xorv1df3                            (rtx, rtx, rtx);
extern rtx        gen_xorv2df3                            (rtx, rtx, rtx);
extern rtx        gen_xorv1tf3                            (rtx, rtx, rtx);
extern rtx        gen_xorv1ti3                            (rtx, rtx, rtx);
extern rtx        gen_xorti3                              (rtx, rtx, rtx);
extern rtx        gen_notxorv1qi3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv2qi3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv4qi3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv8qi3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv16qi3                        (rtx, rtx, rtx);
extern rtx        gen_notxorv1hi3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv2hi3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv4hi3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv8hi3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv1si3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv2si3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv4si3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv1di3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv2di3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv1sf3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv2sf3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv4sf3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv1df3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv2df3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv1tf3                         (rtx, rtx, rtx);
extern rtx        gen_notxorv1ti3                         (rtx, rtx, rtx);
extern rtx        gen_notxorti3                           (rtx, rtx, rtx);
extern rtx        gen_one_cmplv1qi2                       (rtx, rtx);
extern rtx        gen_one_cmplv2qi2                       (rtx, rtx);
extern rtx        gen_one_cmplv4qi2                       (rtx, rtx);
extern rtx        gen_one_cmplv8qi2                       (rtx, rtx);
extern rtx        gen_one_cmplv16qi2                      (rtx, rtx);
extern rtx        gen_one_cmplv1hi2                       (rtx, rtx);
extern rtx        gen_one_cmplv2hi2                       (rtx, rtx);
extern rtx        gen_one_cmplv4hi2                       (rtx, rtx);
extern rtx        gen_one_cmplv8hi2                       (rtx, rtx);
extern rtx        gen_one_cmplv1si2                       (rtx, rtx);
extern rtx        gen_one_cmplv2si2                       (rtx, rtx);
extern rtx        gen_one_cmplv4si2                       (rtx, rtx);
extern rtx        gen_one_cmplv1di2                       (rtx, rtx);
extern rtx        gen_one_cmplv2di2                       (rtx, rtx);
extern rtx        gen_one_cmplv1sf2                       (rtx, rtx);
extern rtx        gen_one_cmplv2sf2                       (rtx, rtx);
extern rtx        gen_one_cmplv4sf2                       (rtx, rtx);
extern rtx        gen_one_cmplv1df2                       (rtx, rtx);
extern rtx        gen_one_cmplv2df2                       (rtx, rtx);
extern rtx        gen_one_cmplv1tf2                       (rtx, rtx);
extern rtx        gen_one_cmplv1ti2                       (rtx, rtx);
extern rtx        gen_one_cmplti2                         (rtx, rtx);
extern rtx        gen_popcountv16qi2_vxe                  (rtx, rtx);
extern rtx        gen_popcountv8hi2_vxe                   (rtx, rtx);
extern rtx        gen_popcountv4si2_vxe                   (rtx, rtx);
extern rtx        gen_popcountv2di2_vxe                   (rtx, rtx);
extern rtx        gen_popcountv16qi2_vx                   (rtx, rtx);
extern rtx        gen_clzv1qi2                            (rtx, rtx);
extern rtx        gen_clzv2qi2                            (rtx, rtx);
extern rtx        gen_clzv4qi2                            (rtx, rtx);
extern rtx        gen_clzv8qi2                            (rtx, rtx);
extern rtx        gen_clzv16qi2                           (rtx, rtx);
extern rtx        gen_clzv1hi2                            (rtx, rtx);
extern rtx        gen_clzv2hi2                            (rtx, rtx);
extern rtx        gen_clzv4hi2                            (rtx, rtx);
extern rtx        gen_clzv8hi2                            (rtx, rtx);
extern rtx        gen_clzv1si2                            (rtx, rtx);
extern rtx        gen_clzv2si2                            (rtx, rtx);
extern rtx        gen_clzv4si2                            (rtx, rtx);
extern rtx        gen_clzv1di2                            (rtx, rtx);
extern rtx        gen_clzv2di2                            (rtx, rtx);
extern rtx        gen_clzv1sf2                            (rtx, rtx);
extern rtx        gen_clzv2sf2                            (rtx, rtx);
extern rtx        gen_clzv4sf2                            (rtx, rtx);
extern rtx        gen_clzv1df2                            (rtx, rtx);
extern rtx        gen_clzv2df2                            (rtx, rtx);
extern rtx        gen_ctzv1qi2                            (rtx, rtx);
extern rtx        gen_ctzv2qi2                            (rtx, rtx);
extern rtx        gen_ctzv4qi2                            (rtx, rtx);
extern rtx        gen_ctzv8qi2                            (rtx, rtx);
extern rtx        gen_ctzv16qi2                           (rtx, rtx);
extern rtx        gen_ctzv1hi2                            (rtx, rtx);
extern rtx        gen_ctzv2hi2                            (rtx, rtx);
extern rtx        gen_ctzv4hi2                            (rtx, rtx);
extern rtx        gen_ctzv8hi2                            (rtx, rtx);
extern rtx        gen_ctzv1si2                            (rtx, rtx);
extern rtx        gen_ctzv2si2                            (rtx, rtx);
extern rtx        gen_ctzv4si2                            (rtx, rtx);
extern rtx        gen_ctzv1di2                            (rtx, rtx);
extern rtx        gen_ctzv2di2                            (rtx, rtx);
extern rtx        gen_ctzv1sf2                            (rtx, rtx);
extern rtx        gen_ctzv2sf2                            (rtx, rtx);
extern rtx        gen_ctzv4sf2                            (rtx, rtx);
extern rtx        gen_ctzv1df2                            (rtx, rtx);
extern rtx        gen_ctzv2df2                            (rtx, rtx);
extern rtx        gen_vrotlv1qi3                          (rtx, rtx, rtx);
extern rtx        gen_vrotlv2qi3                          (rtx, rtx, rtx);
extern rtx        gen_vrotlv4qi3                          (rtx, rtx, rtx);
extern rtx        gen_vrotlv8qi3                          (rtx, rtx, rtx);
extern rtx        gen_vrotlv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_vrotlv1hi3                          (rtx, rtx, rtx);
extern rtx        gen_vrotlv2hi3                          (rtx, rtx, rtx);
extern rtx        gen_vrotlv4hi3                          (rtx, rtx, rtx);
extern rtx        gen_vrotlv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_vrotlv1si3                          (rtx, rtx, rtx);
extern rtx        gen_vrotlv2si3                          (rtx, rtx, rtx);
extern rtx        gen_vrotlv4si3                          (rtx, rtx, rtx);
extern rtx        gen_vrotlv1di3                          (rtx, rtx, rtx);
extern rtx        gen_vrotlv2di3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv1qi3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv2qi3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv4qi3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv8qi3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_vashlv1hi3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv2hi3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv4hi3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv1si3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv2si3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv4si3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv1di3                          (rtx, rtx, rtx);
extern rtx        gen_vashlv2di3                          (rtx, rtx, rtx);
extern rtx        gen_vashrv1qi3                          (rtx, rtx, rtx);
extern rtx        gen_vashrv2qi3                          (rtx, rtx, rtx);
extern rtx        gen_vashrv4qi3                          (rtx, rtx, rtx);
extern rtx        gen_vashrv8qi3                          (rtx, rtx, rtx);
extern rtx        gen_vashrv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_vashrv1hi3                          (rtx, rtx, rtx);
extern rtx        gen_vashrv2hi3                          (rtx, rtx, rtx);
extern rtx        gen_vashrv4hi3                          (rtx, rtx, rtx);
extern rtx        gen_vashrv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_vashrv1si3                          (rtx, rtx, rtx);
extern rtx        gen_vashrv2si3                          (rtx, rtx, rtx);
extern rtx        gen_vashrv4si3                          (rtx, rtx, rtx);
extern rtx        gen_vashrv1di3                          (rtx, rtx, rtx);
extern rtx        gen_vashrv2di3                          (rtx, rtx, rtx);
extern rtx        gen_vlshrv1qi3                          (rtx, rtx, rtx);
extern rtx        gen_vlshrv2qi3                          (rtx, rtx, rtx);
extern rtx        gen_vlshrv4qi3                          (rtx, rtx, rtx);
extern rtx        gen_vlshrv8qi3                          (rtx, rtx, rtx);
extern rtx        gen_vlshrv16qi3                         (rtx, rtx, rtx);
extern rtx        gen_vlshrv1hi3                          (rtx, rtx, rtx);
extern rtx        gen_vlshrv2hi3                          (rtx, rtx, rtx);
extern rtx        gen_vlshrv4hi3                          (rtx, rtx, rtx);
extern rtx        gen_vlshrv8hi3                          (rtx, rtx, rtx);
extern rtx        gen_vlshrv1si3                          (rtx, rtx, rtx);
extern rtx        gen_vlshrv2si3                          (rtx, rtx, rtx);
extern rtx        gen_vlshrv4si3                          (rtx, rtx, rtx);
extern rtx        gen_vlshrv1di3                          (rtx, rtx, rtx);
extern rtx        gen_vlshrv2di3                          (rtx, rtx, rtx);
extern rtx        gen_sminv1qi3                           (rtx, rtx, rtx);
extern rtx        gen_sminv2qi3                           (rtx, rtx, rtx);
extern rtx        gen_sminv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_sminv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_sminv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_sminv1hi3                           (rtx, rtx, rtx);
extern rtx        gen_sminv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_sminv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_sminv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_sminv1si3                           (rtx, rtx, rtx);
extern rtx        gen_sminv2si3                           (rtx, rtx, rtx);
extern rtx        gen_sminv4si3                           (rtx, rtx, rtx);
extern rtx        gen_sminv1di3                           (rtx, rtx, rtx);
extern rtx        gen_sminv2di3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv1qi3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv2qi3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_smaxv1hi3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv1si3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv2si3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv4si3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv1di3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv2di3                           (rtx, rtx, rtx);
extern rtx        gen_uminv1qi3                           (rtx, rtx, rtx);
extern rtx        gen_uminv2qi3                           (rtx, rtx, rtx);
extern rtx        gen_uminv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_uminv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_uminv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_uminv1hi3                           (rtx, rtx, rtx);
extern rtx        gen_uminv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_uminv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_uminv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_uminv1si3                           (rtx, rtx, rtx);
extern rtx        gen_uminv2si3                           (rtx, rtx, rtx);
extern rtx        gen_uminv4si3                           (rtx, rtx, rtx);
extern rtx        gen_uminv1di3                           (rtx, rtx, rtx);
extern rtx        gen_uminv2di3                           (rtx, rtx, rtx);
extern rtx        gen_umaxv1qi3                           (rtx, rtx, rtx);
extern rtx        gen_umaxv2qi3                           (rtx, rtx, rtx);
extern rtx        gen_umaxv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_umaxv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_umaxv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_umaxv1hi3                           (rtx, rtx, rtx);
extern rtx        gen_umaxv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_umaxv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_umaxv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_umaxv1si3                           (rtx, rtx, rtx);
extern rtx        gen_umaxv2si3                           (rtx, rtx, rtx);
extern rtx        gen_umaxv4si3                           (rtx, rtx, rtx);
extern rtx        gen_umaxv1di3                           (rtx, rtx, rtx);
extern rtx        gen_umaxv2di3                           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_even_v1qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_even_v2qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_even_v4qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_even_v8qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_even_v16qi          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_even_v1hi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_even_v2hi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_even_v4hi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_even_v8hi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_even_v1si           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_even_v2si           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_even_v4si           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_even_v1qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_even_v2qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_even_v4qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_even_v8qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_even_v16qi          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_even_v1hi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_even_v2hi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_even_v4hi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_even_v8hi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_even_v1si           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_even_v2si           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_even_v4si           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_odd_v1qi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_odd_v2qi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_odd_v4qi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_odd_v8qi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_odd_v16qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_odd_v1hi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_odd_v2hi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_odd_v4hi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_odd_v8hi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_odd_v1si            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_odd_v2si            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_odd_v4si            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_odd_v1qi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_odd_v2qi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_odd_v4qi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_odd_v8qi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_odd_v16qi           (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_odd_v1hi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_odd_v2hi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_odd_v4hi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_odd_v8hi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_odd_v1si            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_odd_v2si            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_odd_v4si            (rtx, rtx, rtx);
extern rtx        gen_addv4sf3                            (rtx, rtx, rtx);
extern rtx        gen_addv2df3                            (rtx, rtx, rtx);
extern rtx        gen_addv1tf3                            (rtx, rtx, rtx);
extern rtx        gen_addtf3_vr                           (rtx, rtx, rtx);
extern rtx        gen_subv4sf3                            (rtx, rtx, rtx);
extern rtx        gen_subv2df3                            (rtx, rtx, rtx);
extern rtx        gen_subv1tf3                            (rtx, rtx, rtx);
extern rtx        gen_subtf3_vr                           (rtx, rtx, rtx);
extern rtx        gen_mulv4sf3                            (rtx, rtx, rtx);
extern rtx        gen_mulv2df3                            (rtx, rtx, rtx);
extern rtx        gen_mulv1tf3                            (rtx, rtx, rtx);
extern rtx        gen_multf3_vr                           (rtx, rtx, rtx);
extern rtx        gen_divv4sf3                            (rtx, rtx, rtx);
extern rtx        gen_divv2df3                            (rtx, rtx, rtx);
extern rtx        gen_divv1tf3                            (rtx, rtx, rtx);
extern rtx        gen_divtf3_vr                           (rtx, rtx, rtx);
extern rtx        gen_sqrtv4sf2                           (rtx, rtx);
extern rtx        gen_sqrtv2df2                           (rtx, rtx);
extern rtx        gen_sqrtv1tf2                           (rtx, rtx);
extern rtx        gen_sqrttf2_vr                          (rtx, rtx);
extern rtx        gen_fmav4sf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav2df4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_fmav1tf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_fmatf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsv4sf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsv2df4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsv1tf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_fmstf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_neg_fmav4sf4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_neg_fmav2df4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_neg_fmav1tf4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_neg_fmatf4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_neg_fmsv4sf4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_neg_fmsv2df4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_neg_fmsv1tf4                        (rtx, rtx, rtx, rtx);
extern rtx        gen_neg_fmstf4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_negv1sf2                            (rtx, rtx);
extern rtx        gen_negv2sf2                            (rtx, rtx);
extern rtx        gen_negv4sf2                            (rtx, rtx);
extern rtx        gen_negv1df2                            (rtx, rtx);
extern rtx        gen_negv2df2                            (rtx, rtx);
extern rtx        gen_negv1tf2                            (rtx, rtx);
extern rtx        gen_negtf2_vr                           (rtx, rtx);
extern rtx        gen_absv1sf2                            (rtx, rtx);
extern rtx        gen_absv2sf2                            (rtx, rtx);
extern rtx        gen_absv4sf2                            (rtx, rtx);
extern rtx        gen_absv1df2                            (rtx, rtx);
extern rtx        gen_absv2df2                            (rtx, rtx);
extern rtx        gen_absv1tf2                            (rtx, rtx);
extern rtx        gen_abstf2_vr                           (rtx, rtx);
extern rtx        gen_negabsv1sf2                         (rtx, rtx);
extern rtx        gen_negabsv2sf2                         (rtx, rtx);
extern rtx        gen_negabsv4sf2                         (rtx, rtx);
extern rtx        gen_negabsv1df2                         (rtx, rtx);
extern rtx        gen_negabsv2df2                         (rtx, rtx);
extern rtx        gen_negabsv1tf2                         (rtx, rtx);
extern rtx        gen_negabstf2                           (rtx, rtx);
extern rtx        gen_vec_cmpgtv1sf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtv2sf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtv4sf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtv1df_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtv2df_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtv1tf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgttf_quiet_nocc              (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgev1sf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgev2sf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgev4sf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgev1df_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgev2df_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgev1tf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgetf_quiet_nocc              (rtx, rtx, rtx);
extern rtx        gen_vllv16qi                            (rtx, rtx, rtx);
extern rtx        gen_vec_vfeesv16qi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vfeesv8hi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vfeesv4si                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vfenesv16qi                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vfenesv8hi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_vfenesv4si                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v8hi                 (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v4si                 (rtx, rtx, rtx);
extern rtx        gen_vec_pack_trunc_v2di                 (rtx, rtx, rtx);
extern rtx        gen_vec_pack_ssat_v8hi                  (rtx, rtx, rtx);
extern rtx        gen_vec_pack_ssat_v4si                  (rtx, rtx, rtx);
extern rtx        gen_vec_pack_ssat_v2di                  (rtx, rtx, rtx);
extern rtx        gen_vec_pack_usat_v8hi                  (rtx, rtx, rtx);
extern rtx        gen_vec_pack_usat_v4si                  (rtx, rtx, rtx);
extern rtx        gen_vec_pack_usat_v2di                  (rtx, rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v16qi                (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v16qi                (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v16qi                (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v16qi                (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v8hi                 (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v8hi                 (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v8hi                 (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v8hi                 (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v4si                 (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v4si                 (rtx, rtx);
extern rtx        gen_vec_unpacku_hi_v4si                 (rtx, rtx);
extern rtx        gen_vec_unpacku_lo_v4si                 (rtx, rtx);
extern rtx        gen_floatv2div2df2                      (rtx, rtx);
extern rtx        gen_floatv4siv4sf2                      (rtx, rtx);
extern rtx        gen_floatunsv2div2df2                   (rtx, rtx);
extern rtx        gen_floatunsv4siv4sf2                   (rtx, rtx);
extern rtx        gen_fix_truncv2dfv2di2                  (rtx, rtx);
extern rtx        gen_fix_truncv4sfv4si2                  (rtx, rtx);
extern rtx        gen_fixuns_truncv2dfv2di2               (rtx, rtx);
extern rtx        gen_fixuns_truncv4sfv4si2               (rtx, rtx);
extern rtx        gen_floorv4sf2                          (rtx, rtx);
extern rtx        gen_btruncv4sf2                         (rtx, rtx);
extern rtx        gen_roundv4sf2                          (rtx, rtx);
extern rtx        gen_ceilv4sf2                           (rtx, rtx);
extern rtx        gen_nearbyintv4sf2                      (rtx, rtx);
extern rtx        gen_floorv2df2                          (rtx, rtx);
extern rtx        gen_btruncv2df2                         (rtx, rtx);
extern rtx        gen_roundv2df2                          (rtx, rtx);
extern rtx        gen_ceilv2df2                           (rtx, rtx);
extern rtx        gen_nearbyintv2df2                      (rtx, rtx);
extern rtx        gen_floorv1tf2                          (rtx, rtx);
extern rtx        gen_btruncv1tf2                         (rtx, rtx);
extern rtx        gen_roundv1tf2                          (rtx, rtx);
extern rtx        gen_ceilv1tf2                           (rtx, rtx);
extern rtx        gen_nearbyintv1tf2                      (rtx, rtx);
extern rtx        gen_floortf2_vr                         (rtx, rtx);
extern rtx        gen_btrunctf2_vr                        (rtx, rtx);
extern rtx        gen_roundtf2_vr                         (rtx, rtx);
extern rtx        gen_ceiltf2_vr                          (rtx, rtx);
extern rtx        gen_nearbyinttf2_vr                     (rtx, rtx);
extern rtx        gen_rintv4sf2                           (rtx, rtx);
extern rtx        gen_rintv2df2                           (rtx, rtx);
extern rtx        gen_rintv1tf2                           (rtx, rtx);
extern rtx        gen_rinttf2_vr                          (rtx, rtx);
extern rtx        gen_extenddftf2_vr                      (rtx, rtx);
extern rtx        gen_movti                               (rtx, rtx);
extern rtx        gen_force_la_31                         (rtx, rtx);
extern rtx        gen_movstrictqi                         (rtx, rtx);
extern rtx        gen_movstricthi                         (rtx, rtx);
extern rtx        gen_movstrictsi                         (rtx, rtx);
extern rtx        gen_movsf                               (rtx, rtx);
extern rtx        gen_movsd                               (rtx, rtx);
extern rtx        gen_movcc                               (rtx, rtx);
extern rtx        gen_cmpint                              (rtx, rtx);
extern rtx        gen_fix_trunctddi2_dfp                  (rtx, rtx, rtx);
extern rtx        gen_fix_truncdddi2_dfp                  (rtx, rtx, rtx);
extern rtx        gen_floatditf2_fpr                      (rtx, rtx);
extern rtx        gen_floatdifprx22                       (rtx, rtx);
extern rtx        gen_floatdidf2                          (rtx, rtx);
extern rtx        gen_floatdisf2                          (rtx, rtx);
extern rtx        gen_floatditd2                          (rtx, rtx);
extern rtx        gen_floatdidd2                          (rtx, rtx);
extern rtx        gen_floatsitf2_fpr                      (rtx, rtx);
extern rtx        gen_floatsifprx22                       (rtx, rtx);
extern rtx        gen_floatsidf2                          (rtx, rtx);
extern rtx        gen_floatsisf2                          (rtx, rtx);
extern rtx        gen_floatsitd2                          (rtx, rtx);
extern rtx        gen_floatsidd2                          (rtx, rtx);
extern rtx        gen_truncdfsf2                          (rtx, rtx);
extern rtx        gen_trunctfdf2_fpr                      (rtx, rtx);
extern rtx        gen_trunctfsf2_fpr                      (rtx, rtx);
extern rtx        gen_truncddsd2                          (rtx, rtx);
extern rtx        gen_extendddtd2                         (rtx, rtx);
extern rtx        gen_extendsddd2                         (rtx, rtx);
extern rtx        gen_floortf2_fpr                        (rtx, rtx);
extern rtx        gen_btrunctf2_fpr                       (rtx, rtx);
extern rtx        gen_roundtf2_fpr                        (rtx, rtx);
extern rtx        gen_ceiltf2_fpr                         (rtx, rtx);
extern rtx        gen_nearbyinttf2_fpr                    (rtx, rtx);
extern rtx        gen_floorfprx22                         (rtx, rtx);
extern rtx        gen_btruncfprx22                        (rtx, rtx);
extern rtx        gen_roundfprx22                         (rtx, rtx);
extern rtx        gen_ceilfprx22                          (rtx, rtx);
extern rtx        gen_nearbyintfprx22                     (rtx, rtx);
extern rtx        gen_floordf2                            (rtx, rtx);
extern rtx        gen_btruncdf2                           (rtx, rtx);
extern rtx        gen_rounddf2                            (rtx, rtx);
extern rtx        gen_ceildf2                             (rtx, rtx);
extern rtx        gen_nearbyintdf2                        (rtx, rtx);
extern rtx        gen_floorsf2                            (rtx, rtx);
extern rtx        gen_btruncsf2                           (rtx, rtx);
extern rtx        gen_roundsf2                            (rtx, rtx);
extern rtx        gen_ceilsf2                             (rtx, rtx);
extern rtx        gen_nearbyintsf2                        (rtx, rtx);
extern rtx        gen_rinttf2_fpr                         (rtx, rtx);
extern rtx        gen_rintfprx22                          (rtx, rtx);
extern rtx        gen_rintdf2                             (rtx, rtx);
extern rtx        gen_rintsf2                             (rtx, rtx);
extern rtx        gen_floortd2                            (rtx, rtx);
extern rtx        gen_btrunctd2                           (rtx, rtx);
extern rtx        gen_roundtd2                            (rtx, rtx);
extern rtx        gen_ceiltd2                             (rtx, rtx);
extern rtx        gen_nearbyinttd2                        (rtx, rtx);
extern rtx        gen_floordd2                            (rtx, rtx);
extern rtx        gen_btruncdd2                           (rtx, rtx);
extern rtx        gen_rounddd2                            (rtx, rtx);
extern rtx        gen_ceildd2                             (rtx, rtx);
extern rtx        gen_nearbyintdd2                        (rtx, rtx);
extern rtx        gen_rinttd2                             (rtx, rtx);
extern rtx        gen_rintdd2                             (rtx, rtx);
extern rtx        gen_addtf3_fpr                          (rtx, rtx, rtx);
extern rtx        gen_addfprx23                           (rtx, rtx, rtx);
extern rtx        gen_adddf3                              (rtx, rtx, rtx);
extern rtx        gen_addsf3                              (rtx, rtx, rtx);
extern rtx        gen_addtd3                              (rtx, rtx, rtx);
extern rtx        gen_adddd3                              (rtx, rtx, rtx);
extern rtx        gen_subtf3_fpr                          (rtx, rtx, rtx);
extern rtx        gen_subfprx23                           (rtx, rtx, rtx);
extern rtx        gen_subdf3                              (rtx, rtx, rtx);
extern rtx        gen_subsf3                              (rtx, rtx, rtx);
extern rtx        gen_subtd3                              (rtx, rtx, rtx);
extern rtx        gen_subdd3                              (rtx, rtx, rtx);
extern rtx        gen_sne                                 (rtx, rtx);
extern rtx        gen_mulditi3                            (rtx, rtx, rtx);
extern rtx        gen_mulditi3_2                          (rtx, rtx, rtx);
extern rtx        gen_mulsidi3                            (rtx, rtx, rtx);
extern rtx        gen_umulditi3                           (rtx, rtx, rtx);
extern rtx        gen_umulsidi3                           (rtx, rtx, rtx);
extern rtx        gen_multf3_fpr                          (rtx, rtx, rtx);
extern rtx        gen_mulfprx23                           (rtx, rtx, rtx);
extern rtx        gen_muldf3                              (rtx, rtx, rtx);
extern rtx        gen_mulsf3                              (rtx, rtx, rtx);
extern rtx        gen_multd3                              (rtx, rtx, rtx);
extern rtx        gen_muldd3                              (rtx, rtx, rtx);
extern rtx        gen_fmadf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fmasf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fmsdf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_fmssf4                              (rtx, rtx, rtx, rtx);
extern rtx        gen_divmodtidi3                         (rtx, rtx, rtx);
extern rtx        gen_divmodtisi3                         (rtx, rtx, rtx);
extern rtx        gen_udivmodtidi3                        (rtx, rtx, rtx);
extern rtx        gen_divmoddisi3                         (rtx, rtx, rtx);
extern rtx        gen_udivmoddisi3                        (rtx, rtx, rtx);
extern rtx        gen_divtf3_fpr                          (rtx, rtx, rtx);
extern rtx        gen_divfprx23                           (rtx, rtx, rtx);
extern rtx        gen_divdf3                              (rtx, rtx, rtx);
extern rtx        gen_divsf3                              (rtx, rtx, rtx);
extern rtx        gen_divtd3                              (rtx, rtx, rtx);
extern rtx        gen_divdd3                              (rtx, rtx, rtx);
extern rtx        gen_absdi2                              (rtx, rtx);
extern rtx        gen_abssi2                              (rtx, rtx);
extern rtx        gen_sqrttf2_fpr                         (rtx, rtx);
extern rtx        gen_sqrtfprx22                          (rtx, rtx);
extern rtx        gen_sqrtdf2                             (rtx, rtx);
extern rtx        gen_sqrtsf2                             (rtx, rtx);
extern rtx        gen_clztidi2                            (rtx, rtx, rtx);
extern rtx        gen_trap                                (void);
extern rtx        gen_condtrap                            (rtx, rtx);
extern rtx        gen_doloop_si64                         (rtx, rtx, rtx);
extern rtx        gen_doloop_di                           (rtx, rtx, rtx);
extern rtx        gen_indirect_jump_via_thunkdi_z10       (rtx);
extern rtx        gen_indirect_jump_via_thunksi_z10       (rtx);
extern rtx        gen_indirect_jump_via_thunkdi           (rtx);
extern rtx        gen_indirect_jump_via_thunksi           (rtx);
extern rtx        gen_indirect_jump_via_inlinethunkdi_z10 (rtx, rtx);
extern rtx        gen_indirect_jump_via_inlinethunksi_z10 (rtx, rtx);
extern rtx        gen_indirect_jump_via_inlinethunkdi     (rtx, rtx, rtx);
extern rtx        gen_indirect_jump_via_inlinethunksi     (rtx, rtx, rtx);
extern rtx        gen_casesi_jump_via_thunkdi_z10         (rtx, rtx);
extern rtx        gen_casesi_jump_via_thunksi_z10         (rtx, rtx);
extern rtx        gen_casesi_jump_via_thunkdi             (rtx, rtx);
extern rtx        gen_casesi_jump_via_thunksi             (rtx, rtx);
extern rtx        gen_casesi_jump_via_inlinethunkdi_z10   (rtx, rtx, rtx);
extern rtx        gen_casesi_jump_via_inlinethunksi_z10   (rtx, rtx, rtx);
extern rtx        gen_casesi_jump_via_inlinethunkdi       (rtx, rtx, rtx, rtx);
extern rtx        gen_casesi_jump_via_inlinethunksi       (rtx, rtx, rtx, rtx);
extern rtx        gen_blockage                            (void);
extern rtx        gen_mem_thread_fence_1                  (rtx);
extern rtx        gen_atomic_loaddi_1                     (rtx, rtx);
extern rtx        gen_atomic_loadti_1                     (rtx, rtx);
extern rtx        gen_atomic_storedi_1                    (rtx, rtx);
extern rtx        gen_atomic_storeti_1                    (rtx, rtx);
extern rtx        gen_atomic_fetch_anddi_iaf              (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_ordi_iaf               (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xordi_iaf              (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_adddi_iaf              (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andsi_iaf              (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_orsi_iaf               (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorsi_iaf              (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addsi_iaf              (rtx, rtx, rtx);
extern rtx        gen_nop                                 (void);
extern rtx        gen_nop_lr0                             (void);
extern rtx        gen_nop_lr1                             (void);
extern rtx        gen_nop_2_byte                          (void);
extern rtx        gen_nop_4_byte                          (void);
extern rtx        gen_nop_6_byte                          (void);
extern rtx        gen_pool_align                          (rtx);
extern rtx        gen_pool_section_start                  (void);
extern rtx        gen_pool_section_end                    (void);
extern rtx        gen_main_base_64                        (rtx, rtx);
extern rtx        gen_main_pool                           (rtx);
extern rtx        gen_reload_base_64                      (rtx, rtx);
extern rtx        gen_pool                                (rtx);
extern rtx        gen_return                              (void);
extern rtx        gen_simple_return                       (void);
extern rtx        gen_returndi_prez10                     (rtx);
extern rtx        gen_returnsi_prez10                     (rtx);
extern rtx        gen_stack_protect_setdi                 (rtx, rtx);
extern rtx        gen_stack_protect_setsi                 (rtx, rtx);
extern rtx        gen_stack_protect_testdi                (rtx, rtx);
extern rtx        gen_stack_protect_testsi                (rtx, rtx);
extern rtx        gen_stack_tiedi                         (rtx, rtx);
extern rtx        gen_stack_tiesi                         (rtx, rtx);
extern rtx        gen_stack_restore_from_fpr              (rtx);
extern rtx        gen_prefetch                            (rtx, rtx, rtx);
extern rtx        gen_bswapdi2                            (rtx, rtx);
extern rtx        gen_bswapsi2                            (rtx, rtx);
extern rtx        gen_bswaphi2                            (rtx, rtx);
extern rtx        gen_copysigntf3_fpr                     (rtx, rtx, rtx);
extern rtx        gen_copysignfprx23                      (rtx, rtx, rtx);
extern rtx        gen_copysigndf3                         (rtx, rtx, rtx);
extern rtx        gen_copysignsf3                         (rtx, rtx, rtx);
extern rtx        gen_copysigntd3                         (rtx, rtx, rtx);
extern rtx        gen_copysigndd3                         (rtx, rtx, rtx);
extern rtx        gen_tbegin_1_z13                        (rtx, rtx);
extern rtx        gen_tbegin_1                            (rtx, rtx);
extern rtx        gen_tbegin_nofloat_1                    (rtx, rtx);
extern rtx        gen_etnd                                (rtx);
extern rtx        gen_ntstg                               (rtx, rtx);
extern rtx        gen_sfpc                                (rtx);
extern rtx        gen_efpc                                (rtx);
extern rtx        gen_lcbb                                (rtx, rtx, rtx);
extern rtx        gen_split_stack_calldi                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_split_stack_callsi                  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_split_stack_cond_calldi             (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_split_stack_cond_callsi             (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_osc_break                           (void);
extern rtx        gen_vec_genmaskv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_genmaskv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_genmaskv4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_genmaskv2di                     (rtx, rtx, rtx);
extern rtx        gen_vec_genbytemaskv16qi                (rtx, rtx);
extern rtx        gen_vec_splatsv16qi                     (rtx, rtx);
extern rtx        gen_vec_splatsv8hi                      (rtx, rtx);
extern rtx        gen_vec_splatsv4si                      (rtx, rtx);
extern rtx        gen_vec_splatsv2di                      (rtx, rtx);
extern rtx        gen_vec_splatsv2df                      (rtx, rtx);
extern rtx        gen_vec_splatsv4sf                      (rtx, rtx);
extern rtx        gen_vec_insertv16qi                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_insertv8hi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_insertv4si                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_insertv2di                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_insertv2df                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_insertv4sf                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_promotev16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_promotev8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_promotev4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_promotev2di                     (rtx, rtx, rtx);
extern rtx        gen_vec_promotev2df                     (rtx, rtx, rtx);
extern rtx        gen_vec_promotev4sf                     (rtx, rtx, rtx);
extern rtx        gen_vlrlrv16qi                          (rtx, rtx, rtx);
extern rtx        gen_vec_mergehv16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_mergehv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_mergehv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_mergehv4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_mergehv2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_mergehv2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_mergelv16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_mergelv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_mergelv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_mergelv4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_mergelv2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_mergelv2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_packs_ccv8hi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_packs_ccv4si                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_packs_ccv2di                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_packsu_uv8hi                    (rtx, rtx, rtx);
extern rtx        gen_vec_packsu_uv4si                    (rtx, rtx, rtx);
extern rtx        gen_vec_packsu_uv2di                    (rtx, rtx, rtx);
extern rtx        gen_vec_packsu_ccv8hi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_packsu_ccv4si                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_packsu_ccv2di                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permiv2di                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_permiv2df                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_splatv16qi                      (rtx, rtx, rtx);
extern rtx        gen_vec_splatv8hi                       (rtx, rtx, rtx);
extern rtx        gen_vec_splatv4si                       (rtx, rtx, rtx);
extern rtx        gen_vec_splatv2di                       (rtx, rtx, rtx);
extern rtx        gen_vec_splatv1ti                       (rtx, rtx, rtx);
extern rtx        gen_vec_splatv2df                       (rtx, rtx, rtx);
extern rtx        gen_vec_splatv4sf                       (rtx, rtx, rtx);
extern rtx        gen_vec_splatv1tf                       (rtx, rtx, rtx);
extern rtx        gen_vec_splattf                         (rtx, rtx, rtx);
extern rtx        gen_vec_scatter_elementv4si             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_scatter_elementv2di             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_scatter_elementv2df             (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_scatter_elementv4sf             (rtx, rtx, rtx, rtx);
extern rtx        gen_vstrlrv16qi                         (rtx, rtx, rtx);
extern rtx        gen_vec_all_eqv16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_nev16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_gtv16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_gev16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_ltv16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_lev16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_gtuv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_all_geuv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_all_ltuv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_all_leuv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_all_eqv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_nev8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_gtv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_gev8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_ltv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_lev8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_gtuv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_geuv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_ltuv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_leuv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_eqv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_nev4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_gtv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_gev4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_ltv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_lev4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_gtuv4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_geuv4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_ltuv4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_leuv4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_eqv2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_nev2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_gtv2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_gev2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_ltv2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_lev2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_gtuv2di                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_geuv2di                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_ltuv2di                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_leuv2di                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_eqv16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_nev16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_gtv16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_gev16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_ltv16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_lev16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_gtuv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_any_geuv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_any_ltuv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_any_leuv16qi                    (rtx, rtx, rtx);
extern rtx        gen_vec_any_eqv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_nev8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_gtv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_gev8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_ltv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_lev8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_gtuv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_geuv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_ltuv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_leuv8hi                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_eqv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_nev4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_gtv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_gev4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_ltv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_lev4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_gtuv4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_geuv4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_ltuv4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_leuv4si                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_eqv2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_nev2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_gtv2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_gev2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_ltv2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_lev2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_gtuv2di                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_geuv2di                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_ltuv2di                     (rtx, rtx, rtx);
extern rtx        gen_vec_any_leuv2di                     (rtx, rtx, rtx);
extern rtx        gen_vec_all_eqv4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_nev4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_gtv4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_gev4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_unlev4sf                    (rtx, rtx, rtx);
extern rtx        gen_vec_all_unltv4sf                    (rtx, rtx, rtx);
extern rtx        gen_vec_all_ltv4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_lev4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_eqv2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_nev2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_gtv2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_gev2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_unlev2df                    (rtx, rtx, rtx);
extern rtx        gen_vec_all_unltv2df                    (rtx, rtx, rtx);
extern rtx        gen_vec_all_ltv2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_all_lev2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_eqv4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_nev4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_gtv4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_gev4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_unlev4sf                    (rtx, rtx, rtx);
extern rtx        gen_vec_any_unltv4sf                    (rtx, rtx, rtx);
extern rtx        gen_vec_any_ltv4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_lev4sf                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_eqv2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_nev2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_gtv2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_gev2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_unlev2df                    (rtx, rtx, rtx);
extern rtx        gen_vec_any_unltv2df                    (rtx, rtx, rtx);
extern rtx        gen_vec_any_ltv2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_any_lev2df                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv16qi                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtv16qi                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtuv16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgev16qi                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgeuv16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltv16qi                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltuv16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmplev16qi                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpleuv16qi                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv8hi                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtv8hi                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtuv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgev8hi                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgeuv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltv8hi                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltuv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmplev8hi                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpleuv8hi                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv4si                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtv4si                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtuv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgev4si                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgeuv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltv4si                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltuv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmplev4si                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpleuv4si                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv2di                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtv2di                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtuv2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgev2di                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgeuv2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltv2di                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltuv2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmplev2di                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpleuv2di                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv4sf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtv4sf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgev4sf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltv4sf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmplev4sf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv2df                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtv2df                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgev2df                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltv2df                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmplev2df                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv1tf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgtv1tf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgev1tf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltv1tf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmplev1tf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqtf                         (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgttf                         (rtx, rtx, rtx);
extern rtx        gen_vec_cmpgetf                         (rtx, rtx, rtx);
extern rtx        gen_vec_cmplttf                         (rtx, rtx, rtx);
extern rtx        gen_vec_cmpletf                         (rtx, rtx, rtx);
extern rtx        gen_vec_slbv16qi                        (rtx, rtx, rtx);
extern rtx        gen_vec_slbv8hi                         (rtx, rtx, rtx);
extern rtx        gen_vec_slbv4si                         (rtx, rtx, rtx);
extern rtx        gen_vec_slbv2di                         (rtx, rtx, rtx);
extern rtx        gen_vec_slbv1ti                         (rtx, rtx, rtx);
extern rtx        gen_vec_slbv2df                         (rtx, rtx, rtx);
extern rtx        gen_vec_slbv4sf                         (rtx, rtx, rtx);
extern rtx        gen_vec_slbv1tf                         (rtx, rtx, rtx);
extern rtx        gen_vec_slbtf                           (rtx, rtx, rtx);
extern rtx        gen_vec_sldwv16qi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldwv8hi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldwv4si                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldwv2di                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldwv1ti                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldwv2df                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldwv4sf                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldwv1tf                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_sldwtf                          (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_srbv16qi                        (rtx, rtx, rtx);
extern rtx        gen_vec_srbv8hi                         (rtx, rtx, rtx);
extern rtx        gen_vec_srbv4si                         (rtx, rtx, rtx);
extern rtx        gen_vec_srbv2di                         (rtx, rtx, rtx);
extern rtx        gen_vec_srbv1ti                         (rtx, rtx, rtx);
extern rtx        gen_vec_srbv2df                         (rtx, rtx, rtx);
extern rtx        gen_vec_srbv4sf                         (rtx, rtx, rtx);
extern rtx        gen_vec_srbv1tf                         (rtx, rtx, rtx);
extern rtx        gen_vec_srbtf                           (rtx, rtx, rtx);
extern rtx        gen_vec_sum2v8hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_sum2v4si                        (rtx, rtx, rtx);
extern rtx        gen_vec_sum4v16qi                       (rtx, rtx, rtx);
extern rtx        gen_vec_sum4v8hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_test_mask_intv16qi              (rtx, rtx, rtx);
extern rtx        gen_vec_test_mask_intv8hi               (rtx, rtx, rtx);
extern rtx        gen_vec_test_mask_intv4si               (rtx, rtx, rtx);
extern rtx        gen_vec_test_mask_intv2di               (rtx, rtx, rtx);
extern rtx        gen_vec_test_mask_intv1ti               (rtx, rtx, rtx);
extern rtx        gen_vec_test_mask_intv2df               (rtx, rtx, rtx);
extern rtx        gen_vec_test_mask_intv4sf               (rtx, rtx, rtx);
extern rtx        gen_vec_test_mask_intv1tf               (rtx, rtx, rtx);
extern rtx        gen_vec_test_mask_inttf                 (rtx, rtx, rtx);
extern rtx        gen_vfaezv16qi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_vfaezv8hi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vfaezv4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vfaesv16qi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfaesv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfaesv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfaezsv16qi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfaezsv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfaezsv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vfeesv16qi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_vfeesv8hi                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vfeesv4si                           (rtx, rtx, rtx, rtx);
extern rtx        gen_vfeezsv16qi                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vfeezsv8hi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_vfeezsv4si                          (rtx, rtx, rtx, rtx);
extern rtx        gen_vfenesv16qi                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vfenesv8hi                          (rtx, rtx, rtx, rtx);
extern rtx        gen_vfenesv4si                          (rtx, rtx, rtx, rtx);
extern rtx        gen_vfenezsv16qi                        (rtx, rtx, rtx, rtx);
extern rtx        gen_vfenezsv8hi                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vfenezsv4si                         (rtx, rtx, rtx, rtx);
extern rtx        gen_vistrsv16qi                         (rtx, rtx, rtx);
extern rtx        gen_vistrsv8hi                          (rtx, rtx, rtx);
extern rtx        gen_vistrsv4si                          (rtx, rtx, rtx);
extern rtx        gen_vstrczv16qi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrczv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrczv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrcsv16qi                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrcsv8hi                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrcsv4si                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrczsv16qi                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrczsv8hi                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrczsv4si                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrsv16qi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrsv8hi                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrsv4si                           (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrszv16qi                         (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrszv8hi                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vstrszv4si                          (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vec_ctd_s64                         (rtx, rtx, rtx);
extern rtx        gen_vec_ctd_u64                         (rtx, rtx, rtx);
extern rtx        gen_vec_ctsl                            (rtx, rtx, rtx);
extern rtx        gen_vec_ctul                            (rtx, rtx, rtx);
extern rtx        gen_vec_ld2f                            (rtx, rtx);
extern rtx        gen_vec_st2f                            (rtx, rtx);
extern rtx        gen_vftciv4sf_intcconly                 (rtx, rtx, rtx);
extern rtx        gen_vftciv2df_intcconly                 (rtx, rtx, rtx);
extern rtx        gen_vftciv1tf_intcconly                 (rtx, rtx, rtx);
extern rtx        gen_vftcitf_intcconly                   (rtx, rtx, rtx);
extern rtx        gen_vftciv4sf_intcc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vftciv2df_intcc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vftciv1tf_intcc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vftcitf_intcc                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv16qi_cc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv8hi_cc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv4si_cc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv2di_cc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphv16qi_cc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphv8hi_cc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphv4si_cc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphv2di_cc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphlv16qi_cc                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphlv8hi_cc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphlv4si_cc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphlv2di_cc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv4sf_cc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv2df_cc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqv1tf_cc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpeqtf_cc                      (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphv4sf_cc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphv2df_cc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphv1tf_cc                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphtf_cc                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphev4sf_cc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphev2df_cc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphev1tf_cc                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmphetf_cc                      (rtx, rtx, rtx, rtx);
extern rtx        gen_movtf                               (rtx, rtx);
extern rtx        gen_vec_setv1qi                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv2qi                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv4qi                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv8qi                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv16qi                        (rtx, rtx, rtx);
extern rtx        gen_vec_setv1hi                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv2hi                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv4hi                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv8hi                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv1si                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv2si                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv4si                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv1di                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv2di                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv1sf                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv2sf                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv4sf                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv1df                         (rtx, rtx, rtx);
extern rtx        gen_vec_setv2df                         (rtx, rtx, rtx);
extern rtx        gen_vec_extractv1qiqi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2qiqi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4qiqi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv8qiqi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv16qiqi                  (rtx, rtx, rtx);
extern rtx        gen_vec_extractv1hihi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2hihi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4hihi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv8hihi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv1sisi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2sisi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4sisi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv1didi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2didi                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv1sfsf                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2sfsf                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv4sfsf                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv1dfdf                   (rtx, rtx, rtx);
extern rtx        gen_vec_extractv2dfdf                   (rtx, rtx, rtx);
extern rtx        gen_vec_initv16qiqi                     (rtx, rtx);
extern rtx        gen_vec_initv8hihi                      (rtx, rtx);
extern rtx        gen_vec_initv4sisi                      (rtx, rtx);
extern rtx        gen_vec_initv4sfsf                      (rtx, rtx);
extern rtx        gen_vec_initv2didi                      (rtx, rtx);
extern rtx        gen_vec_initv2dfdf                      (rtx, rtx);
extern rtx        gen_vec_initv1titi                      (rtx, rtx);
extern rtx        gen_vec_initv1tftf                      (rtx, rtx);
extern rtx        gen_vec_inittftf                        (rtx, rtx);
extern rtx        gen_vcondv16qiv16qi                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv8hiv16qi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4siv16qi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2div16qi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tiv16qi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2dfv16qi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4sfv16qi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tfv16qi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondtfv16qi                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv16qiv8hi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv8hiv8hi                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4siv8hi                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2div8hi                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tiv8hi                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2dfv8hi                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4sfv8hi                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tfv8hi                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondtfv8hi                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv16qiv4si                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv8hiv4si                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4siv4si                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2div4si                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tiv4si                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2dfv4si                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4sfv4si                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tfv4si                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondtfv4si                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv16qiv2di                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv8hiv2di                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4siv2di                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2div2di                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tiv2di                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2dfv2di                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4sfv2di                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tfv2di                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondtfv2di                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv16qiv2df                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv8hiv2df                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4siv2df                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2div2df                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tiv2df                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2dfv2df                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4sfv2df                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tfv2df                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondtfv2df                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv16qiv4sf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv8hiv4sf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4siv4sf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2div4sf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tiv4sf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2dfv4sf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4sfv4sf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tfv4sf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondtfv4sf                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv16qiv1tf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv8hiv1tf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4siv1tf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2div1tf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tiv1tf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2dfv1tf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4sfv1tf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tfv1tf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondtfv1tf                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv16qitf                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv8hitf                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4sitf                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2ditf                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1titf                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv2dftf                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv4sftf                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondv1tftf                         (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondtftf                           (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv16qiv16qi                    (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv8hiv16qi                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4siv16qi                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2div16qi                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tiv16qi                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2dfv16qi                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4sfv16qi                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tfv16qi                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondutfv16qi                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv16qiv8hi                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv8hiv8hi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4siv8hi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2div8hi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tiv8hi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2dfv8hi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4sfv8hi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tfv8hi                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondutfv8hi                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv16qiv4si                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv8hiv4si                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4siv4si                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2div4si                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tiv4si                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2dfv4si                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4sfv4si                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tfv4si                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondutfv4si                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv16qiv2di                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv8hiv2di                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4siv2di                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2div2di                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tiv2di                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2dfv2di                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4sfv2di                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tfv2di                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondutfv2di                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv16qiv2df                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv8hiv2df                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4siv2df                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2div2df                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tiv2df                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2dfv2df                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4sfv2df                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tfv2df                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondutfv2df                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv16qiv4sf                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv8hiv4sf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4siv4sf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2div4sf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tiv4sf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2dfv4sf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4sfv4sf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tfv4sf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondutfv4sf                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv16qiv1tf                     (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv8hiv1tf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4siv1tf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2div1tf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tiv1tf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2dfv1tf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4sfv1tf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tfv1tf                      (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondutfv1tf                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv16qitf                       (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv8hitf                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4sitf                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2ditf                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1titf                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv2dftf                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv4sftf                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vconduv1tftf                        (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcondutftf                          (rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v1qiv1qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v2qiv2qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v4qiv4qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v8qiv8qi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v16qiv16qi               (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v1hiv1hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v2hiv2hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v4hiv4hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v8hiv8hi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v1siv1si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v2siv2si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v4siv4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v1div1di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v2div2di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v1sfv1si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v2sfv2si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v4sfv4si                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v1dfv1di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_vcond_mask_v2dfv2di                 (rtx, rtx, rtx, rtx);
extern rtx        gen_eltswapv16qi                        (rtx, rtx);
extern rtx        gen_popcountv16qi2                      (rtx, rtx);
extern rtx        gen_popcountv8hi2                       (rtx, rtx);
extern rtx        gen_popcountv4si2                       (rtx, rtx);
extern rtx        gen_popcountv2di2                       (rtx, rtx);
extern rtx        gen_popcountv8hi2_vx                    (rtx, rtx);
extern rtx        gen_popcountv4si2_vx                    (rtx, rtx);
extern rtx        gen_popcountv2di2_vx                    (rtx, rtx);
extern rtx        gen_ashlv1qi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrv1qi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrv1qi3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv1qi3                           (rtx, rtx, rtx);
extern rtx        gen_ashlv2qi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrv2qi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrv2qi3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv2qi3                           (rtx, rtx, rtx);
extern rtx        gen_ashlv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv4qi3                           (rtx, rtx, rtx);
extern rtx        gen_ashlv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv8qi3                           (rtx, rtx, rtx);
extern rtx        gen_ashlv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_ashrv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_lshrv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_rotlv16qi3                          (rtx, rtx, rtx);
extern rtx        gen_ashlv1hi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrv1hi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrv1hi3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv1hi3                           (rtx, rtx, rtx);
extern rtx        gen_ashlv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv2hi3                           (rtx, rtx, rtx);
extern rtx        gen_ashlv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv4hi3                           (rtx, rtx, rtx);
extern rtx        gen_ashlv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_ashrv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_lshrv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv8hi3                           (rtx, rtx, rtx);
extern rtx        gen_ashlv1si3                           (rtx, rtx, rtx);
extern rtx        gen_ashrv1si3                           (rtx, rtx, rtx);
extern rtx        gen_lshrv1si3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv1si3                           (rtx, rtx, rtx);
extern rtx        gen_ashlv2si3                           (rtx, rtx, rtx);
extern rtx        gen_ashrv2si3                           (rtx, rtx, rtx);
extern rtx        gen_lshrv2si3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv2si3                           (rtx, rtx, rtx);
extern rtx        gen_ashlv4si3                           (rtx, rtx, rtx);
extern rtx        gen_ashrv4si3                           (rtx, rtx, rtx);
extern rtx        gen_lshrv4si3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv4si3                           (rtx, rtx, rtx);
extern rtx        gen_ashlv1di3                           (rtx, rtx, rtx);
extern rtx        gen_ashrv1di3                           (rtx, rtx, rtx);
extern rtx        gen_lshrv1di3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv1di3                           (rtx, rtx, rtx);
extern rtx        gen_ashlv2di3                           (rtx, rtx, rtx);
extern rtx        gen_ashrv2di3                           (rtx, rtx, rtx);
extern rtx        gen_lshrv2di3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv2di3                           (rtx, rtx, rtx);
extern rtx        gen_rotlv4si3_di                        (rtx, rtx);
extern rtx        gen_rotlv4sf3_di                        (rtx, rtx);
extern rtx        gen_vec_shr_v16qi                       (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v8hi                        (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v4si                        (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v4sf                        (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v2di                        (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v2df                        (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v1ti                        (rtx, rtx, rtx);
extern rtx        gen_vec_shr_v1tf                        (rtx, rtx, rtx);
extern rtx        gen_vec_shr_tf                          (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v1qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v2qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v4qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v8qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v16qi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v1hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v2hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v4hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v8hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v1si             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v2si             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_lo_v4si             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v1qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v2qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v4qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v8qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v16qi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v1hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v2hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v4hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v8hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v1si             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v2si             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_umult_hi_v4si             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v1qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v2qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v4qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v8qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v16qi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v1hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v2hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v4hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v8hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v1si             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v2si             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_lo_v4si             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v1qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v2qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v4qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v8qi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v16qi            (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v1hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v2hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v4hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v8hi             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v1si             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v2si             (rtx, rtx, rtx);
extern rtx        gen_vec_widen_smult_hi_v4si             (rtx, rtx, rtx);
extern rtx        gen_addtf3                              (rtx, rtx, rtx);
extern rtx        gen_subtf3                              (rtx, rtx, rtx);
extern rtx        gen_multf3                              (rtx, rtx, rtx);
extern rtx        gen_divtf3                              (rtx, rtx, rtx);
extern rtx        gen_sqrttf2                             (rtx, rtx);
extern rtx        gen_negtf2                              (rtx, rtx);
extern rtx        gen_abstf2                              (rtx, rtx);
extern rtx        gen_smaxv4sf3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv2df3                           (rtx, rtx, rtx);
extern rtx        gen_smaxv1tf3                           (rtx, rtx, rtx);
extern rtx        gen_smaxtf3                             (rtx, rtx, rtx);
extern rtx        gen_sminv4sf3                           (rtx, rtx, rtx);
extern rtx        gen_sminv2df3                           (rtx, rtx, rtx);
extern rtx        gen_sminv1tf3                           (rtx, rtx, rtx);
extern rtx        gen_smintf3                             (rtx, rtx, rtx);
extern rtx        gen_copysignv1sf3                       (rtx, rtx, rtx);
extern rtx        gen_copysignv2sf3                       (rtx, rtx, rtx);
extern rtx        gen_copysignv4sf3                       (rtx, rtx, rtx);
extern rtx        gen_copysignv1df3                       (rtx, rtx, rtx);
extern rtx        gen_copysignv2df3                       (rtx, rtx, rtx);
extern rtx        gen_copysignv1tf3                       (rtx, rtx, rtx);
extern rtx        gen_copysigntf3                         (rtx, rtx, rtx);
extern rtx        gen_vec_cmpv16qiv16qi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv8hiv8hi                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv4siv4si                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv2div2di                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv1tiv1ti                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv2dfv2di                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv4sfv4si                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpv1tfv1ti                     (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmptfv1ti                       (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpuv16qiv16qi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpuv8hiv8hi                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpuv4siv4si                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpuv2div2di                    (rtx, rtx, rtx, rtx);
extern rtx        gen_vec_cmpltv1sf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltv2sf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltv4sf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltv1df_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltv2df_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltv1tf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmplttf_quiet_nocc              (rtx, rtx, rtx);
extern rtx        gen_vec_cmplev1sf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmplev2sf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmplev4sf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmplev1df_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmplev2df_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmplev1tf_quiet_nocc            (rtx, rtx, rtx);
extern rtx        gen_vec_cmpletf_quiet_nocc              (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungtv1sf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungtv2sf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungtv4sf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungtv1df                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungtv2df                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungtv1tf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungttf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungev1sf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungev2sf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungev4sf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungev1df                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungev2df                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungev1tf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungetf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpuneqv1sf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpuneqv2sf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpuneqv4sf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpuneqv1df                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpuneqv2df                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpuneqv1tf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpuneqtf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltgtv1sf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltgtv2sf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltgtv4sf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltgtv1df                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltgtv2df                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltgtv1tf                     (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltgttf                       (rtx, rtx, rtx);
extern rtx        gen_vec_cmporderedv1sf                  (rtx, rtx, rtx);
extern rtx        gen_vec_cmporderedv2sf                  (rtx, rtx, rtx);
extern rtx        gen_vec_cmporderedv4sf                  (rtx, rtx, rtx);
extern rtx        gen_vec_cmporderedv1df                  (rtx, rtx, rtx);
extern rtx        gen_vec_cmporderedv2df                  (rtx, rtx, rtx);
extern rtx        gen_vec_cmporderedv1tf                  (rtx, rtx, rtx);
extern rtx        gen_vec_cmporderedtf                    (rtx, rtx, rtx);
extern rtx        gen_vec_cmpunorderedv1sf                (rtx, rtx, rtx);
extern rtx        gen_vec_cmpunorderedv2sf                (rtx, rtx, rtx);
extern rtx        gen_vec_cmpunorderedv4sf                (rtx, rtx, rtx);
extern rtx        gen_vec_cmpunorderedv1df                (rtx, rtx, rtx);
extern rtx        gen_vec_cmpunorderedv2df                (rtx, rtx, rtx);
extern rtx        gen_vec_cmpunorderedv1tf                (rtx, rtx, rtx);
extern rtx        gen_vec_cmpunorderedtf                  (rtx, rtx, rtx);
extern rtx        gen_vec_cmpungt                         (rtx, rtx, rtx);
extern rtx        gen_vec_cmpunge                         (rtx, rtx, rtx);
extern rtx        gen_vec_cmpuneq                         (rtx, rtx, rtx);
extern rtx        gen_vec_cmpltgt                         (rtx, rtx, rtx);
extern rtx        gen_vec_cmpordered                      (rtx, rtx, rtx);
extern rtx        gen_vec_cmpunordered                    (rtx, rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v4sf                 (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v4sf                 (rtx, rtx);
extern rtx        gen_vec_unpacks_lo_v2df                 (rtx, rtx);
extern rtx        gen_vec_unpacks_hi_v2df                 (rtx, rtx);
extern rtx        gen_vec_pack_trunc_v2df                 (rtx, rtx, rtx);
extern rtx        gen_floatditf2_vr                       (rtx, rtx);
extern rtx        gen_floatsitf2_vr                       (rtx, rtx);
extern rtx        gen_floatditf2                          (rtx, rtx);
extern rtx        gen_floatsitf2                          (rtx, rtx);
extern rtx        gen_floatunsditf2_vr                    (rtx, rtx);
extern rtx        gen_floatunssitf2_vr                    (rtx, rtx);
extern rtx        gen_floatunsditf2                       (rtx, rtx);
extern rtx        gen_floatunssitf2                       (rtx, rtx);
extern rtx        gen_fix_trunctfdi2_vr                   (rtx, rtx);
extern rtx        gen_fix_trunctfsi2_vr                   (rtx, rtx);
extern rtx        gen_fix_trunctfdi2                      (rtx, rtx);
extern rtx        gen_fix_trunctfsi2                      (rtx, rtx);
extern rtx        gen_fixuns_trunctfdi2_vr                (rtx, rtx);
extern rtx        gen_fixuns_trunctfsi2_vr                (rtx, rtx);
extern rtx        gen_fixuns_trunctfdi2                   (rtx, rtx);
extern rtx        gen_fixuns_trunctfsi2                   (rtx, rtx);
extern rtx        gen_floortf2                            (rtx, rtx);
extern rtx        gen_btrunctf2                           (rtx, rtx);
extern rtx        gen_roundtf2                            (rtx, rtx);
extern rtx        gen_ceiltf2                             (rtx, rtx);
extern rtx        gen_nearbyinttf2                        (rtx, rtx);
extern rtx        gen_rinttf2                             (rtx, rtx);
extern rtx        gen_trunctfdf2_vr                       (rtx, rtx);
extern rtx        gen_trunctfdf2                          (rtx, rtx);
extern rtx        gen_trunctfsf2_vr                       (rtx, rtx);
extern rtx        gen_trunctfsf2                          (rtx, rtx);
extern rtx        gen_trunctftd2_vr                       (rtx, rtx);
extern rtx        gen_trunctfdd2_vr                       (rtx, rtx);
extern rtx        gen_trunctfsd2_vr                       (rtx, rtx);
extern rtx        gen_trunctftd2                          (rtx, rtx);
extern rtx        gen_trunctfdd2                          (rtx, rtx);
extern rtx        gen_trunctfsd2                          (rtx, rtx);
extern rtx        gen_trunctdtf2_vr                       (rtx, rtx);
extern rtx        gen_trunctdtf2                          (rtx, rtx);
extern rtx        gen_extenddftf2                         (rtx, rtx);
extern rtx        gen_extendsftf2_vr                      (rtx, rtx);
extern rtx        gen_extendsftf2                         (rtx, rtx);
extern rtx        gen_extendtdtf2_vr                      (rtx, rtx);
extern rtx        gen_extendddtf2_vr                      (rtx, rtx);
extern rtx        gen_extendsdtf2_vr                      (rtx, rtx);
extern rtx        gen_extendtdtf2                         (rtx, rtx);
extern rtx        gen_extendddtf2                         (rtx, rtx);
extern rtx        gen_extendsdtf2                         (rtx, rtx);
extern rtx        gen_extendtftd2_vr                      (rtx, rtx);
extern rtx        gen_extendtftd2                         (rtx, rtx);
extern rtx        gen_signbittf2_vr                       (rtx, rtx);
extern rtx        gen_signbittf2                          (rtx, rtx);
extern rtx        gen_isinftf2_vr                         (rtx, rtx);
extern rtx        gen_isinftf2                            (rtx, rtx);
extern rtx        gen_bswapv8hi                           (rtx, rtx);
extern rtx        gen_bswapv4si                           (rtx, rtx);
extern rtx        gen_bswapv4sf                           (rtx, rtx);
extern rtx        gen_bswapv2di                           (rtx, rtx);
extern rtx        gen_bswapv2df                           (rtx, rtx);
extern rtx        gen_bswapv1ti                           (rtx, rtx);
extern rtx        gen_bswapv1tf                           (rtx, rtx);
extern rtx        gen_bswapti                             (rtx, rtx);
extern rtx        gen_bswaptf                             (rtx, rtx);
extern rtx        gen_len_load_v16qi                      (rtx, rtx, rtx, rtx);
extern rtx        gen_len_store_v16qi                     (rtx, rtx, rtx, rtx);
extern rtx        gen_reloadtidi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadtisi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloaddidi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloaddisi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadsidi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadsisi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadhidi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadhisi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadqidi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadqisi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadtfdi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadtfsi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadfprx2di_tomem_z10             (rtx, rtx, rtx);
extern rtx        gen_reloadfprx2si_tomem_z10             (rtx, rtx, rtx);
extern rtx        gen_reloaddfdi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloaddfsi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadsfdi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadsfsi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadtddi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadtdsi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloaddddi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadddsi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadsddi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadsdsi_tomem_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadv1qidi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1qisi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2qidi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2qisi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4qidi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4qisi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv8qidi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv8qisi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv16qidi_tomem_z10             (rtx, rtx, rtx);
extern rtx        gen_reloadv16qisi_tomem_z10             (rtx, rtx, rtx);
extern rtx        gen_reloadv1hidi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1hisi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2hidi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2hisi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4hidi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4hisi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv8hidi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv8hisi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1sidi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1sisi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2sidi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2sisi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4sidi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4sisi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1didi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1disi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2didi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2disi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1sfdi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1sfsi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2sfdi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2sfsi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4sfdi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4sfsi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1tidi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1tisi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1dfdi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1dfsi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2dfdi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2dfsi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1tfdi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1tfsi_tomem_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadtidi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadtisi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloaddidi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloaddisi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadsidi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadsisi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadhidi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadhisi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadqidi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadqisi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadtfdi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadtfsi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadfprx2di_toreg_z10             (rtx, rtx, rtx);
extern rtx        gen_reloadfprx2si_toreg_z10             (rtx, rtx, rtx);
extern rtx        gen_reloaddfdi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloaddfsi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadsfdi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadsfsi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadtddi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadtdsi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloaddddi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadddsi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadsddi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadsdsi_toreg_z10                (rtx, rtx, rtx);
extern rtx        gen_reloadv1qidi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1qisi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2qidi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2qisi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4qidi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4qisi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv8qidi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv8qisi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv16qidi_toreg_z10             (rtx, rtx, rtx);
extern rtx        gen_reloadv16qisi_toreg_z10             (rtx, rtx, rtx);
extern rtx        gen_reloadv1hidi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1hisi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2hidi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2hisi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4hidi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4hisi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv8hidi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv8hisi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1sidi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1sisi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2sidi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2sisi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4sidi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4sisi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1didi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1disi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2didi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2disi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1sfdi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1sfsi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2sfdi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2sfsi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4sfdi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv4sfsi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1tidi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1tisi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1dfdi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1dfsi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2dfdi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv2dfsi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1tfdi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloadv1tfsi_toreg_z10              (rtx, rtx, rtx);
extern rtx        gen_reloaddi_larl_odd_addend_z10        (rtx, rtx, rtx);
extern rtx        gen_reloadsi_larl_odd_addend_z10        (rtx, rtx, rtx);
extern rtx        gen_reloaddi_plus                       (rtx, rtx, rtx);
extern rtx        gen_reloadsi_plus                       (rtx, rtx, rtx);
extern rtx        gen_reloaddi_la_in                      (rtx, rtx, rtx);
extern rtx        gen_reloadsi_la_in                      (rtx, rtx, rtx);
extern rtx        gen_reloaddi_la_out                     (rtx, rtx, rtx);
extern rtx        gen_reloadsi_la_out                     (rtx, rtx, rtx);
extern rtx        gen_reloaddi_PIC_addr                   (rtx, rtx, rtx);
extern rtx        gen_reloadsi_PIC_addr                   (rtx, rtx, rtx);
extern rtx        gen_movdi                               (rtx, rtx);
extern rtx        gen_movsi                               (rtx, rtx);
extern rtx        gen_movhi                               (rtx, rtx);
extern rtx        gen_movqi                               (rtx, rtx);
extern rtx        gen_movtf_fpr                           (rtx, rtx);
extern rtx        gen_movfprx2                            (rtx, rtx);
extern rtx        gen_movtd                               (rtx, rtx);
extern rtx        gen_movdf                               (rtx, rtx);
extern rtx        gen_movdd                               (rtx, rtx);
extern rtx        gen_load_multiple                       (rtx, rtx, rtx);
extern rtx        gen_store_multiple                      (rtx, rtx, rtx);
extern rtx        gen_strlendi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_strlensi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_strlen_srstdi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_strlen_srstsi                       (rtx, rtx, rtx, rtx);
extern rtx        gen_cmpstrsi                            (rtx, rtx, rtx, rtx);
extern rtx        gen_movstr                              (rtx, rtx, rtx);
extern rtx        gen_movstrdi                            (rtx, rtx, rtx);
extern rtx        gen_movstrsi                            (rtx, rtx, rtx);
extern rtx        gen_cpymemdi                            (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cpymemsi                            (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cpymem_short                        (rtx, rtx, rtx);
extern rtx        gen_cpymem_long                         (rtx, rtx, rtx);
extern rtx        gen_movmemdi                            (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_movmemsi                            (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_mvcrl                               (rtx, rtx, rtx);
extern rtx        gen_signbittf2_fpr                      (rtx, rtx);
extern rtx        gen_signbitfprx22                       (rtx, rtx);
extern rtx        gen_signbitdf2                          (rtx, rtx);
extern rtx        gen_signbitsf2                          (rtx, rtx);
extern rtx        gen_signbittd2                          (rtx, rtx);
extern rtx        gen_signbitdd2                          (rtx, rtx);
extern rtx        gen_signbitsd2                          (rtx, rtx);
extern rtx        gen_isinftf2_fpr                        (rtx, rtx);
extern rtx        gen_isinffprx22                         (rtx, rtx);
extern rtx        gen_isinfdf2                            (rtx, rtx);
extern rtx        gen_isinfsf2                            (rtx, rtx);
extern rtx        gen_isinftd2                            (rtx, rtx);
extern rtx        gen_isinfdd2                            (rtx, rtx);
extern rtx        gen_isinfsd2                            (rtx, rtx);
extern rtx        gen_setmemdi                            (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_setmemsi                            (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_clrmem_short                        (rtx, rtx);
extern rtx        gen_setmem_long_di                      (rtx, rtx, rtx);
extern rtx        gen_setmem_long_si                      (rtx, rtx, rtx);
extern rtx        gen_cmpmemsi                            (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_cmpmem_short                        (rtx, rtx, rtx);
extern rtx        gen_cmpmem_long                         (rtx, rtx, rtx);
extern rtx        gen_extzv                               (rtx, rtx, rtx, rtx);
extern rtx        gen_insv                                (rtx, rtx, rtx, rtx);
extern rtx        gen_extendsidi2                         (rtx, rtx);
extern rtx        gen_extendhidi2                         (rtx, rtx);
extern rtx        gen_extendqidi2                         (rtx, rtx);
extern rtx        gen_extendhisi2                         (rtx, rtx);
extern rtx        gen_extendqisi2                         (rtx, rtx);
extern rtx        gen_zero_extendsidi2                    (rtx, rtx);
extern rtx        gen_zero_extendhidi2                    (rtx, rtx);
extern rtx        gen_zero_extendqidi2                    (rtx, rtx);
extern rtx        gen_zero_extendhisi2                    (rtx, rtx);
extern rtx        gen_zero_extendqisi2                    (rtx, rtx);
extern rtx        gen_zero_extendqihi2                    (rtx, rtx);
extern rtx        gen_fixuns_trunctfdi2_fpr               (rtx, rtx);
extern rtx        gen_fixuns_trunctfsi2_fpr               (rtx, rtx);
extern rtx        gen_fixuns_truncfprx2di2                (rtx, rtx);
extern rtx        gen_fixuns_truncfprx2si2                (rtx, rtx);
extern rtx        gen_fixuns_truncdfdi2                   (rtx, rtx);
extern rtx        gen_fixuns_truncdfsi2                   (rtx, rtx);
extern rtx        gen_fixuns_truncsfdi2                   (rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2                   (rtx, rtx);
extern rtx        gen_fixuns_trunctddi2                   (rtx, rtx);
extern rtx        gen_fixuns_trunctdsi2                   (rtx, rtx);
extern rtx        gen_fixuns_truncdddi2                   (rtx, rtx);
extern rtx        gen_fixuns_truncddsi2                   (rtx, rtx);
extern rtx        gen_fixuns_trunctfdi2_emu               (rtx, rtx);
extern rtx        gen_fixuns_trunctfsi2_emu               (rtx, rtx);
extern rtx        gen_fixuns_truncfprx2di2_emu            (rtx, rtx);
extern rtx        gen_fixuns_truncfprx2si2_emu            (rtx, rtx);
extern rtx        gen_fixuns_truncdfdi2_emu               (rtx, rtx);
extern rtx        gen_fixuns_truncdfsi2_emu               (rtx, rtx);
extern rtx        gen_fixuns_truncsfdi2_emu               (rtx, rtx);
extern rtx        gen_fixuns_truncsfsi2_emu               (rtx, rtx);
extern rtx        gen_fixuns_truncdddi2_emu               (rtx, rtx);
extern rtx        gen_fixuns_trunctddi2_emu               (rtx, rtx);
extern rtx        gen_fixuns_trunctdsi2_emu               (rtx, rtx);
extern rtx        gen_fixuns_truncddsi2_emu               (rtx, rtx);
extern rtx        gen_fix_truncdfdi2                      (rtx, rtx);
extern rtx        gen_fix_truncdfsi2                      (rtx, rtx);
extern rtx        gen_fix_truncsfdi2                      (rtx, rtx);
extern rtx        gen_fix_truncsfsi2                      (rtx, rtx);
extern rtx        gen_fix_trunctfdi2_bfp                  (rtx, rtx, rtx);
extern rtx        gen_fix_trunctfsi2_bfp                  (rtx, rtx, rtx);
extern rtx        gen_fix_truncfprx2di2_bfp               (rtx, rtx, rtx);
extern rtx        gen_fix_truncfprx2si2_bfp               (rtx, rtx, rtx);
extern rtx        gen_fix_truncdfdi2_bfp                  (rtx, rtx, rtx);
extern rtx        gen_fix_truncdfsi2_bfp                  (rtx, rtx, rtx);
extern rtx        gen_fix_truncsfdi2_bfp                  (rtx, rtx, rtx);
extern rtx        gen_fix_truncsfsi2_bfp                  (rtx, rtx, rtx);
extern rtx        gen_fix_trunctddi2                      (rtx, rtx);
extern rtx        gen_fix_truncdddi2                      (rtx, rtx);
extern rtx        gen_fix_trunctfdi2_fpr                  (rtx, rtx);
extern rtx        gen_fix_trunctfsi2_fpr                  (rtx, rtx);
extern rtx        gen_floatunsditf2_fpr                   (rtx, rtx);
extern rtx        gen_floatunssitf2_fpr                   (rtx, rtx);
extern rtx        gen_floatunsdifprx22                    (rtx, rtx);
extern rtx        gen_floatunssifprx22                    (rtx, rtx);
extern rtx        gen_floatunsdidf2                       (rtx, rtx);
extern rtx        gen_floatunssidf2                       (rtx, rtx);
extern rtx        gen_floatunsdisf2                       (rtx, rtx);
extern rtx        gen_floatunssisf2                       (rtx, rtx);
extern rtx        gen_floatunsditd2                       (rtx, rtx);
extern rtx        gen_floatunssitd2                       (rtx, rtx);
extern rtx        gen_floatunsdidd2                       (rtx, rtx);
extern rtx        gen_floatunssidd2                       (rtx, rtx);
extern rtx        gen_trunctddd2                          (rtx, rtx);
extern rtx        gen_trunctdsd2                          (rtx, rtx);
extern rtx        gen_extenddftf2_fpr                     (rtx, rtx);
extern rtx        gen_extenddffprx22                      (rtx, rtx);
extern rtx        gen_extenddfdf2                         (rtx, rtx);
extern rtx        gen_extenddfsf2                         (rtx, rtx);
extern rtx        gen_extendsftf2_fpr                     (rtx, rtx);
extern rtx        gen_extendsffprx22                      (rtx, rtx);
extern rtx        gen_extendsfdf2                         (rtx, rtx);
extern rtx        gen_extendsfsf2                         (rtx, rtx);
extern rtx        gen_extendsdtd2                         (rtx, rtx);
extern rtx        gen_trunctftd2_fpr                      (rtx, rtx);
extern rtx        gen_truncfprx2td2                       (rtx, rtx);
extern rtx        gen_truncdftd2                          (rtx, rtx);
extern rtx        gen_truncsftd2                          (rtx, rtx);
extern rtx        gen_trunctfdd2_fpr                      (rtx, rtx);
extern rtx        gen_truncfprx2dd2                       (rtx, rtx);
extern rtx        gen_truncdfdd2                          (rtx, rtx);
extern rtx        gen_truncsfdd2                          (rtx, rtx);
extern rtx        gen_trunctfsd2_fpr                      (rtx, rtx);
extern rtx        gen_truncfprx2sd2                       (rtx, rtx);
extern rtx        gen_truncdfsd2                          (rtx, rtx);
extern rtx        gen_truncsfsd2                          (rtx, rtx);
extern rtx        gen_trunctdtf2_fpr                      (rtx, rtx);
extern rtx        gen_trunctdfprx22                       (rtx, rtx);
extern rtx        gen_trunctddf2                          (rtx, rtx);
extern rtx        gen_trunctdsf2                          (rtx, rtx);
extern rtx        gen_truncddtf2_fpr                      (rtx, rtx);
extern rtx        gen_truncddfprx22                       (rtx, rtx);
extern rtx        gen_truncdddf2                          (rtx, rtx);
extern rtx        gen_truncddsf2                          (rtx, rtx);
extern rtx        gen_truncsdtf2_fpr                      (rtx, rtx);
extern rtx        gen_truncsdfprx22                       (rtx, rtx);
extern rtx        gen_truncsddf2                          (rtx, rtx);
extern rtx        gen_truncsdsf2                          (rtx, rtx);
extern rtx        gen_extendtftd2_fpr                     (rtx, rtx);
extern rtx        gen_extendfprx2td2                      (rtx, rtx);
extern rtx        gen_extenddftd2                         (rtx, rtx);
extern rtx        gen_extendsftd2                         (rtx, rtx);
extern rtx        gen_extendtfdd2_fpr                     (rtx, rtx);
extern rtx        gen_extendfprx2dd2                      (rtx, rtx);
extern rtx        gen_extenddfdd2                         (rtx, rtx);
extern rtx        gen_extendsfdd2                         (rtx, rtx);
extern rtx        gen_extendtfsd2_fpr                     (rtx, rtx);
extern rtx        gen_extendfprx2sd2                      (rtx, rtx);
extern rtx        gen_extenddfsd2                         (rtx, rtx);
extern rtx        gen_extendsfsd2                         (rtx, rtx);
extern rtx        gen_extendtdtf2_fpr                     (rtx, rtx);
extern rtx        gen_extendtdfprx22                      (rtx, rtx);
extern rtx        gen_extendtddf2                         (rtx, rtx);
extern rtx        gen_extendtdsf2                         (rtx, rtx);
extern rtx        gen_extendddtf2_fpr                     (rtx, rtx);
extern rtx        gen_extendddfprx22                      (rtx, rtx);
extern rtx        gen_extenddddf2                         (rtx, rtx);
extern rtx        gen_extendddsf2                         (rtx, rtx);
extern rtx        gen_extendsdtf2_fpr                     (rtx, rtx);
extern rtx        gen_extendsdfprx22                      (rtx, rtx);
extern rtx        gen_extendsddf2                         (rtx, rtx);
extern rtx        gen_extendsdsf2                         (rtx, rtx);
extern rtx        gen_addti3                              (rtx, rtx, rtx);
extern rtx        gen_adddi3                              (rtx, rtx, rtx);
extern rtx        gen_addsi3                              (rtx, rtx, rtx);
extern rtx        gen_addvdi4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_addvsi4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_addptrdi3                           (rtx, rtx, rtx);
extern rtx        gen_addptrsi3                           (rtx, rtx, rtx);
extern rtx        gen_subti3                              (rtx, rtx, rtx);
extern rtx        gen_subdi3                              (rtx, rtx, rtx);
extern rtx        gen_subsi3                              (rtx, rtx, rtx);
extern rtx        gen_subvdi4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_subvsi4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_adddicc                             (rtx, rtx, rtx, rtx);
extern rtx        gen_addsicc                             (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoredi4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_cstoresi4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_cstorecc4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_movdicc                             (rtx, rtx, rtx, rtx);
extern rtx        gen_movsicc                             (rtx, rtx, rtx, rtx);
extern rtx        gen_movhicc                             (rtx, rtx, rtx, rtx);
extern rtx        gen_movqicc                             (rtx, rtx, rtx, rtx);
extern rtx        gen_muldi3                              (rtx, rtx, rtx);
extern rtx        gen_mulsi3                              (rtx, rtx, rtx);
extern rtx        gen_mulvdi4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_mulvsi4                             (rtx, rtx, rtx, rtx);
extern rtx        gen_divmoddi4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmoddi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_divmodsi4                           (rtx, rtx, rtx, rtx);
extern rtx        gen_udivmodsi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_anddi3                              (rtx, rtx, rtx);
extern rtx        gen_andsi3                              (rtx, rtx, rtx);
extern rtx        gen_andhi3                              (rtx, rtx, rtx);
extern rtx        gen_andqi3                              (rtx, rtx, rtx);
extern rtx        gen_iordi3                              (rtx, rtx, rtx);
extern rtx        gen_iorsi3                              (rtx, rtx, rtx);
extern rtx        gen_iorhi3                              (rtx, rtx, rtx);
extern rtx        gen_iorqi3                              (rtx, rtx, rtx);
extern rtx        gen_xordi3                              (rtx, rtx, rtx);
extern rtx        gen_xorsi3                              (rtx, rtx, rtx);
extern rtx        gen_xorhi3                              (rtx, rtx, rtx);
extern rtx        gen_xorqi3                              (rtx, rtx, rtx);
extern rtx        gen_negdi2                              (rtx, rtx);
extern rtx        gen_negsi2                              (rtx, rtx);
extern rtx        gen_negtf2_fpr                          (rtx, rtx);
extern rtx        gen_negfprx22                           (rtx, rtx);
extern rtx        gen_negdf2                              (rtx, rtx);
extern rtx        gen_negsf2                              (rtx, rtx);
extern rtx        gen_abstf2_fpr                          (rtx, rtx);
extern rtx        gen_absfprx22                           (rtx, rtx);
extern rtx        gen_absdf2                              (rtx, rtx);
extern rtx        gen_abssf2                              (rtx, rtx);
extern rtx        gen_one_cmpldi2                         (rtx, rtx);
extern rtx        gen_one_cmplsi2                         (rtx, rtx);
extern rtx        gen_one_cmplhi2                         (rtx, rtx);
extern rtx        gen_one_cmplqi2                         (rtx, rtx);
extern rtx        gen_clzdi2                              (rtx, rtx);
extern rtx        gen_rotldi3                             (rtx, rtx, rtx);
extern rtx        gen_rotlsi3                             (rtx, rtx, rtx);
extern rtx        gen_ashldi3                             (rtx, rtx, rtx);
extern rtx        gen_lshrdi3                             (rtx, rtx, rtx);
extern rtx        gen_ashlsi3                             (rtx, rtx, rtx);
extern rtx        gen_lshrsi3                             (rtx, rtx, rtx);
extern rtx        gen_ashrdi3                             (rtx, rtx, rtx);
extern rtx        gen_ashrsi3                             (rtx, rtx, rtx);
extern rtx        gen_cbranchdi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsi4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchtf4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchfprx24                       (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdf4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchsf4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchtd4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchdd4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_cbranchcc4                          (rtx, rtx, rtx, rtx);
extern rtx        gen_ctrapdi4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_ctrapsi4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_ctraptf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_ctrapfprx24                         (rtx, rtx, rtx, rtx);
extern rtx        gen_ctrapdf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_ctrapsf4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_ctraptd4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_ctrapdd4                            (rtx, rtx, rtx, rtx);
extern rtx        gen_doloop_end                          (rtx, rtx);
extern rtx        gen_jump                                (rtx);
extern rtx        gen_indirect_jump                       (rtx);
extern rtx        gen_casesi_jump                         (rtx, rtx);
extern rtx        gen_casesi                              (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_untyped_call                        (rtx, rtx, rtx);
extern rtx        gen_sibcall                             (rtx, rtx);
extern rtx        gen_sibcall_value                       (rtx, rtx, rtx);
extern rtx        gen_call                                (rtx, rtx, rtx);
extern rtx        gen_call_value                          (rtx, rtx, rtx, rtx);
extern rtx        gen_get_thread_pointerdi                (rtx);
extern rtx        gen_get_thread_pointersi                (rtx);
extern rtx        gen_set_thread_pointerdi                (rtx);
extern rtx        gen_set_thread_pointersi                (rtx);
extern rtx        gen_mem_thread_fence                    (rtx);
extern rtx        gen_atomic_loadti                       (rtx, rtx, rtx);
extern rtx        gen_atomic_loaddi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_loadsi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_loadhi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_loadqi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_storeti                      (rtx, rtx, rtx);
extern rtx        gen_atomic_storedi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_storesi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_storehi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_storeqi                      (rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapti           (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapdi           (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapsi           (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swaphi           (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapqi           (rtx, rtx, rtx, rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapti_internal  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapdi_internal  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_compare_and_swapsi_internal  (rtx, rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_anddi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_ordi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xordi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_adddi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_orsi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addsi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_andhi                        (rtx, rtx, rtx);
extern rtx        gen_atomic_orhi                         (rtx, rtx, rtx);
extern rtx        gen_atomic_xorhi                        (rtx, rtx, rtx);
extern rtx        gen_atomic_addhi                        (rtx, rtx, rtx);
extern rtx        gen_atomic_subhi                        (rtx, rtx, rtx);
extern rtx        gen_atomic_nandhi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_andqi                        (rtx, rtx, rtx);
extern rtx        gen_atomic_orqi                         (rtx, rtx, rtx);
extern rtx        gen_atomic_xorqi                        (rtx, rtx, rtx);
extern rtx        gen_atomic_addqi                        (rtx, rtx, rtx);
extern rtx        gen_atomic_subqi                        (rtx, rtx, rtx);
extern rtx        gen_atomic_nandqi                       (rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andhi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_orhi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorhi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addhi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subhi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nandhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_andqi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_orqi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_xorqi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_addqi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_subqi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_fetch_nandqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchhi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_or_fetchhi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchhi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchhi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchhi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchhi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_and_fetchqi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_or_fetchqi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_xor_fetchqi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_add_fetchqi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_sub_fetchqi                  (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_nand_fetchqi                 (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangeti                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangedi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangesi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangehi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_atomic_exchangeqi                   (rtx, rtx, rtx, rtx);
extern rtx        gen_allocate_stack                      (rtx, rtx);
extern rtx        gen_probe_stack2di                      (rtx);
extern rtx        gen_probe_stack2si                      (rtx);
extern rtx        gen_probe_stack                         (rtx);
extern rtx        gen_builtin_setjmp_receiver             (rtx);
extern rtx        gen_save_stack_function                 (rtx, rtx);
extern rtx        gen_restore_stack_function              (rtx, rtx);
extern rtx        gen_restore_stack_block                 (rtx, rtx);
extern rtx        gen_save_stack_nonlocal                 (rtx, rtx);
extern rtx        gen_restore_stack_nonlocal              (rtx, rtx);
extern rtx        gen_exception_receiver                  (void);
extern rtx        gen_prologue                            (void);
extern rtx        gen_epilogue                            (void);
extern rtx        gen_sibcall_epilogue                    (void);
extern rtx        gen_return_use                          (rtx);
extern rtx        gen_ptr_extend                          (rtx, rtx);
static inline rtx gen_eh_return                           (rtx);
static inline rtx
gen_eh_return(rtx ARG_UNUSED (a))
{
  return 0;
}
extern rtx        gen_stack_protect_set                   (rtx, rtx);
extern rtx        gen_stack_protect_test                  (rtx, rtx, rtx);
extern rtx        gen_popcountdi2_z196                    (rtx, rtx);
extern rtx        gen_popcountdi2                         (rtx, rtx);
extern rtx        gen_popcountsi2_z196                    (rtx, rtx);
extern rtx        gen_popcountsi2                         (rtx, rtx);
extern rtx        gen_popcounthi2_z196                    (rtx, rtx);
extern rtx        gen_popcounthi2                         (rtx, rtx);
extern rtx        gen_popcountqi2                         (rtx, rtx);
extern rtx        gen_tbegin                              (rtx, rtx);
extern rtx        gen_tbegin_nofloat                      (rtx, rtx);
extern rtx        gen_tbegin_retry                        (rtx, rtx, rtx);
extern rtx        gen_tbegin_retry_nofloat                (rtx, rtx, rtx);
extern rtx        gen_tbeginc                             (void);
extern rtx        gen_tend                                (rtx);
extern rtx        gen_tabort                              (rtx);
extern rtx        gen_tx_assist                           (rtx);
extern rtx        gen_split_stack_prologue                (void);
extern rtx        gen_split_stack_space_check             (rtx, rtx);
extern rtx        gen_speculation_barrier                 (void);
extern rtx        gen_rawmemchrsi                         (rtx, rtx, rtx);
extern rtx        gen_rawmemchrhi                         (rtx, rtx, rtx);
extern rtx        gen_rawmemchrqi                         (rtx, rtx, rtx);

#endif /* GCC_INSN_FLAGS_H */
