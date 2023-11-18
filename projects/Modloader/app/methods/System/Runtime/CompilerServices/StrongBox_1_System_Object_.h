#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StrongBox_1_System_Object_.h>

namespace app::classes::System::Runtime::CompilerServices::StrongBox_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, IStrongBox_get_Value, (app::StrongBox_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02773960, void, IStrongBox_set_Value, (app::StrongBox_1_System_Object_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor_1, (app::StrongBox_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D6B90, void, ctor_2, (app::StrongBox_1_System_Object_ * this_ptr, app::Object* value))
} // namespace app::classes::System::Runtime::CompilerServices::StrongBox_1_System_Object_
