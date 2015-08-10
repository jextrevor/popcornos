/*
 * Copyright (c) 2001 The University of Utah and the Flux Group.
 * All rights reserved.
 * 
 * This file is part of the Flux OSKit.  The OSKit is free software, also known
 * as "open source;" you can redistribute it and/or modify it under the terms
 * of the GNU General Public License (GPL), version 2, as published by the Free
 * Software Foundation (FSF).  To explore alternate licensing terms, contact
 * the University of Utah at csl-dist@cs.utah.edu or +1-801-585-3271.
 * 
 * The OSKit is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GPL for more details.  You should have
 * received a copy of the GPL along with the OSKit; see the file COPYING.  If
 * not, write to the FSF, 59 Temple Place #330, Boston, MA 02111-1307, USA.
 */

#ifndef _OSKIT_UVM_GLOBAL_H_
#define _OSKIT_UVM_GLOBAL_H_

/*
 * Symbols defined by glue code which are used by the NetBSD UVM code.
 */

/* See <sys/malloc.h> to understand this ifdef */
#ifndef MALLOCLOG
#define malloc	OSKIT_NETBSD_UVM_malloc
#define free	OSKIT_NETBSD_UVM_free
#endif

/* See uvm/uvm_stat.h */
#ifdef UVMHIST
#define uvmhist_dump OSKIT_NETBSD_UVM_uvmhist_dump
#endif

#define realloc	OSKIT_NETBSD_UVM_realloc
#if 0
#define printf OSKIT_NETBSD_UVM_printf
#endif

#define vlog(level, fmt, ap)	vprintf(fmt, ap)

/*
 * Produced by: nm liboskit_netbsd_uvm.a | grep ' [TDRC] ' | grep -v 'oskit' |
 * awk '{printf "#define "$3" OSKIT_NETBSD_UVM_"$3"\n"; }' | sort | uniq >> g.h
 */
