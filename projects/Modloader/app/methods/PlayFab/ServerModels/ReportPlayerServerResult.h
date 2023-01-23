#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReportPlayerServerResult.h>

namespace app::classes::PlayFab::ServerModels::ReportPlayerServerResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ReportPlayerServerResult * this_ptr))
}
