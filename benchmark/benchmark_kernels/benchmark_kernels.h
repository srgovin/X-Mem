/**
 * @file
 * 
 * @brief Header file for benchmark kernel functions for doing the actual work we care about. :)
 * 
 * (C) 2014 Microsoft Corporation
 */

#ifndef __BENCHMARK_KERNELS_H
#define __BENCHMARK_KERNELS_H

//Libraries
#include <cstdint>

namespace xmem {
	namespace benchmark {
		namespace benchmark_kernels {

			/***********************************************************************
			 ***********************************************************************
			 ********************** LATENCY-RELATED BENCHMARK KERNELS **************
			 ***********************************************************************
			 ***********************************************************************/

			/* --------------------- DUMMY BENCHMARK ROUTINES --------------------------- */

			/**
			 * @brief Mimics the __chasePointers() method but doesn't do the memory accesses.
			 * @returns Undefined.
			 */
			int32_t dummy_chasePointers(uintptr_t*, uintptr_t**, size_t len);

			/* ------------------------------------------------------------------------- */
			/* --------------------- CORE BENCHMARK ROUTINES --------------------------- */
			/* ------------------------------------------------------------------------- */

			/**
			 * @brief Walks over the allocated memory in random order by chasing pointers.
			 * @param num_pointers The total number of pointer dereferences to make.
			 * @returns Undefined.
			 */
			int32_t chasePointers(uintptr_t* first_address, uintptr_t** last_touched_address, size_t len);
			
			
			
			/***********************************************************************
			 ***********************************************************************
			 ******************* THROUGHPUT-RELATED BENCHMARK KERNELS **************
			 ***********************************************************************
			 ***********************************************************************/

			/* --------------------- DUMMY BENCHMARK ROUTINES --------------------------- */

			/**
			 * @brief Does nothing. Used for measuring the time it takes just to call a benchmark routine via function pointer.
			 * @returns Undefined.
			 */
			int32_t dummy_empty(void*, void*);

			/* ------------ SEQUENTIAL LOOP --------------*/

