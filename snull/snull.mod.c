#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x8ca1999d, "module_layout" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x607533d9, "register_netdev" },
	{ 0xca0af888, "alloc_netdev_mqs" },
	{ 0x6b47929d, "free_netdev" },
	{ 0x2ece1902, "unregister_netdev" },
	{ 0xacd41431, "netif_rx" },
	{ 0x907f3da9, "napi_complete" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xad37de41, "__netdev_alloc_skb" },
	{ 0xcb03efb2, "netif_receive_skb" },
	{ 0x525c0aec, "eth_type_trans" },
	{ 0xf28c90c8, "skb_put" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x7d11c268, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x71366580, "netif_napi_add" },
	{ 0xbae30df5, "ether_setup" },
	{ 0xd83ea029, "kmalloc_caches" },
	{ 0xa2e429a9, "kmem_cache_alloc_trace" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xde861d8f, "__netif_schedule" },
	{ 0xe2efce6c, "skb_push" },
	{ 0x8f64aa4, "_raw_spin_unlock_irqrestore" },
	{ 0x9327f5ce, "_raw_spin_lock_irqsave" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6981228d, "consume_skb" },
	{ 0xc159c8f5, "__napi_schedule" },
	{ 0xadaabe1b, "pv_lock_ops" },
	{ 0xd52bf1ce, "_raw_spin_lock" },
	{ 0x27e1a049, "printk" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "06DAD36ECB8AF8156C7A96A");
