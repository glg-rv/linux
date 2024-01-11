/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _RISCV_SPINLOCK_TYPES_H
#define _RISCV_SPINLOCK_TYPES_H

#ifdef CONFIG_QUEUED_SPINLOCKS
#include <asm/qspinlock_types.h>
#include <asm/qrwlock_types.h>
#else
#include <asm-generic/spinlock_types.h>
#endif /* CONFIG_QUEUED_SPINLOCKS */

#endif /* _RISCV_SPINLOCK_TYPES_H */
