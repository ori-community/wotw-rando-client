#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RegionInfo_1.h>

namespace app::classes::PlayFab::ClientModels::RegionInfo {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::RegionInfo_1* this_ptr)
}
