#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Array_SorterObjectArray {
    IL2CPP_REGISTER_METHOD(0x001E14D0, void, ctor, (app::Array_SorterObjectArray__Boxed * this_ptr, app::Object__Array* keys, app::Object__Array* items, app::IComparer* comparer))
    IL2CPP_REGISTER_METHOD(0x001E14E0, void, SwapIfGreaterWithItems, (app::Array_SorterObjectArray__Boxed * this_ptr, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x001E14F0, void, Swap, (app::Array_SorterObjectArray__Boxed * this_ptr, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x001E1500, void, Sort, (app::Array_SorterObjectArray__Boxed * this_ptr, int32_t left, int32_t length))
    IL2CPP_REGISTER_METHOD(0x001E1500, void, IntrospectiveSort, (app::Array_SorterObjectArray__Boxed * this_ptr, int32_t left, int32_t length))
    IL2CPP_REGISTER_METHODINFO(0x047022F8, Array_SorterObjectArray_IntrospectiveSort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x001E1510, void, IntroSort, (app::Array_SorterObjectArray__Boxed * this_ptr, int32_t lo, int32_t hi, int32_t depth_limit))
    IL2CPP_REGISTER_METHOD(0x001E1520, int32_t, PickPivotAndPartition, (app::Array_SorterObjectArray__Boxed * this_ptr, int32_t lo, int32_t hi))
    IL2CPP_REGISTER_METHOD(0x001E1530, void, Heapsort, (app::Array_SorterObjectArray__Boxed * this_ptr, int32_t lo, int32_t hi))
    IL2CPP_REGISTER_METHOD(0x001E1540, void, DownHeap, (app::Array_SorterObjectArray__Boxed * this_ptr, int32_t i, int32_t n, int32_t lo))
    IL2CPP_REGISTER_METHOD(0x001E1550, void, InsertionSort, (app::Array_SorterObjectArray__Boxed * this_ptr, int32_t lo, int32_t hi))
} // namespace app::classes::System::Array_SorterObjectArray
