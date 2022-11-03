#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_ {
    IL2CPP_REGISTER_METHOD(0x02F60F30, void, Sort_1, (app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array * keys, int32_t index, int32_t length, app::IComparer_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047758B0, ArraySortHelper_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F61250, int32_t, BinarySearch, (app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array * array, int32_t index, int32_t length, app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData value, app::IComparer_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04735FF8, ArraySortHelper_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F61400, void, Sort_2, (app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array * keys, int32_t index, int32_t length, app::Comparison_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x047341D8, ArraySortHelper_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C8AB70, int32_t, InternalBinarySearch, (app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array * array, int32_t index, int32_t length, app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData value, app::IComparer_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AD30, void, SwapIfGreater, (app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array * keys, app::Comparison_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C8AEE0, void, Swap, (app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array * keys, int32_t left, int32_t length, app::Comparison_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8AF80, int32_t, PickPivotAndPartition, (app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B3D0, void, DownHeap, (app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8B740, void, InsertionSort, (app::LightCanvasEditorTextureCache_LightCanvasEditorTextureData__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_LightCanvasEditorTextureCache_LightCanvasEditorTextureData_
