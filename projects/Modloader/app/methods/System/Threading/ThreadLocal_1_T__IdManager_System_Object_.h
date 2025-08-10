#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ThreadLocal_1_T_IdManager_System_Object_.h>

namespace app::classes::System::Threading::ThreadLocal_1_T__IdManager_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02A5F7F0, int32_t, GetId, app::ThreadLocal_1_T_IdManager_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02A5FA40, void, ReturnId, app::ThreadLocal_1_T_IdManager_System_Object_* this_ptr, int32_t id)
    IL2CPP_REGISTER_METHOD(0x02A5FBD0, void, ctor, app::ThreadLocal_1_T_IdManager_System_Object_* this_ptr)
} // namespace app::classes::System::Threading::ThreadLocal_1_T__IdManager_System_Object_
