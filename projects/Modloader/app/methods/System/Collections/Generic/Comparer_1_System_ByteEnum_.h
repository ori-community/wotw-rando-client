#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Comparer_1_System_ByteEnum_.h>
#include <Modloader/app/structs/Comparison_1_ByteEnum_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Collections::Generic::Comparer_1_System_ByteEnum_ {
    IL2CPP_REGISTER_METHOD(0x02807CD0, app::Comparer_1_System_ByteEnum_*, get_Default, ())
    IL2CPP_REGISTER_METHOD(0x0282AC40, app::Comparer_1_System_ByteEnum_*, Create, (app::Comparison_1_ByteEnum_ * comparison))
    IL2CPP_REGISTER_METHOD(0x0282AE40, app::Comparer_1_System_ByteEnum_*, CreateComparer, ())
    IL2CPP_REGISTER_METHOD(0x0282A2F0, int32_t, IComparer_Compare, (app::Comparer_1_System_ByteEnum_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::Comparer_1_System_ByteEnum_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Comparer_1_System_ByteEnum_
