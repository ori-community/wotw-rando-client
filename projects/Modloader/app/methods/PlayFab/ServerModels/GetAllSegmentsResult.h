#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetAllSegmentsResult.h>

namespace app::classes::PlayFab::ServerModels::GetAllSegmentsResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GetAllSegmentsResult* this_ptr)
}
