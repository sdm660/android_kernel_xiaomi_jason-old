/* Copyright (c) 2019, Brian Dashore (kingbri) <bdashore3@gmail.com>
 * 
 * This file adds a header for lpm-levels located in drivers/cpuidle/lpm-levels.c
 */
#ifndef __SOC_QCOM_LPM_LEVEL_H__
#define __SOC_QCOM_LPM_LEVEL_H__

#ifdef CONFIG_MSM_PM
void lpm_cluster_use_deepest_state(bool enable);

#else
void lpm_cluster_use_deepest_state(bool enable);
{
}
#endif //MSM_PM
#endif //SOC_QCOM_LPM_LEVEL_H
