#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetSegmentResult.h>

namespace app::classes::PlayFab::ClientModels::GetSegmentResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetSegmentResult* this_ptr)
}
