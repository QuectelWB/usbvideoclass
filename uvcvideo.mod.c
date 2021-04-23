#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x9de7765d, "module_layout" },
	{ 0x3f783928, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcbf895e0, "kmalloc_caches" },
	{ 0xc5ff41dc, "v4l2_event_unsubscribe" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x44dcfa5c, "debugfs_create_dir" },
	{ 0x35497d8f, "v4l2_event_queue_fh" },
	{ 0x754d539c, "strlen" },
	{ 0xc6294b7d, "vb2_mmap" },
	{ 0x99ac3e03, "usb_debug_root" },
	{ 0xe7f43f71, "v4l2_device_unregister" },
	{ 0xc6753376, "no_llseek" },
	{ 0x62456cc, "vb2_create_bufs" },
	{ 0x3996f243, "vb2_fop_poll" },
	{ 0x83ea12ee, "vb2_ioctl_streamon" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xde1a3fdb, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcdc5e60d, "vb2_ops_wait_prepare" },
	{ 0x484d2b63, "__video_register_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb47a6233, "usb_autopm_get_interface" },
	{ 0xc6d6bed8, "usb_enable_autosuspend" },
	{ 0x71eb2925, "debugfs_create_file" },
	{ 0x82737e8, "v4l2_ctrl_merge" },
	{ 0xdd64e639, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x67c0c54c, "pv_ops" },
	{ 0x327873b6, "v4l2_device_register" },
	{ 0xb0d9a8a7, "input_event" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xfb578fc5, "memset" },
	{ 0xf2eef093, "vb2_vmalloc_memops" },
	{ 0xe5db6744, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x191da483, "vb2_fop_mmap" },
	{ 0x6272786b, "vb2_ioctl_qbuf" },
	{ 0x3bd5c9b1, "usb_deregister" },
	{ 0x2db3d320, "mutex_lock_interruptible" },
	{ 0x8146f8e4, "v4l2_event_subscribe" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0xa6b82ce5, "video_unregister_device" },
	{ 0xf82e2c8, "media_entity_pads_init" },
	{ 0xbd0bee33, "usb_set_interface" },
	{ 0xcdd57474, "v4l2_fh_init" },
	{ 0xf1c760bd, "vb2_plane_vaddr" },
	{ 0x1e8902e7, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3915f523, "usb_poison_urb" },
	{ 0x9cff95bb, "usb_control_msg" },
	{ 0x43ded081, "debugfs_remove" },
	{ 0xcf92f322, "usb_driver_claim_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x596cdb97, "vb2_qbuf" },
	{ 0x671c6e60, "vb2_ioctl_prepare_buf" },
	{ 0x9d68b04c, "vb2_ioctl_create_bufs" },
	{ 0x51846891, "usb_free_coherent" },
	{ 0x6f351759, "vb2_querybuf" },
	{ 0x376be9de, "vb2_ioctl_dqbuf" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x65583af3, "media_device_cleanup" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0x4e83d079, "usb_submit_urb" },
	{ 0xf50fecbc, "v4l2_ctrl_replace" },
	{ 0xde35f83b, "vb2_streamon" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x7797bba2, "usb_get_dev" },
	{ 0x3851b541, "vb2_fop_release" },
	{ 0xa534a6b7, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc959d152, "__stack_chk_fail" },
	{ 0x180bb6b, "vb2_expbuf" },
	{ 0xf6d07d4, "input_register_device" },
	{ 0x7710f9c4, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x4004b8f4, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9d34f2b4, "usb_driver_release_interface" },
	{ 0x1cc8e120, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf16990af, "v4l2_device_register_subdev" },
	{ 0x96f7b691, "media_create_pad_link" },
	{ 0x367637f9, "vb2_reqbufs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb5f17439, "kmem_cache_alloc_trace" },
	{ 0x8ae5dca7, "usb_get_intf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdc1139b6, "v4l2_fh_open" },
	{ 0x3f9f83a4, "v4l2_subdev_init" },
	{ 0xfcf3ca60, "vb2_ioctl_querybuf" },
	{ 0xf7633982, "__media_device_register" },
	{ 0x6a1daaa5, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x378a81c2, "input_unregister_device" },
	{ 0xbd9ae66e, "usb_match_one_id" },
	{ 0x96848186, "scnprintf" },
	{ 0x1a62a191, "usb_register_driver" },
	{ 0x319945ac, "vb2_ops_wait_finish" },
	{ 0x96f863fd, "v4l2_fh_add" },
	{ 0x2fa87231, "v4l2_fh_del" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x5d72d304, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4b0f7b43, "vb2_poll" },
	{ 0x7af2a9e8, "media_device_init" },
	{ 0x890b2231, "usb_alloc_coherent" },
	{ 0x826459d5, "usb_get_current_frame_number" },
	{ 0x28b12cc9, "v4l2_format_info" },
	{ 0x1a441480, "vb2_ioctl_streamoff" },
	{ 0x100b5c56, "vb2_queue_release" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xc01f731a, "param_ops_uint" },
	{ 0xeaae1b1a, "vb2_streamoff" },
	{ 0x115d4056, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xfa3b9e9f, "media_device_unregister" },
	{ 0x741301d6, "video_ioctl2" },
	{ 0x7aec9089, "clear_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x398b5de5, "usb_autopm_put_interface" },
	{ 0x37f1375c, "usb_alloc_urb" },
	{ 0x3a81bb0a, "usb_put_intf" },
	{ 0x2c87f26b, "v4l2_fh_exit" },
	{ 0xf6bdf445, "input_allocate_device" },
	{ 0x141d2f81, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-v4l2,videodev,videobuf2-common,videobuf2-vmalloc,mc");

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v29FEp4D53d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "3D462D32999CE2BEFC0F2A8");
