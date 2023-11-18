#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Array_SorterGenericArray__Boxed.h>
#include <Modloader/app/structs/Array.h>
#include <Modloader/app/structs/IComparer.h>

namespace app::classes::System::Array_SorterGenericArray {
    IL2CPP_REGISTER_METHOD(0x001E1420, void, ctor, (app::Array_SorterGenericArray__Boxed * this_ptr, app::Array* keys, app::Array* items, app::IComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x001E1430, void, SwapIfGreaterWithItems, (app::Array_SorterGenericArray__Boxed * this_ptr, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x001E1440, void, Swap, (app::Array_SorterGenericArray__Boxed * this_ptr, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x001E1450, void, Sort, (app::Array_SorterGenericArray__Boxed * this_ptr, int32_t left, int32_t length))
    IL2CPP_REGISTER_METHOD(0x001E1450, void, IntrospectiveSort, (app::Array_SorterGenericArray__Boxed * this_ptr, int32_t left, int32_t length))
    IL2CPP_REGISTER_METHOD(0x001E1460, void, IntroSort, (app::Array_SorterGenericArray__Boxed * this_ptr, int32_t lo, int32_t hi, int32_t depth_limit))
    IL2CPP_REGISTER_METHOD(0x001E1470, int32_t, PickPivotAndPartition, (app::Array_SorterGenericArray__Boxed * this_ptr, int32_t lo, int32_t hi))
    IL2CPP_REGISTER_METHOD(0x001E1480, void, Heapsort, (app::Array_SorterGenericArray__Boxed * this_ptr, int32_t lo, int32_t hi))
    IL2CPP_REGISTER_METHOD(0x001E1490, void, DownHeap, (app::Array_SorterGenericArray__Boxed * this_ptr, int32_t i, int32_t n, int32_t lo))
    IL2CPP_REGISTER_METHOD(0x001E14A0, void, InsertionSort, (app::Array_SorterGenericArray__Boxed * this_ptr, int32_t lo, int32_t hi))
} // namespace app::classes::System::Array_SorterGenericArray
