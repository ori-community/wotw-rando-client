#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WaapiTimelineIntegration.h>

namespace app::classes::WaapiTimelineIntegration {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::WaapiTimelineIntegration * this_ptr))
}