			/**
			 * @brief Used for measuring the time spent doing everything in forward sequential Word 32 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwSequentialLoop_Word32(void* start_address, void* end_address);

			/**
			 * @brief Used for measuring the time spent doing everything in forward sequential Word 64 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwSequentialLoop_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward sequential Word 128 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwSequentialLoop_Word128(void* start_address, void* end_address);

			/**
			 * @brief Used for measuring the time spent doing everything in forward sequential Word 256 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwSequentialLoop_Word256(void* start_address, void* end_address);

			/**
			 * @brief Used for measuring the time spent doing everything in reverse sequential Word 32 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revSequentialLoop_Word32(void* start_address, void* end_address);

			/**
			 * @brief Used for measuring the time spent doing everything in reverse sequential Word 64 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revSequentialLoop_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse sequential Word 128 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revSequentialLoop_Word128(void* start_address, void* end_address);

			/**
			 * @brief Used for measuring the time spent doing everything in reverse sequential Word 256 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revSequentialLoop_Word256(void* start_address, void* end_address);

			/* ------------ STRIDE 2 LOOP --------------*/

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 2-strided Word 32 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride2Loop_Word32(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 2-strided Word 64 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride2Loop_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 2-strided Word 128 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride2Loop_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 2-strided Word 256 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride2Loop_Word256(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 2-strided Word 32 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride2Loop_Word32(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 2-strided Word 64 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride2Loop_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 2-strided Word 128 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride2Loop_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 2-strided Word 256 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride2Loop_Word256(void* start_address, void* end_address);

			/* ------------ STRIDE 4 LOOP --------------*/

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 4-strided Word 32 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride4Loop_Word32(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 4-strided Word 64 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride4Loop_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 4-strided Word 128 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride4Loop_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 4-strided Word 256 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride4Loop_Word256(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 4-strided Word 32 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride4Loop_Word32(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 4-strided Word 64 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride4Loop_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 4-strided Word 128 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride4Loop_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 4-strided Word 256 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride4Loop_Word256(void* start_address, void* end_address);

			/* ------------ STRIDE 8 LOOP --------------*/

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 8-strided Word 32 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride8Loop_Word32(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 8-strided Word 64 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride8Loop_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 8-strided Word 128 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride8Loop_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 8-strided Word 256 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride8Loop_Word256(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 8-strided Word 32 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride8Loop_Word32(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 8-strided Word 64 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride8Loop_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 8-strided Word 128 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride8Loop_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 8-strided Word 256 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride8Loop_Word256(void* start_address, void* end_address);

			/* ------------ STRIDE 16 LOOP --------------*/

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 16-strided Word 32 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride16Loop_Word32(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 16-strided Word 64 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride16Loop_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 16-strided Word 128 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride16Loop_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in forward 16-strided Word 256 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_forwStride16Loop_Word256(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 16-strided Word 32 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride16Loop_Word32(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 16-strided Word 64 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride16Loop_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 16-strided Word 128 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride16Loop_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in reverse 16-strided Word 256 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_revStride16Loop_Word256(void* start_address, void* end_address);

			/* ------------ RANDOM LOOP --------------*/

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in random Word 32 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_randomLoop_Word32(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in random Word 64 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_randomLoop_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in random Word 128 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_randomLoop_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Used for measuring the time spent doing everything in random Word 256 loops except for the memory access itself.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t dummy_randomLoop_Word256(void* start_address, void* end_address);

			/* ------------------------------------------------------------------------- */
			/* --------------------- CORE BENCHMARK ROUTINES --------------------------- */
			/* ------------------------------------------------------------------------- */

			/* ------------ SEQUENTIAL READ --------------*/

			/**
			 * @brief Walks over the allocated memory forward sequentially, reading in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwSequentialRead_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory forward sequentially, reading in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwSequentialRead_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory forward sequentially, reading in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwSequentialRead_Word128(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory forward sequentially, reading in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwSequentialRead_Word256(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory reverse sequentially, reading in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revSequentialRead_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory reverse sequentially, reading in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revSequentialRead_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory reverse sequentially, reading in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revSequentialRead_Word128(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory reverse sequentially, reading in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revSequentialRead_Word256(void* start_address, void* end_address);

			/* ------------ SEQUENTIAL WRITE --------------*/

			/**
			 * @brief Walks over the allocated memory forward sequentially, writing in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwSequentialWrite_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory forward sequentially, writing in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwSequentialWrite_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory forward sequentially, writing in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwSequentialWrite_Word128(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory forward sequentially, writing in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwSequentialWrite_Word256(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory reverse sequentially, writing in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revSequentialWrite_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory reverse sequentially, writing in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revSequentialWrite_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory reverse sequentially, writing in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revSequentialWrite_Word128(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory reverse sequentially, writing in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revSequentialWrite_Word256(void* start_address, void* end_address);

			/* ------------ STRIDE 2 READ --------------*/

			/**
			 * @brief Walks over the allocated memory in forward strides of size 2, reading in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride2Read_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in forward strides of size 2, reading in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride2Read_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 2, reading in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride2Read_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 2, reading in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride2Read_Word256(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 2, reading in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride2Read_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 2, reading in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride2Read_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 2, reading in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride2Read_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 2, reading in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride2Read_Word256(void* start_address, void* end_address);

			/* ------------ STRIDE 2 WRITE --------------*/

			/**
			 * @brief Walks over the allocated memory in forward strides of size 2, writing in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride2Write_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in forward strides of size 2, writing in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride2Write_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 2, writing in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride2Write_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 2, writing in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride2Write_Word256(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 2, writing in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride2Write_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 2, writing in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride2Write_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 2, writing in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride2Write_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 2, writing in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride2Write_Word256(void* start_address, void* end_address);

			/* ------------ STRIDE 4 READ --------------*/

			/**
			 * @brief Walks over the allocated memory in forward strides of size 4, reading in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride4Read_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in forward strides of size 4, reading in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride4Read_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 4, reading in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride4Read_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 4, reading in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride4Read_Word256(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 4, reading in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride4Read_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 4, reading in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride4Read_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 4, reading in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride4Read_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 4, reading in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride4Read_Word256(void* start_address, void* end_address);

			/* ------------ STRIDE 4 WRITE --------------*/

			/**
			 * @brief Walks over the allocated memory in forward strides of size 4, writing in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride4Write_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in forward strides of size 4, writing in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride4Write_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 4, writing in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride4Write_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 4, writing in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride4Write_Word256(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 4, writing in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride4Write_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 4, writing in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride4Write_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 4, writing in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride4Write_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 4, writing in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride4Write_Word256(void* start_address, void* end_address);

			/* ------------ STRIDE 8 READ --------------*/

			/**
			 * @brief Walks over the allocated memory in forward strides of size 8, reading in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride8Read_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in forward strides of size 8, reading in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride8Read_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 8, reading in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride8Read_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 8, reading in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride8Read_Word256(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 8, reading in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride8Read_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 8, reading in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride8Read_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 8, reading in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride8Read_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 8, reading in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride8Read_Word256(void* start_address, void* end_address);

			/* ------------ STRIDE 8 WRITE --------------*/

			/**
			 * @brief Walks over the allocated memory in forward strides of size 8, writing in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 */
			int32_t forwStride8Write_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in forward strides of size 8, writing in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride8Write_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 8, writing in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride8Write_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 8, writing in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride8Write_Word256(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 8, writing in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride8Write_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 8, writing in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride8Write_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 8, writing in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride8Write_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 8, writing in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride8Write_Word256(void* start_address, void* end_address);

			/* ------------ STRIDE 16 READ --------------*/

			/**
			 * @brief Walks over the allocated memory in forward strides of size 16, reading in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride16Read_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in forward strides of size 16, reading in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride16Read_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 16, reading in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride16Read_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 16, reading in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride16Read_Word256(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 16, reading in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride16Read_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 16, reading in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride16Read_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 16, reading in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride16Read_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 16, reading in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride16Read_Word256(void* start_address, void* end_address);

			/* ------------ STRIDE 16 WRITE --------------*/

			/**
			 * @brief Walks over the allocated memory in forward strides of size 16, writing in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride16Write_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in forward strides of size 16, writing in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride16Write_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 16, writing in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride16Write_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in forward strides of size 16, writing in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t forwStride16Write_Word256(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 16, writing in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride16Write_Word32(void* start_address, void* end_address);

			/**
			 * @brief Walks over the allocated memory in reverse strides of size 16, writing in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride16Write_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 16, writing in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 */
			int32_t revStride16Write_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in reverse strides of size 16, writing in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t revStride16Write_Word256(void* start_address, void* end_address);

			/* ------------ RANDOM READ --------------*/

			/**
			 * @brief TODO. Walks over the allocated memory in random order, reading in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t randomRead_Word32(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in random order, reading in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t randomRead_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in random order, reading in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t randomRead_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in random order, reading in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t randomRead_Word256(void* start_address, void* end_address);

			/* ------------ RANDOM WRITE --------------*/

			/**
			 * @brief TODO. Walks over the allocated memory in random order, writing in 32-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t randomWrite_Word32(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in random order, writing in 64-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t randomWrite_Word64(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in random order, writing in 128-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 */
			int32_t randomWrite_Word128(void* start_address, void* end_address);

			/**
			 * @brief TODO. Walks over the allocated memory in random order, writing in 256-bit chunks.
			 * @param start_address The beginning of the memory region of interest.
			 * @param end_address The end of the memory region of interest.
			 * @returns Undefined.
			 */
			int32_t randomWrite_Word256(void* start_address, void* end_address);
		};
	};
};

#endif
