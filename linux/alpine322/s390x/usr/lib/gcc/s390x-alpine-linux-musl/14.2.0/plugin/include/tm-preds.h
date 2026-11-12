/* Generated automatically by the program 'build/genpreds'
   from the machine description file '/home/buildozer/aports/main/gcc/src/gcc-14.2.0/gcc/config/s390/s390.md'.  */

#ifndef GCC_TM_PREDS_H
#define GCC_TM_PREDS_H

#ifdef HAVE_MACHINE_MODES
extern bool general_operand (rtx, machine_mode);
extern bool address_operand (rtx, machine_mode);
extern bool register_operand (rtx, machine_mode);
extern bool pmode_register_operand (rtx, machine_mode);
extern bool scratch_operand (rtx, machine_mode);
extern bool immediate_operand (rtx, machine_mode);
extern bool const_int_operand (rtx, machine_mode);
extern bool const_scalar_int_operand (rtx, machine_mode);
extern bool const_double_operand (rtx, machine_mode);
extern bool nonimmediate_operand (rtx, machine_mode);
extern bool nonmemory_operand (rtx, machine_mode);
extern bool push_operand (rtx, machine_mode);
extern bool pop_operand (rtx, machine_mode);
extern bool memory_operand (rtx, machine_mode);
extern bool indirect_operand (rtx, machine_mode);
extern bool ordered_comparison_operator (rtx, machine_mode);
extern bool comparison_operator (rtx, machine_mode);
extern bool aligned_register_operand (rtx, machine_mode);
extern bool const0_operand (rtx, machine_mode);
extern bool all_ones_operand (rtx, machine_mode);
extern bool const_mask_operand (rtx, machine_mode);
extern bool consttable_operand (rtx, machine_mode);
extern bool permute_pattern_operand (rtx, machine_mode);
extern bool s_operand (rtx, machine_mode);
extern bool plus16_Q_operand (rtx, machine_mode);
extern bool bras_sym_operand (rtx, machine_mode);
extern bool s390_plus_operand (rtx, machine_mode);
extern bool setmem_operand (rtx, machine_mode);
extern bool const_int_6bitset_operand (rtx, machine_mode);
extern bool nonzero_shift_count_operand (rtx, machine_mode);
extern bool larl_operand (rtx, machine_mode);
extern bool contiguous_bitmask_operand (rtx, machine_mode);
extern bool contiguous_bitmask_nowrap_operand (rtx, machine_mode);
extern bool loc_operand (rtx, machine_mode);
extern bool reload_const_wide_int_operand (rtx, machine_mode);
extern bool s390_comparison (rtx, machine_mode);
extern bool cc_reg_operand (rtx, machine_mode);
extern bool s390_signed_integer_comparison (rtx, machine_mode);
extern bool s390_unsigned_integer_comparison (rtx, machine_mode);
extern bool s390_eqne_operator (rtx, machine_mode);
extern bool s390_scond_operator (rtx, machine_mode);
extern bool s390_brx_operator (rtx, machine_mode);
extern bool s390_alc_comparison (rtx, machine_mode);
extern bool s390_slb_comparison (rtx, machine_mode);
extern bool load_multiple_operation (rtx, machine_mode);
extern bool execute_operation (rtx, machine_mode);
extern bool store_multiple_operation (rtx, machine_mode);
extern bool const_shift_by_byte_operand (rtx, machine_mode);
extern bool nonsym_memory_operand (rtx, machine_mode);
extern bool shift_count_operand (rtx, machine_mode);
extern bool shift_count_operand_vec (rtx, machine_mode);
extern bool addv_const_operand (rtx, machine_mode);
extern bool subreg_register_operand (rtx, machine_mode);
extern bool vll_bias_operand (rtx, machine_mode);
extern bool vcond_comparison_operator (rtx, machine_mode);
#endif /* HAVE_MACHINE_MODES */

