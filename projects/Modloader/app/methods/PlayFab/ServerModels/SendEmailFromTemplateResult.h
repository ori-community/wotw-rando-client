#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SendEmailFromTemplateResult.h>

namespace app::classes::PlayFab::ServerModels::SendEmailFromTemplateResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SendEmailFromTemplateResult * this_ptr))
}
