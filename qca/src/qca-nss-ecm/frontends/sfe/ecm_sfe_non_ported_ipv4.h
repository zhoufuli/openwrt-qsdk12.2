/*
 **************************************************************************
 * Copyright (c) 2021-2023 Qualcomm Innovation Center, Inc. All rights reserved.
 * Copyright (c) 2015 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 **************************************************************************
 */

extern bool ecm_sfe_non_ported_ipv4_debugfs_init(struct dentry *dentry);

extern struct ecm_front_end_connection_instance *ecm_sfe_non_ported_ipv4_connection_instance_alloc(
								uint32_t flags, int protocol,
								struct ecm_db_connection_instance **nci);
extern void ecm_sfe_non_ported_ipv4_sit_set_peer(struct ecm_front_end_connection_instance *feci, struct sk_buff *skb);
extern void ecm_sfe_non_ported_ipv4_connection_set(struct ecm_front_end_connection_instance *feci, uint32_t flags);