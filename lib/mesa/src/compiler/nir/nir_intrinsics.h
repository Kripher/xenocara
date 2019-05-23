/* Copyright (C) 2018 Red Hat
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

#ifndef _NIR_INTRINSICS_
#define _NIR_INTRINSICS_



typedef enum {
   nir_intrinsic_atomic_counter_add,
   nir_intrinsic_atomic_counter_add_deref,
   nir_intrinsic_atomic_counter_and,
   nir_intrinsic_atomic_counter_and_deref,
   nir_intrinsic_atomic_counter_comp_swap,
   nir_intrinsic_atomic_counter_comp_swap_deref,
   nir_intrinsic_atomic_counter_exchange,
   nir_intrinsic_atomic_counter_exchange_deref,
   nir_intrinsic_atomic_counter_inc,
   nir_intrinsic_atomic_counter_inc_deref,
   nir_intrinsic_atomic_counter_max,
   nir_intrinsic_atomic_counter_max_deref,
   nir_intrinsic_atomic_counter_min,
   nir_intrinsic_atomic_counter_min_deref,
   nir_intrinsic_atomic_counter_or,
   nir_intrinsic_atomic_counter_or_deref,
   nir_intrinsic_atomic_counter_post_dec,
   nir_intrinsic_atomic_counter_post_dec_deref,
   nir_intrinsic_atomic_counter_pre_dec,
   nir_intrinsic_atomic_counter_pre_dec_deref,
   nir_intrinsic_atomic_counter_read,
   nir_intrinsic_atomic_counter_read_deref,
   nir_intrinsic_atomic_counter_xor,
   nir_intrinsic_atomic_counter_xor_deref,
   nir_intrinsic_ballot,
   nir_intrinsic_ballot_bit_count_exclusive,
   nir_intrinsic_ballot_bit_count_inclusive,
   nir_intrinsic_ballot_bit_count_reduce,
   nir_intrinsic_ballot_bitfield_extract,
   nir_intrinsic_ballot_find_lsb,
   nir_intrinsic_ballot_find_msb,
   nir_intrinsic_barrier,
   nir_intrinsic_begin_invocation_interlock,
   nir_intrinsic_copy_deref,
   nir_intrinsic_deref_atomic_add,
   nir_intrinsic_deref_atomic_and,
   nir_intrinsic_deref_atomic_comp_swap,
   nir_intrinsic_deref_atomic_exchange,
   nir_intrinsic_deref_atomic_fadd,
   nir_intrinsic_deref_atomic_fcomp_swap,
   nir_intrinsic_deref_atomic_fmax,
   nir_intrinsic_deref_atomic_fmin,
   nir_intrinsic_deref_atomic_imax,
   nir_intrinsic_deref_atomic_imin,
   nir_intrinsic_deref_atomic_or,
   nir_intrinsic_deref_atomic_umax,
   nir_intrinsic_deref_atomic_umin,
   nir_intrinsic_deref_atomic_xor,
   nir_intrinsic_discard,
   nir_intrinsic_discard_if,
   nir_intrinsic_elect,
   nir_intrinsic_emit_vertex,
   nir_intrinsic_emit_vertex_with_counter,
   nir_intrinsic_end_invocation_interlock,
   nir_intrinsic_end_primitive,
   nir_intrinsic_end_primitive_with_counter,
   nir_intrinsic_exclusive_scan,
   nir_intrinsic_first_invocation,
   nir_intrinsic_get_buffer_size,
   nir_intrinsic_global_atomic_add,
   nir_intrinsic_global_atomic_and,
   nir_intrinsic_global_atomic_comp_swap,
   nir_intrinsic_global_atomic_exchange,
   nir_intrinsic_global_atomic_fadd,
   nir_intrinsic_global_atomic_fcomp_swap,
   nir_intrinsic_global_atomic_fmax,
   nir_intrinsic_global_atomic_fmin,
   nir_intrinsic_global_atomic_imax,
   nir_intrinsic_global_atomic_imin,
   nir_intrinsic_global_atomic_or,
   nir_intrinsic_global_atomic_umax,
   nir_intrinsic_global_atomic_umin,
   nir_intrinsic_global_atomic_xor,
   nir_intrinsic_group_memory_barrier,
   nir_intrinsic_image_atomic_add,
   nir_intrinsic_image_atomic_and,
   nir_intrinsic_image_atomic_comp_swap,
   nir_intrinsic_image_atomic_exchange,
   nir_intrinsic_image_atomic_fadd,
   nir_intrinsic_image_atomic_max,
   nir_intrinsic_image_atomic_min,
   nir_intrinsic_image_atomic_or,
   nir_intrinsic_image_atomic_xor,
   nir_intrinsic_image_deref_atomic_add,
   nir_intrinsic_image_deref_atomic_and,
   nir_intrinsic_image_deref_atomic_comp_swap,
   nir_intrinsic_image_deref_atomic_exchange,
   nir_intrinsic_image_deref_atomic_fadd,
   nir_intrinsic_image_deref_atomic_max,
   nir_intrinsic_image_deref_atomic_min,
   nir_intrinsic_image_deref_atomic_or,
   nir_intrinsic_image_deref_atomic_xor,
   nir_intrinsic_image_deref_load,
   nir_intrinsic_image_deref_load_param_intel,
   nir_intrinsic_image_deref_load_raw_intel,
   nir_intrinsic_image_deref_samples,
   nir_intrinsic_image_deref_size,
   nir_intrinsic_image_deref_store,
   nir_intrinsic_image_deref_store_raw_intel,
   nir_intrinsic_image_load,
   nir_intrinsic_image_load_raw_intel,
   nir_intrinsic_image_samples,
   nir_intrinsic_image_size,
   nir_intrinsic_image_store,
   nir_intrinsic_image_store_raw_intel,
   nir_intrinsic_inclusive_scan,
   nir_intrinsic_interp_deref_at_centroid,
   nir_intrinsic_interp_deref_at_offset,
   nir_intrinsic_interp_deref_at_sample,
   nir_intrinsic_load_alpha_ref_float,
   nir_intrinsic_load_barycentric_at_offset,
   nir_intrinsic_load_barycentric_at_sample,
   nir_intrinsic_load_barycentric_centroid,
   nir_intrinsic_load_barycentric_pixel,
   nir_intrinsic_load_barycentric_sample,
   nir_intrinsic_load_base_instance,
   nir_intrinsic_load_base_vertex,
   nir_intrinsic_load_blend_const_color_a_float,
   nir_intrinsic_load_blend_const_color_aaaa8888_unorm,
   nir_intrinsic_load_blend_const_color_b_float,
   nir_intrinsic_load_blend_const_color_g_float,
   nir_intrinsic_load_blend_const_color_r_float,
   nir_intrinsic_load_blend_const_color_rgba8888_unorm,
   nir_intrinsic_load_constant,
   nir_intrinsic_load_deref,
   nir_intrinsic_load_draw_id,
   nir_intrinsic_load_first_vertex,
   nir_intrinsic_load_frag_coord,
   nir_intrinsic_load_front_face,
   nir_intrinsic_load_global,
   nir_intrinsic_load_global_invocation_id,
   nir_intrinsic_load_helper_invocation,
   nir_intrinsic_load_input,
   nir_intrinsic_load_instance_id,
   nir_intrinsic_load_interpolated_input,
   nir_intrinsic_load_invocation_id,
   nir_intrinsic_load_is_indexed_draw,
   nir_intrinsic_load_layer_id,
   nir_intrinsic_load_local_group_size,
   nir_intrinsic_load_local_invocation_id,
   nir_intrinsic_load_local_invocation_index,
   nir_intrinsic_load_num_subgroups,
   nir_intrinsic_load_num_work_groups,
   nir_intrinsic_load_output,
   nir_intrinsic_load_param,
   nir_intrinsic_load_patch_vertices_in,
   nir_intrinsic_load_per_vertex_input,
   nir_intrinsic_load_per_vertex_output,
   nir_intrinsic_load_primitive_id,
   nir_intrinsic_load_push_constant,
   nir_intrinsic_load_sample_id,
   nir_intrinsic_load_sample_id_no_per_sample,
   nir_intrinsic_load_sample_mask_in,
   nir_intrinsic_load_sample_pos,
   nir_intrinsic_load_shared,
   nir_intrinsic_load_ssbo,
   nir_intrinsic_load_subgroup_eq_mask,
   nir_intrinsic_load_subgroup_ge_mask,
   nir_intrinsic_load_subgroup_gt_mask,
   nir_intrinsic_load_subgroup_id,
   nir_intrinsic_load_subgroup_invocation,
   nir_intrinsic_load_subgroup_le_mask,
   nir_intrinsic_load_subgroup_lt_mask,
   nir_intrinsic_load_subgroup_size,
   nir_intrinsic_load_tess_coord,
   nir_intrinsic_load_tess_level_inner,
   nir_intrinsic_load_tess_level_outer,
   nir_intrinsic_load_ubo,
   nir_intrinsic_load_uniform,
   nir_intrinsic_load_user_clip_plane,
   nir_intrinsic_load_vertex_id,
   nir_intrinsic_load_vertex_id_zero_base,
   nir_intrinsic_load_view_index,
   nir_intrinsic_load_vulkan_descriptor,
   nir_intrinsic_load_work_dim,
   nir_intrinsic_load_work_group_id,
   nir_intrinsic_memory_barrier,
   nir_intrinsic_memory_barrier_atomic_counter,
   nir_intrinsic_memory_barrier_buffer,
   nir_intrinsic_memory_barrier_image,
   nir_intrinsic_memory_barrier_shared,
   nir_intrinsic_nop,
   nir_intrinsic_quad_broadcast,
   nir_intrinsic_quad_swap_diagonal,
   nir_intrinsic_quad_swap_horizontal,
   nir_intrinsic_quad_swap_vertical,
   nir_intrinsic_read_first_invocation,
   nir_intrinsic_read_invocation,
   nir_intrinsic_reduce,
   nir_intrinsic_set_vertex_count,
   nir_intrinsic_shader_clock,
   nir_intrinsic_shared_atomic_add,
   nir_intrinsic_shared_atomic_and,
   nir_intrinsic_shared_atomic_comp_swap,
   nir_intrinsic_shared_atomic_exchange,
   nir_intrinsic_shared_atomic_fadd,
   nir_intrinsic_shared_atomic_fcomp_swap,
   nir_intrinsic_shared_atomic_fmax,
   nir_intrinsic_shared_atomic_fmin,
   nir_intrinsic_shared_atomic_imax,
   nir_intrinsic_shared_atomic_imin,
   nir_intrinsic_shared_atomic_or,
   nir_intrinsic_shared_atomic_umax,
   nir_intrinsic_shared_atomic_umin,
   nir_intrinsic_shared_atomic_xor,
   nir_intrinsic_shuffle,
   nir_intrinsic_shuffle_down,
   nir_intrinsic_shuffle_up,
   nir_intrinsic_shuffle_xor,
   nir_intrinsic_ssbo_atomic_add,
   nir_intrinsic_ssbo_atomic_and,
   nir_intrinsic_ssbo_atomic_comp_swap,
   nir_intrinsic_ssbo_atomic_exchange,
   nir_intrinsic_ssbo_atomic_fadd,
   nir_intrinsic_ssbo_atomic_fcomp_swap,
   nir_intrinsic_ssbo_atomic_fmax,
   nir_intrinsic_ssbo_atomic_fmin,
   nir_intrinsic_ssbo_atomic_imax,
   nir_intrinsic_ssbo_atomic_imin,
   nir_intrinsic_ssbo_atomic_or,
   nir_intrinsic_ssbo_atomic_umax,
   nir_intrinsic_ssbo_atomic_umin,
   nir_intrinsic_ssbo_atomic_xor,
   nir_intrinsic_store_deref,
   nir_intrinsic_store_global,
   nir_intrinsic_store_output,
   nir_intrinsic_store_per_vertex_output,
   nir_intrinsic_store_shared,
   nir_intrinsic_store_ssbo,
   nir_intrinsic_vote_all,
   nir_intrinsic_vote_any,
   nir_intrinsic_vote_feq,
   nir_intrinsic_vote_ieq,
   nir_intrinsic_vulkan_resource_index,
   nir_intrinsic_vulkan_resource_reindex,

   nir_last_intrinsic = nir_intrinsic_vulkan_resource_reindex,
   nir_num_intrinsics = nir_last_intrinsic + 1
} nir_intrinsic_op;

#endif /* _NIR_INTRINSICS_ */