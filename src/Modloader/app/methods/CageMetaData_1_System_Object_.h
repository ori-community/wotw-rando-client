#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CageMetaData_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::CageMetaData_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019DD2B0, void, OnEnable, app::CageMetaData_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019DD380, void, OnDisable, app::CageMetaData_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019DD450, void, Add, app::CageMetaData_1_System_Object_* this_ptr, app::Object* data_entry, int32_t id)
    IL2CPP_REGISTER_METHOD(0x019DD620, void, Remove, app::CageMetaData_1_System_Object_* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x019DD7B0, app::Object*, FindByID, app::CageMetaData_1_System_Object_* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x019DD8C0, void, ctor, app::CageMetaData_1_System_Object_* this_ptr)
} // namespace app::classes::CageMetaData_1_System_Object_
