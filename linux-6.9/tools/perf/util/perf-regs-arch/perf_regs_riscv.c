// SPDX-License-Identifier: GPL-2.0

#include "../perf_regs.h"
#include "../../../arch/riscv/include/uapi/asm/perf_regs.h"

const char *__perf_reg_name_riscv(int id)
{
	switch (id) {
	case PERF_REG_RISCV_PC:
		return "pc";
	case PERF_REG_RISCV_RA:
		return "ra";
	case PERF_REG_RISCV_SP:
		return "sp";
	case PERF_REG_RISCV_GP:
		return "gp";
	case PERF_REG_RISCV_TP:
		return "tp";
	case PERF_REG_RISCV_T0:
		return "t0";
	case PERF_REG_RISCV_T1:
		return "t1";
	case PERF_REG_RISCV_T2:
		return "t2";
	case PERF_REG_RISCV_S0:
		return "s0";
	case PERF_REG_RISCV_S1:
		return "s1";
	case PERF_REG_RISCV_A0:
		return "a0";
	case PERF_REG_RISCV_A1:
		return "a1";
	case PERF_REG_RISCV_A2:
		return "a2";
	case PERF_REG_RISCV_A3:
		return "a3";
	case PERF_REG_RISCV_A4:
		return "a4";
	case PERF_REG_RISCV_A5:
		return "a5";
	case PERF_REG_RISCV_A6:
		return "a6";
	case PERF_REG_RISCV_A7:
		return "a7";
	case PERF_REG_RISCV_S2:
		return "s2";
	case PERF_REG_RISCV_S3:
		return "s3";
	case PERF_REG_RISCV_S4:
		return "s4";
	case PERF_REG_RISCV_S5:
		return "s5";
	case PERF_REG_RISCV_S6:
		return "s6";
	case PERF_REG_RISCV_S7:
		return "s7";
	case PERF_REG_RISCV_S8:
		return "s8";
	case PERF_REG_RISCV_S9:
		return "s9";
	case PERF_REG_RISCV_S10:
		return "s10";
	case PERF_REG_RISCV_S11:
		return "s11";
	case PERF_REG_RISCV_T3:
		return "t3";
	case PERF_REG_RISCV_T4:
		return "t4";
	case PERF_REG_RISCV_T5:
		return "t5";
	case PERF_REG_RISCV_T6:
		return "t6";
	default:
		return NULL;
	}

	return NULL;
}

uint64_t __perf_reg_ip_riscv(void)
{
	return PERF_REG_RISCV_PC;
}

uint64_t __perf_reg_sp_riscv(void)
{
	return PERF_REG_RISCV_SP;
}
