#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/InterpretedFrameInfo__Array.h>
#include <Modloader/app/structs/Comparison_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_.h>
#include <Modloader/app/structs/IComparer_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_.h>
#include <Modloader/app/structs/InterpretedFrameInfo.h>

namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_ {
    IL2CPP_REGISTER_METHOD(0x030019E0, void, Sort_1, (app::InterpretedFrameInfo__Array * keys, int32_t index, int32_t length, app::IComparer_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x03001D00, int32_t, BinarySearch, (app::InterpretedFrameInfo__Array * array, int32_t index, int32_t length, app::InterpretedFrameInfo value, app::IComparer_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x03001EB0, void, Sort_2, (app::InterpretedFrameInfo__Array * keys, int32_t index, int32_t length, app::Comparison_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C898B0, int32_t, InternalBinarySearch, (app::InterpretedFrameInfo__Array * array, int32_t index, int32_t length, app::InterpretedFrameInfo value, app::IComparer_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89A40, void, SwapIfGreater, (app::InterpretedFrameInfo__Array * keys, app::Comparison_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* comparer, int32_t a, int32_t b))
    IL2CPP_REGISTER_METHOD(0x02C89BD0, void, Swap, (app::InterpretedFrameInfo__Array * a, int32_t i, int32_t j))
    IL2CPP_REGISTER_METHOD(0x02C86EC0, void, IntrospectiveSort, (app::InterpretedFrameInfo__Array * keys, int32_t left, int32_t length, app::Comparison_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C86FB0, void, IntroSort, (app::InterpretedFrameInfo__Array * keys, int32_t lo, int32_t hi, int32_t depth_limit, app::Comparison_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C89C60, int32_t, PickPivotAndPartition, (app::InterpretedFrameInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C87750, void, Heapsort, (app::InterpretedFrameInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A050, void, DownHeap, (app::InterpretedFrameInfo__Array * keys, int32_t i, int32_t n, int32_t lo, app::Comparison_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* comparer))
    IL2CPP_REGISTER_METHOD(0x02C8A330, void, InsertionSort, (app::InterpretedFrameInfo__Array * keys, int32_t lo, int32_t hi, app::Comparison_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_* comparer))
} // namespace app::classes::System::Collections::Generic::ArraySortHelper_1_System_Linq_Expressions_Interpreter_InterpretedFrameInfo_
