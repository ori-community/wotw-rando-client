#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetObjectInfo.h>

namespace app::classes::PlayFab::DataModels::SetObjectInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SetObjectInfo* this_ptr)
}
