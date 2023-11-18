#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StrongBox_1_System_Int32_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Runtime::CompilerServices::StrongBox_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x01D09710, void, ctor_1, (app::StrongBox_1_System_Int32_ * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_2, (app::StrongBox_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027738B0, app::Object*, IStrongBox_get_Value, (app::StrongBox_1_System_Int32_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027738F0, void, IStrongBox_set_Value, (app::StrongBox_1_System_Int32_ * this_ptr, app::Object* value))
} // namespace app::classes::System::Runtime::CompilerServices::StrongBox_1_System_Int32_
