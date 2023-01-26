#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ReportPlayerClientResult.h>

namespace app::classes::PlayFab::ClientModels::ReportPlayerClientResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ReportPlayerClientResult * this_ptr))
}