#ifdef GCC_HARD_REG_SET_H
struct target_constraints {
  HARD_REG_SET register_filters[1];
};

extern struct target_constraints default_target_constraints;
#if SWITCHABLE_TARGET
extern struct target_constraints *this_target_constraints;
#else
#define this_target_constraints (&default_target_constraints)
#endif

#define TEST_REGISTER_FILTER_BIT(ID, REGNO) \
  ((void) (ID), (void) (REGNO), false)

inline bool
test_register_filters (unsigned int, unsigned int)
{
  return true;
}
#endif

#define CONSTRAINT_NUM_DEFINED_P 1
enum constraint_num
{
  CONSTRAINT__UNKNOWN = 0,
  CONSTRAINT_r,
  CONSTRAINT_a,
  CONSTRAINT_c,
  CONSTRAINT_d,
  CONSTRAINT_f,
  CONSTRAINT_t,
  CONSTRAINT_v,
  CONSTRAINT_I,
  CONSTRAINT_J,
  CONSTRAINT_K,
  CONSTRAINT_L,
  CONSTRAINT_M,
  CONSTRAINT_P,
  CONSTRAINT_NxQS0,
  CONSTRAINT_NxHD0,
  CONSTRAINT_NxSD0,
  CONSTRAINT_NxQD0,
  CONSTRAINT_N3HD0,
  CONSTRAINT_N2HD0,
  CONSTRAINT_N1SD0,
  CONSTRAINT_N1HS0,
  CONSTRAINT_N1HD0,
  CONSTRAINT_N0SD0,
  CONSTRAINT_N0HS0,
  CONSTRAINT_N0HD0,
  CONSTRAINT_NxQDF,
  CONSTRAINT_N1SDF,
  CONSTRAINT_N0SDF,
  CONSTRAINT_N3HDF,
  CONSTRAINT_N2HDF,
  CONSTRAINT_N1HDF,
  CONSTRAINT_N0HDF,
  CONSTRAINT_N0HSF,
  CONSTRAINT_N1HSF,
  CONSTRAINT_NxQSF,
  CONSTRAINT_NxQHF,
  CONSTRAINT_NxQH0,
  CONSTRAINT_NxxDw,
  CONSTRAINT_NxxSq,
  CONSTRAINT_NxxSw,
  CONSTRAINT_Os,
  CONSTRAINT_Op,
  CONSTRAINT_On,
  CONSTRAINT_e,
  CONSTRAINT_o,
  CONSTRAINT_Q,
  CONSTRAINT_R,
  CONSTRAINT_S,
  CONSTRAINT_T,
  CONSTRAINT_b,
  CONSTRAINT_m,
  CONSTRAINT_AQ,
  CONSTRAINT_AR,
  CONSTRAINT_AS,
  CONSTRAINT_AT,
  CONSTRAINT_p,
  CONSTRAINT_Y,
  CONSTRAINT_jsc,
  CONSTRAINT_U,
  CONSTRAINT_W,
  CONSTRAINT_ZQ,
  CONSTRAINT_ZR,
  CONSTRAINT_ZS,
  CONSTRAINT_ZT,
  CONSTRAINT_C,
  CONSTRAINT_D,
  CONSTRAINT_G,
  CONSTRAINT_jxx,
  CONSTRAINT_jyy,
  CONSTRAINT_jKK,
  CONSTRAINT_jm6,
  CONSTRAINT_j_gf,
  CONSTRAINT_jb4,
  CONSTRAINT_jdd,
  CONSTRAINT_V,
  CONSTRAINT__l,
  CONSTRAINT__g,
  CONSTRAINT_i,
  CONSTRAINT_s,
  CONSTRAINT_n,
  CONSTRAINT_E,
  CONSTRAINT_F,
  CONSTRAINT_X,
  CONSTRAINT_j00,
  CONSTRAINT_jm1,
  CONSTRAINT_BQ,
  CONSTRAINT_BR,
  CONSTRAINT_BS,
  CONSTRAINT_BT,
  CONSTRAINT_ZL,
  CONSTRAINT__LIMIT
};

