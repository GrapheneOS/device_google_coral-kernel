/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _MSM_AUDIO_WMAPRO_H
#define _MSM_AUDIO_WMAPRO_H
#define AUDIO_GET_WMAPRO_CONFIG _IOR(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 0), struct msm_audio_wmapro_config)
#define AUDIO_SET_WMAPRO_CONFIG _IOW(AUDIO_IOCTL_MAGIC, (AUDIO_MAX_COMMON_IOCTL_NUM + 1), struct msm_audio_wmapro_config)
struct msm_audio_wmapro_config {
  unsigned short armdatareqthr;
  uint8_t validbitspersample;
  uint8_t numchannels;
  unsigned short formattag;
  uint32_t samplingrate;
  uint32_t avgbytespersecond;
  unsigned short asfpacketlength;
  uint32_t channelmask;
  unsigned short encodeopt;
  unsigned short advancedencodeopt;
  uint32_t advancedencodeopt2;
};
#endif
