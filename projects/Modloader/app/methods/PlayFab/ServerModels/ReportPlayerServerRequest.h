#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReportPlayerServerRequest.h>

namespace app::classes::PlayFab::ServerModels::ReportPlayerServerRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::ReportPlayerServerRequest* this_ptr)
}
