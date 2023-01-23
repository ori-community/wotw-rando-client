#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberShaderPrewarmer_PrewarmedShader__Array.h>
#include <Modloader/app/structs/IComparer_1_UberShaderPrewarmer_PrewarmedShader_.h>
#include <Modloader/app/structs/UberShaderPrewarmer_PrewarmedShader.h>
#include <Modloader/app/structs/Comparison_1_UberShaderPrewarmer_PrewarmedShader_.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberShaderPrewarmer_PrewarmedShader_ {
    IL2CPP_REGISTER_METHOD(0x02F63410, void, Sort_1, (app::UberShaderPrewarmer_PrewarmedShader__Array * keys, int32_t index, int32_t length, app::IComparer_1_UberShaderPrewarmer_PrewarmedShader_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x04734DC0, ArraySortHelper_1_UberShaderPrewarmer_PrewarmedShader__Sort__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F63730, int32_t, BinarySearch, (app::UberShaderPrewarmer_PrewarmedShader__Array * array, int32_t index, int32_t length, app::UberShaderPrewarmer_PrewarmedShader value, app::IComparer_1_UberShaderPrewarmer_PrewarmedShader_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0471D628, ArraySortHelper_1_UberShaderPrewarmer_PrewarmedShader__BinarySearch__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F638E0, void, Sort_2, (app::UberShaderPrewarmer_PrewarmedShader__Array * keys, int32_t index, int32_t length, app::Comparison_1_UberShaderPrewarmer_PrewarmedShader_* comparer))
    IL2CPP_REGISTER_METHODINFO(0x0476A700, ArraySortHelper_1_UberShaderPrewarmer_PrewarmedShader__Sort_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::UberShaderPrewarmer_PrewarmedShader__Array * array, int32_t index, int32_t length, app::UberShaderPrewarmer_PrewarmedShader value, app::IComparer_1_UberShaderPrewarmer_PrewarmedShader_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::UberShaderPrewarmer_PrewarmedShader__Array * keys, app::Comparison_1_UberShaderPrewarmer_PrewarmedShader_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::UberShaderPrewarmer_PrewarmedShader__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::UberShaderPrewarmer_PrewarmedShader__Array * keys, int32_t left, int32_t length, app::Comparison_1_UberShaderPrewarmer_PrewarmedShader_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::UberShaderPrewarmer_PrewarmedShader__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_UberShaderPrewarmer_PrewarmedShader_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::UberShaderPrewarmer_PrewarmedShader__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberShaderPrewarmer_PrewarmedShader_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::UberShaderPrewarmer_PrewarmedShader__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberShaderPrewarmer_PrewarmedShader_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::UberShaderPrewarmer_PrewarmedShader__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_UberShaderPrewarmer_PrewarmedShader_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::UberShaderPrewarmer_PrewarmedShader__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_UberShaderPrewarmer_PrewarmedShader_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_UberShaderPrewarmer_PrewarmedShader_
