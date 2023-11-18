#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectEqualityComparer_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>

namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x024360C0, bool, Equals_1, (app::ObjectEqualityComparer_1_System_Object_ * this_ptr, app::Object* x, app::Object* y))
    IL2CPP_REGISTER_METHOD(0x02022440, int32_t, GetHashCode_1, (app::ObjectEqualityComparer_1_System_Object_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x02436100, int32_t, IndexOf, (app::ObjectEqualityComparer_1_System_Object_ * this_ptr, app::Object__Array* array, app::Object* value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x024361E0, int32_t, LastIndexOf, (app::ObjectEqualityComparer_1_System_Object_ * this_ptr, app::Object__Array* array, app::Object* value, int32_t start_index, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals_2, (app::ObjectEqualityComparer_1_System_Object_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode_2, (app::ObjectEqualityComparer_1_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectEqualityComparer_1_System_Object_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectEqualityComparer_1_System_Object_