#define __assert OSKIT_NETBSD_UVM___assert
#define _free OSKIT_NETBSD_UVM__free
#define _malloc OSKIT_NETBSD_UVM__malloc
#define _pool_get OSKIT_NETBSD_UVM__pool_get
#define _pool_put OSKIT_NETBSD_UVM__pool_put
#define _pool_reclaim OSKIT_NETBSD_UVM__pool_reclaim
#define addrmask OSKIT_NETBSD_UVM_addrmask
#define amap_add OSKIT_NETBSD_UVM_amap_add
#define amap_alloc OSKIT_NETBSD_UVM_amap_alloc
#define amap_copy OSKIT_NETBSD_UVM_amap_copy
#define amap_cow_now OSKIT_NETBSD_UVM_amap_cow_now
#define amap_extend OSKIT_NETBSD_UVM_amap_extend
#define amap_free OSKIT_NETBSD_UVM_amap_free
#define amap_init OSKIT_NETBSD_UVM_amap_init
#define amap_lookup OSKIT_NETBSD_UVM_amap_lookup
#define amap_lookups OSKIT_NETBSD_UVM_amap_lookups
#define amap_pp_adjref OSKIT_NETBSD_UVM_amap_pp_adjref
#define amap_pp_establish OSKIT_NETBSD_UVM_amap_pp_establish
#define amap_ref OSKIT_NETBSD_UVM_amap_ref
#define amap_share_protect OSKIT_NETBSD_UVM_amap_share_protect
#define amap_splitref OSKIT_NETBSD_UVM_amap_splitref
#define amap_unadd OSKIT_NETBSD_UVM_amap_unadd
#define amap_unref OSKIT_NETBSD_UVM_amap_unref
#define amap_wipeout OSKIT_NETBSD_UVM_amap_wipeout
#define amap_wiperange OSKIT_NETBSD_UVM_amap_wiperange
#define anon_swap_off OSKIT_NETBSD_UVM_anon_swap_off
#define aobj_pager OSKIT_NETBSD_UVM_aobj_pager
#define astpending OSKIT_NETBSD_UVM_astpending
#define avail_end OSKIT_NETBSD_UVM_avail_end
#define avail_start OSKIT_NETBSD_UVM_avail_start
#define awaken OSKIT_NETBSD_UVM_awaken
#define bdevsw OSKIT_NETBSD_UVM_bdevsw
#define bdevvp OSKIT_NETBSD_UVM_bdevvp
#define bgetvp OSKIT_NETBSD_UVM_bgetvp
#define biodone OSKIT_NETBSD_UVM_biodone
#define bioops OSKIT_NETBSD_UVM_bioops
#define biowait OSKIT_NETBSD_UVM_biowait
#define bitmask_snprintf OSKIT_NETBSD_UVM_bitmask_snprintf
#define blkio_list OSKIT_NETBSD_UVM_blkio_list
#define brelse OSKIT_NETBSD_UVM_brelse
#define brelvp OSKIT_NETBSD_UVM_brelvp
#define bucket OSKIT_NETBSD_UVM_bucket
#define bufhash OSKIT_NETBSD_UVM_bufhash
#define bufhashtbl OSKIT_NETBSD_UVM_bufhashtbl
#define bufpool OSKIT_NETBSD_UVM_bufpool
#define bufqueues OSKIT_NETBSD_UVM_bufqueues
#define cold OSKIT_NETBSD_UVM_cold
#define copy_fault OSKIT_NETBSD_UVM_copy_fault
#define copystr OSKIT_NETBSD_UVM_copystr
#define copystr_fault OSKIT_NETBSD_UVM_copystr_fault
#define copystr_return OSKIT_NETBSD_UVM_copystr_return
#define cpl OSKIT_NETBSD_UVM_cpl
#define cpu_class OSKIT_NETBSD_UVM_cpu_class
#define cpu_feature OSKIT_NETBSD_UVM_cpu_feature
#define crdup OSKIT_NETBSD_UVM_crdup
#define crfree OSKIT_NETBSD_UVM_crfree
#define curpcb OSKIT_NETBSD_UVM_curpcb
#define doforce OSKIT_NETBSD_UVM_doforce
#define doing_shutdown OSKIT_NETBSD_UVM_doing_shutdown
#define domains OSKIT_NETBSD_UVM_domains
#define double_fault_handler OSKIT_NETBSD_UVM_double_fault_handler
#define dump_kmemstats OSKIT_NETBSD_UVM_dump_kmemstats
#define extent_alloc_region OSKIT_NETBSD_UVM_extent_alloc_region
#define extent_alloc_subregion1 OSKIT_NETBSD_UVM_extent_alloc_subregion1
#define extent_create OSKIT_NETBSD_UVM_extent_create
#define extent_destroy OSKIT_NETBSD_UVM_extent_destroy
#define extent_free OSKIT_NETBSD_UVM_extent_free
#define extent_print OSKIT_NETBSD_UVM_extent_print
#define fusuaddrfault OSKIT_NETBSD_UVM_fusuaddrfault
#define fusubail OSKIT_NETBSD_UVM_fusubail
#define fusufault OSKIT_NETBSD_UVM_fusufault
#define hashdone OSKIT_NETBSD_UVM_hashdone
#define hashinit OSKIT_NETBSD_UVM_hashinit
#define holdrele OSKIT_NETBSD_UVM_holdrele
#define hz OSKIT_NETBSD_UVM_hz
#define iftovt_tab OSKIT_NETBSD_UVM_iftovt_tab
#define imask OSKIT_NETBSD_UVM_imask
#define invalhash OSKIT_NETBSD_UVM_invalhash
#define ipending OSKIT_NETBSD_UVM_ipending
#define kernel_map OSKIT_NETBSD_UVM_kernel_map
#define kernel_pmap_store OSKIT_NETBSD_UVM_kernel_pmap_store
#define kmem_map OSKIT_NETBSD_UVM_kmem_map
#define kmembase OSKIT_NETBSD_UVM_kmembase
#define kmeminit OSKIT_NETBSD_UVM_kmeminit
#define kmeminit_nkmempages OSKIT_NETBSD_UVM_kmeminit_nkmempages
#define kmemlimit OSKIT_NETBSD_UVM_kmemlimit
#define kmemstats OSKIT_NETBSD_UVM_kmemstats
#define kmemusage OSKIT_NETBSD_UVM_kmemusage
#define lbolt OSKIT_NETBSD_UVM_lbolt
#define lockinit OSKIT_NETBSD_UVM_lockinit
#define lockmgr OSKIT_NETBSD_UVM_lockmgr
#define lockmgr_printinfo OSKIT_NETBSD_UVM_lockmgr_printinfo
#define lockstatus OSKIT_NETBSD_UVM_lockstatus
#define ltsleep OSKIT_NETBSD_UVM_ltsleep
#define malloclog OSKIT_NETBSD_UVM_malloclog
#define malloclogptr OSKIT_NETBSD_UVM_malloclogptr
#define map_backmerge OSKIT_NETBSD_UVM_map_backmerge
#define map_forwmerge OSKIT_NETBSD_UVM_map_forwmerge
#define maphist OSKIT_NETBSD_UVM_maphist
#define memname OSKIT_NETBSD_UVM_memname
#define microtime OSKIT_NETBSD_UVM_microtime
#define mountlist OSKIT_NETBSD_UVM_mountlist
#define needbuffer OSKIT_NETBSD_UVM_needbuffer
#define nfs_pub OSKIT_NETBSD_UVM_nfs_pub
#define nkmempages OSKIT_NETBSD_UVM_nkmempages
#define nkpde OSKIT_NETBSD_UVM_nkpde
#define pager_map OSKIT_NETBSD_UVM_pager_map
#define pager_map_wanted OSKIT_NETBSD_UVM_pager_map_wanted
#define pager_map_wanted_lock OSKIT_NETBSD_UVM_pager_map_wanted_lock
#define panicstr OSKIT_NETBSD_UVM_panicstr
#define pdhist OSKIT_NETBSD_UVM_pdhist
#define physmem OSKIT_NETBSD_UVM_physmem
#define pmap_activate OSKIT_NETBSD_UVM_pmap_activate
#define pmap_bootstrap OSKIT_NETBSD_UVM_pmap_bootstrap
#define pmap_change_attrs OSKIT_NETBSD_UVM_pmap_change_attrs
#define pmap_collect OSKIT_NETBSD_UVM_pmap_collect
#define pmap_copy_page OSKIT_NETBSD_UVM_pmap_copy_page
#define pmap_create OSKIT_NETBSD_UVM_pmap_create
#define pmap_deactivate OSKIT_NETBSD_UVM_pmap_deactivate
#define pmap_destroy OSKIT_NETBSD_UVM_pmap_destroy
#define pmap_dump OSKIT_NETBSD_UVM_pmap_dump
#define pmap_enter OSKIT_NETBSD_UVM_pmap_enter
#define pmap_extract OSKIT_NETBSD_UVM_pmap_extract
#define pmap_growkernel OSKIT_NETBSD_UVM_pmap_growkernel
#define pmap_init OSKIT_NETBSD_UVM_pmap_init
#define pmap_kenter_pa OSKIT_NETBSD_UVM_pmap_kenter_pa
#define pmap_kenter_pgs OSKIT_NETBSD_UVM_pmap_kenter_pgs
#define pmap_kremove OSKIT_NETBSD_UVM_pmap_kremove
#define pmap_largepages OSKIT_NETBSD_UVM_pmap_largepages
#define pmap_map OSKIT_NETBSD_UVM_pmap_map
#define pmap_page_remove OSKIT_NETBSD_UVM_pmap_page_remove
#define pmap_pdp_cache OSKIT_NETBSD_UVM_pmap_pdp_cache
#define pmap_pdp_ctor OSKIT_NETBSD_UVM_pmap_pdp_ctor
#define pmap_pdp_pool OSKIT_NETBSD_UVM_pmap_pdp_pool
#define pmap_pg_g OSKIT_NETBSD_UVM_pmap_pg_g
#define pmap_pmap_pool OSKIT_NETBSD_UVM_pmap_pmap_pool
#define pmap_reference OSKIT_NETBSD_UVM_pmap_reference
#define pmap_remove OSKIT_NETBSD_UVM_pmap_remove
#define pmap_test_attrs OSKIT_NETBSD_UVM_pmap_test_attrs
#define pmap_unwire OSKIT_NETBSD_UVM_pmap_unwire
#define pmap_virtual_space OSKIT_NETBSD_UVM_pmap_virtual_space
#define pmap_write_protect OSKIT_NETBSD_UVM_pmap_write_protect
#define pmap_zero_page OSKIT_NETBSD_UVM_pmap_zero_page
#define pmap_zero_page_uncached OSKIT_NETBSD_UVM_pmap_zero_page_uncached
#define pool_cache_destroy OSKIT_NETBSD_UVM_pool_cache_destroy
#define pool_cache_get OSKIT_NETBSD_UVM_pool_cache_get
#define pool_cache_init OSKIT_NETBSD_UVM_pool_cache_init
#define pool_cache_invalidate OSKIT_NETBSD_UVM_pool_cache_invalidate
#define pool_cache_put OSKIT_NETBSD_UVM_pool_cache_put
#define pool_chk OSKIT_NETBSD_UVM_pool_chk
#define pool_create OSKIT_NETBSD_UVM_pool_create
#define pool_destroy OSKIT_NETBSD_UVM_pool_destroy
#define pool_drain OSKIT_NETBSD_UVM_pool_drain
#define pool_head OSKIT_NETBSD_UVM_pool_head
#define pool_head_slock OSKIT_NETBSD_UVM_pool_head_slock
#define pool_inactive_time OSKIT_NETBSD_UVM_pool_inactive_time
#define pool_init OSKIT_NETBSD_UVM_pool_init
#define pool_logsize OSKIT_NETBSD_UVM_pool_logsize
#define pool_page_alloc_nointr OSKIT_NETBSD_UVM_pool_page_alloc_nointr
#define pool_page_free_nointr OSKIT_NETBSD_UVM_pool_page_free_nointr
#define pool_prime OSKIT_NETBSD_UVM_pool_prime
#define pool_print OSKIT_NETBSD_UVM_pool_print
#define pool_printit OSKIT_NETBSD_UVM_pool_printit
#define pool_sethardlimit OSKIT_NETBSD_UVM_pool_sethardlimit
#define pool_sethiwat OSKIT_NETBSD_UVM_pool_sethiwat
#define pool_setlowat OSKIT_NETBSD_UVM_pool_setlowat
#define proc_kern OSKIT_NETBSD_UVM_proc_kern
#define prtactive OSKIT_NETBSD_UVM_prtactive
#define reserve_dumppages OSKIT_NETBSD_UVM_reserve_dumppages
#define root_device OSKIT_NETBSD_UVM_root_device
#define rootfs OSKIT_NETBSD_UVM_rootfs
#define rootvnode OSKIT_NETBSD_UVM_rootvnode
#define rootvp OSKIT_NETBSD_UVM_rootvp
#define rrticks OSKIT_NETBSD_UVM_rrticks
#define schedhz	OSKIT_NETBSD_UVM_schedhz
#define sched_lock OSKIT_NETBSD_UVM_sched_lock
#define sched_qs OSKIT_NETBSD_UVM_sched_qs
#define sched_slpque OSKIT_NETBSD_UVM_sched_slpque
#define sched_whichqs OSKIT_NETBSD_UVM_sched_whichqs
#define sleep OSKIT_NETBSD_UVM_sleep
#define speclisth OSKIT_NETBSD_UVM_speclisth
#define spin_locks OSKIT_NETBSD_UVM_spin_locks
#define spinlock_acquire_count OSKIT_NETBSD_UVM_spinlock_acquire_count
#define spinlock_release_all OSKIT_NETBSD_UVM_spinlock_release_all
#define spinlock_switchcheck OSKIT_NETBSD_UVM_spinlock_switchcheck
#define swap_syscall_lock OSKIT_NETBSD_UVM_swap_syscall_lock
#define swapdev OSKIT_NETBSD_UVM_swapdev
#define swapdev_vp OSKIT_NETBSD_UVM_swapdev_vp
#define swstrategy OSKIT_NETBSD_UVM_swstrategy
#define sys___msync13 OSKIT_NETBSD_UVM_sys___msync13
#define sys_madvise OSKIT_NETBSD_UVM_sys_madvise
#define sys_minherit OSKIT_NETBSD_UVM_sys_minherit
#define sys_mlock OSKIT_NETBSD_UVM_sys_mlock
#define sys_mlockall OSKIT_NETBSD_UVM_sys_mlockall
#define sys_mmap OSKIT_NETBSD_UVM_sys_mmap
#define sys_mprotect OSKIT_NETBSD_UVM_sys_mprotect
#define sys_munlock OSKIT_NETBSD_UVM_sys_munlock
#define sys_munlockall OSKIT_NETBSD_UVM_sys_munlockall
#define sys_munmap OSKIT_NETBSD_UVM_sys_munmap
#define sys_swapctl OSKIT_NETBSD_UVM_sys_swapctl
#define total OSKIT_NETBSD_UVM_total
#define trapwrite OSKIT_NETBSD_UVM_trapwrite
#define uao_create OSKIT_NETBSD_UVM_uao_create
#define uao_detach OSKIT_NETBSD_UVM_uao_detach
#define uao_detach_locked OSKIT_NETBSD_UVM_uao_detach_locked
#define uao_dropswap OSKIT_NETBSD_UVM_uao_dropswap
#define uao_init OSKIT_NETBSD_UVM_uao_init
#define uao_reference OSKIT_NETBSD_UVM_uao_reference
#define uao_reference_locked OSKIT_NETBSD_UVM_uao_reference_locked
#define uao_set_swslot OSKIT_NETBSD_UVM_uao_set_swslot
#define uao_swap_off OSKIT_NETBSD_UVM_uao_swap_off
#define uao_swhash_elt_pool OSKIT_NETBSD_UVM_uao_swhash_elt_pool
#define ubchist OSKIT_NETBSD_UVM_ubchist
#define unsleep OSKIT_NETBSD_UVM_unsleep
#define uvm OSKIT_NETBSD_UVM_uvm
#define uvm_aio_biodone OSKIT_NETBSD_UVM_uvm_aio_biodone
#define uvm_aiobuf_pool OSKIT_NETBSD_UVM_uvm_aiobuf_pool
#define uvm_aiodone_daemon OSKIT_NETBSD_UVM_uvm_aiodone_daemon
#define uvm_amap_pool OSKIT_NETBSD_UVM_uvm_amap_pool
#define uvm_analloc OSKIT_NETBSD_UVM_uvm_analloc
#define uvm_anfree OSKIT_NETBSD_UVM_uvm_anfree
#define uvm_anon_add OSKIT_NETBSD_UVM_uvm_anon_add
#define uvm_anon_dropswap OSKIT_NETBSD_UVM_uvm_anon_dropswap
#define uvm_anon_init OSKIT_NETBSD_UVM_uvm_anon_init
#define uvm_anon_lockloanpg OSKIT_NETBSD_UVM_uvm_anon_lockloanpg
#define uvm_anon_remove OSKIT_NETBSD_UVM_uvm_anon_remove
#define uvm_aobj_pool OSKIT_NETBSD_UVM_uvm_aobj_pool
#define uvm_cnt_head OSKIT_NETBSD_UVM_uvm_cnt_head
#define uvm_errno2vmerror OSKIT_NETBSD_UVM_uvm_errno2vmerror
#define uvm_fault OSKIT_NETBSD_UVM_uvm_fault
#define uvm_fault_unwire OSKIT_NETBSD_UVM_uvm_fault_unwire
#define uvm_fault_unwire_locked OSKIT_NETBSD_UVM_uvm_fault_unwire_locked
#define uvm_fault_wire OSKIT_NETBSD_UVM_uvm_fault_wire
#define uvm_gettimeofday OSKIT_NETBSD_UVM_uvm_gettimeofday
#define uvm_hist OSKIT_NETBSD_UVM_uvm_hist
#define uvm_histories OSKIT_NETBSD_UVM_uvm_histories
#define uvm_init OSKIT_NETBSD_UVM_uvm_init
#define uvm_km_alloc1 OSKIT_NETBSD_UVM_uvm_km_alloc1
#define uvm_km_alloc_poolpage1 OSKIT_NETBSD_UVM_uvm_km_alloc_poolpage1
#define uvm_km_free OSKIT_NETBSD_UVM_uvm_km_free
#define uvm_km_free_poolpage1 OSKIT_NETBSD_UVM_uvm_km_free_poolpage1
#define uvm_km_free_wakeup OSKIT_NETBSD_UVM_uvm_km_free_wakeup
#define uvm_km_init OSKIT_NETBSD_UVM_uvm_km_init
#define uvm_km_kmemalloc OSKIT_NETBSD_UVM_uvm_km_kmemalloc
#define uvm_km_pgremove OSKIT_NETBSD_UVM_uvm_km_pgremove
#define uvm_km_pgremove_intrsafe OSKIT_NETBSD_UVM_uvm_km_pgremove_intrsafe
#define uvm_km_suballoc OSKIT_NETBSD_UVM_uvm_km_suballoc
#define uvm_km_valloc OSKIT_NETBSD_UVM_uvm_km_valloc
#define uvm_km_valloc_align OSKIT_NETBSD_UVM_uvm_km_valloc_align
#define uvm_km_valloc_prefer_wait OSKIT_NETBSD_UVM_uvm_km_valloc_prefer_wait
#define uvm_km_valloc_wait OSKIT_NETBSD_UVM_uvm_km_valloc_wait
#define uvm_lock_fpageq OSKIT_NETBSD_UVM_uvm_lock_fpageq
#define uvm_map OSKIT_NETBSD_UVM_uvm_map
#define uvm_map_advice OSKIT_NETBSD_UVM_uvm_map_advice
#define uvm_map_call OSKIT_NETBSD_UVM_uvm_map_call
#define uvm_map_checkprot OSKIT_NETBSD_UVM_uvm_map_checkprot
#define uvm_map_clean OSKIT_NETBSD_UVM_uvm_map_clean
#define uvm_map_clip_end OSKIT_NETBSD_UVM_uvm_map_clip_end
#define uvm_map_clip_start OSKIT_NETBSD_UVM_uvm_map_clip_start
#define uvm_map_create OSKIT_NETBSD_UVM_uvm_map_create
#define uvm_map_deallocate OSKIT_NETBSD_UVM_uvm_map_deallocate
#define uvm_map_entry_pool OSKIT_NETBSD_UVM_uvm_map_entry_pool
#define uvm_map_extract OSKIT_NETBSD_UVM_uvm_map_extract
#define uvm_map_findspace OSKIT_NETBSD_UVM_uvm_map_findspace
#define uvm_map_inherit OSKIT_NETBSD_UVM_uvm_map_inherit
#define uvm_map_init OSKIT_NETBSD_UVM_uvm_map_init
#define uvm_map_lookup_entry OSKIT_NETBSD_UVM_uvm_map_lookup_entry
#define uvm_map_pageable OSKIT_NETBSD_UVM_uvm_map_pageable
#define uvm_map_pageable_all OSKIT_NETBSD_UVM_uvm_map_pageable_all
#define uvm_map_printit OSKIT_NETBSD_UVM_uvm_map_printit
#define uvm_map_protect OSKIT_NETBSD_UVM_uvm_map_protect
#define uvm_map_reference OSKIT_NETBSD_UVM_uvm_map_reference
#define uvm_map_replace OSKIT_NETBSD_UVM_uvm_map_replace
#define uvm_map_reserve OSKIT_NETBSD_UVM_uvm_map_reserve
#define uvm_map_setup OSKIT_NETBSD_UVM_uvm_map_setup
#define uvm_map_submap OSKIT_NETBSD_UVM_uvm_map_submap
#define uvm_maxkaddr OSKIT_NETBSD_UVM_uvm_maxkaddr
#define uvm_mk_pcluster OSKIT_NETBSD_UVM_uvm_mk_pcluster
#define uvm_mlk_call OSKIT_NETBSD_UVM_uvm_mlk_call
#define uvm_mlk_hint OSKIT_NETBSD_UVM_uvm_mlk_hint
#define uvm_mmap OSKIT_NETBSD_UVM_uvm_mmap
#define uvm_object_printit OSKIT_NETBSD_UVM_uvm_object_printit
#define uvm_page_init OSKIT_NETBSD_UVM_uvm_page_init
#define uvm_page_lookup_freelist OSKIT_NETBSD_UVM_uvm_page_lookup_freelist
#define uvm_page_physdump OSKIT_NETBSD_UVM_uvm_page_physdump
#define uvm_page_physget OSKIT_NETBSD_UVM_uvm_page_physget
#define uvm_page_physload OSKIT_NETBSD_UVM_uvm_page_physload
#define uvm_page_printit OSKIT_NETBSD_UVM_uvm_page_printit
#define uvm_page_rehash OSKIT_NETBSD_UVM_uvm_page_rehash
#define uvm_page_unbusy OSKIT_NETBSD_UVM_uvm_page_unbusy
#define uvm_pageactivate OSKIT_NETBSD_UVM_uvm_pageactivate
#define uvm_pagealloc_strat OSKIT_NETBSD_UVM_uvm_pagealloc_strat
#define uvm_pageboot_alloc OSKIT_NETBSD_UVM_uvm_pageboot_alloc
#define uvm_pagecopy OSKIT_NETBSD_UVM_uvm_pagecopy
#define uvm_pagedeactivate OSKIT_NETBSD_UVM_uvm_pagedeactivate
#define uvm_pagefree OSKIT_NETBSD_UVM_uvm_pagefree
#define uvm_pageidlezero OSKIT_NETBSD_UVM_uvm_pageidlezero
#define uvm_pagelookup OSKIT_NETBSD_UVM_uvm_pagelookup
#define uvm_pageout OSKIT_NETBSD_UVM_uvm_pageout
#define uvm_pager_dropcluster OSKIT_NETBSD_UVM_uvm_pager_dropcluster
#define uvm_pager_init OSKIT_NETBSD_UVM_uvm_pager_init
#define uvm_pager_put OSKIT_NETBSD_UVM_uvm_pager_put
#define uvm_pageratop OSKIT_NETBSD_UVM_uvm_pageratop
#define uvm_pagerealloc OSKIT_NETBSD_UVM_uvm_pagerealloc
#define uvm_pagermapin OSKIT_NETBSD_UVM_uvm_pagermapin
#define uvm_pagermapout OSKIT_NETBSD_UVM_uvm_pagermapout
#define uvm_pageunwire OSKIT_NETBSD_UVM_uvm_pageunwire
#define uvm_pagewire OSKIT_NETBSD_UVM_uvm_pagewire
#define uvm_pagezero OSKIT_NETBSD_UVM_uvm_pagezero
#define uvm_setpagesize OSKIT_NETBSD_UVM_uvm_setpagesize
#define uvm_swap_alloc OSKIT_NETBSD_UVM_uvm_swap_alloc
#define uvm_swap_free OSKIT_NETBSD_UVM_uvm_swap_free
#define uvm_swap_get OSKIT_NETBSD_UVM_uvm_swap_get
#define uvm_swap_init OSKIT_NETBSD_UVM_uvm_swap_init
#define uvm_swap_markbad OSKIT_NETBSD_UVM_uvm_swap_markbad
#define uvm_swap_put OSKIT_NETBSD_UVM_uvm_swap_put
#define uvm_unlock_fpageq OSKIT_NETBSD_UVM_uvm_unlock_fpageq
#define uvm_unmap OSKIT_NETBSD_UVM_uvm_unmap
#define uvm_unmap_detach OSKIT_NETBSD_UVM_uvm_unmap_detach
#define uvm_unmap_remove OSKIT_NETBSD_UVM_uvm_unmap_remove
#define uvm_vmspace_pool OSKIT_NETBSD_UVM_uvm_vmspace_pool
#define uvm_vnodeops OSKIT_NETBSD_UVM_uvm_vnodeops
#define uvm_wait OSKIT_NETBSD_UVM_uvm_wait
#define uvmcnt_dump OSKIT_NETBSD_UVM_uvmcnt_dump
#define uvmexp OSKIT_NETBSD_UVM_uvmexp
#define uvmexp_print OSKIT_NETBSD_UVM_uvmexp_print
#define uvmfault_anonget OSKIT_NETBSD_UVM_uvmfault_anonget
#define uvmhist_print_enabled OSKIT_NETBSD_UVM_uvmhist_print_enabled
#define uvmpagerops OSKIT_NETBSD_UVM_uvmpagerops
#define uvmspace_alloc OSKIT_NETBSD_UVM_uvmspace_alloc
#define uvmspace_exec OSKIT_NETBSD_UVM_uvmspace_exec
#define uvmspace_fork OSKIT_NETBSD_UVM_uvmspace_fork
#define uvmspace_free OSKIT_NETBSD_UVM_uvmspace_free
#define uvmspace_init OSKIT_NETBSD_UVM_uvmspace_init
#define uvmspace_share OSKIT_NETBSD_UVM_uvmspace_share
#define uvmspace_unshare OSKIT_NETBSD_UVM_uvmspace_unshare
#define uvn_findpages OSKIT_NETBSD_UVM_uvn_findpages
#define uvn_releasepg OSKIT_NETBSD_UVM_uvn_releasepg
#define vfs_list OSKIT_NETBSD_UVM_vfs_list
#define vhold OSKIT_NETBSD_UVM_vhold
#define vm_nphysseg OSKIT_NETBSD_UVM_vm_nphysseg
#define vm_page_zero_enable OSKIT_NETBSD_UVM_vm_page_zero_enable
#define vm_physmem OSKIT_NETBSD_UVM_vm_physmem
#define vmi_list OSKIT_NETBSD_UVM_vmi_list
#define vmi_list_slock OSKIT_NETBSD_UVM_vmi_list_slock
#define vmmap OSKIT_NETBSD_UVM_vmmap
#define vmspace0 OSKIT_NETBSD_UVM_vmspace0
#define vndbuf_pool OSKIT_NETBSD_UVM_vndbuf_pool
#define vndxfer_pool OSKIT_NETBSD_UVM_vndxfer_pool
#define vnode_free_list OSKIT_NETBSD_UVM_vnode_free_list
#define vnode_free_list_slock OSKIT_NETBSD_UVM_vnode_free_list_slock
#define vnode_hold_list OSKIT_NETBSD_UVM_vnode_hold_list
#define vnode_pool OSKIT_NETBSD_UVM_vnode_pool
#define vput OSKIT_NETBSD_UVM_vput
#define vrele OSKIT_NETBSD_UVM_vrele
#define vtophys OSKIT_NETBSD_UVM_vtophys
#define vttoif_tab OSKIT_NETBSD_UVM_vttoif_tab
#define vwakeup OSKIT_NETBSD_UVM_vwakeup
#define wakeup OSKIT_NETBSD_UVM_wakeup
#define wakeup_one OSKIT_NETBSD_UVM_wakeup_one
#define want_resched OSKIT_NETBSD_UVM_want_resched

#endif /*_OSKIT_UVM_GLOBAL_H_*/
