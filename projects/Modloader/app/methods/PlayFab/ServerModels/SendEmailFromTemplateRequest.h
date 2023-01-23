#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SendEmailFromTemplateRequest.h>

namespace app::classes::PlayFab::ServerModels::SendEmailFromTemplateRequest {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SendEmailFromTemplateRequest * this_ptr))
}
