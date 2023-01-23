#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AttributeInstallResult.h>

namespace app::classes::PlayFab::ClientModels::AttributeInstallResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AttributeInstallResult * this_ptr))
}
