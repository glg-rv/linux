/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _ASM_RISCV_SPINLOCK_H
#define _ASM_RISCV_SPINLOCK_H

#ifdef CONFIG_QUEUED_SPINLOCKS
#include <asm/qspinlock.h>
#else
#include <asm-generic/spinlock.h>
#endif /* CONFIG_QUEUED_SPINLOCKS */

#endif /* _ASM_RISCV_SPINLOCK_H */
