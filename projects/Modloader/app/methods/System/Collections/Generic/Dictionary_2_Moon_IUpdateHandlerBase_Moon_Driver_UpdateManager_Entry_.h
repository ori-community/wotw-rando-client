#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_.h>
#include <Modloader/app/structs/IUpdateHandlerBase.h>
#include <Modloader/app/structs/UpdateManager_Entry.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ {
    IL2CPP_REGISTER_METHOD(0x02259DF0, void, ctor, (app::Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ * this_ptr, app::IUpdateHandlerBase* key, app::UpdateManager_Entry* value))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ * this_ptr, app::IUpdateHandlerBase* key, app::UpdateManager_Entry** value))
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ * this_ptr, app::IUpdateHandlerBase* key))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_IUpdateHandlerBase_Moon_Driver_UpdateManager_Entry_