extern enum constraint_num lookup_constraint_1 (const char *);
extern const unsigned char lookup_constraint_array[];

/* Return the constraint at the beginning of P, or CONSTRAINT__UNKNOWN if it
   isn't recognized.  */

static inline enum constraint_num
lookup_constraint (const char *p)
{
  unsigned int index = lookup_constraint_array[(unsigned char) *p];
  return (index == UCHAR_MAX
          ? lookup_constraint_1 (p)
          : (enum constraint_num) index);
}

extern bool (*constraint_satisfied_p_array[]) (rtx);

/* Return true if X satisfies constraint C.  */

static inline bool
constraint_satisfied_p (rtx x, enum constraint_num c)
{
  int i = (int) c - (int) CONSTRAINT_I;
  return i >= 0 && constraint_satisfied_p_array[i] (x);
}

static inline bool
insn_extra_register_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_r && c <= CONSTRAINT_v;
}

static inline bool
insn_extra_memory_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_e && c <= CONSTRAINT_AT;
}

static inline bool
insn_extra_special_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_relaxed_memory_constraint (enum constraint_num)
{
  return false;
}

static inline bool
insn_extra_address_constraint (enum constraint_num c)
{
  return c >= CONSTRAINT_p && c <= CONSTRAINT_ZT;
}

static inline void
insn_extra_constraint_allows_reg_mem (enum constraint_num c,
				      bool *allows_reg, bool *allows_mem)
{
  if (c >= CONSTRAINT_C && c <= CONSTRAINT_jdd)
    return;
  if (c >= CONSTRAINT_V && c <= CONSTRAINT__g)
    {
      *allows_mem = true;
      return;
    }
  (void) c;
  *allows_reg = true;
  *allows_mem = true;
}

static inline size_t
insn_constraint_len (char fc, const char *str ATTRIBUTE_UNUSED)
{
  switch (fc)
    {
    case 'A': return 2;
    case 'B': return 2;
    case 'N': return 5;
    case 'O': return 2;
    case 'Z': return 2;
    case 'j': return 3;
    default: break;
    }
  return 1;
}

#define CONSTRAINT_LEN(c_,s_) insn_constraint_len (c_,s_)

extern enum reg_class reg_class_for_constraint_1 (enum constraint_num);

static inline enum reg_class
reg_class_for_constraint (enum constraint_num c)
{
  if (insn_extra_register_constraint (c))
    return reg_class_for_constraint_1 (c);
  return NO_REGS;
}

extern bool insn_const_int_ok_for_constraint (HOST_WIDE_INT, enum constraint_num);
#define CONST_OK_FOR_CONSTRAINT_P(v_,c_,s_) \
    insn_const_int_ok_for_constraint (v_, lookup_constraint (s_))

enum constraint_type
{
  CT_REGISTER,
  CT_CONST_INT,
  CT_MEMORY,
  CT_SPECIAL_MEMORY,
  CT_RELAXED_MEMORY,
  CT_ADDRESS,
  CT_FIXED_FORM
};

static inline enum constraint_type
get_constraint_type (enum constraint_num c)
{
  if (c >= CONSTRAINT_p)
    {
      if (c >= CONSTRAINT_C)
        return CT_FIXED_FORM;
      return CT_ADDRESS;
    }
  if (c >= CONSTRAINT_e)
    return CT_MEMORY;
  if (c >= CONSTRAINT_I)
    return CT_CONST_INT;
  return CT_REGISTER;
}

#ifdef GCC_HARD_REG_SET_H
static inline const HARD_REG_SET *
get_register_filter (constraint_num)
{
  return nullptr;
}
#endif

static inline int
get_register_filter_id (constraint_num)
{
  return -1;
}
#endif /* tm-preds.h */
