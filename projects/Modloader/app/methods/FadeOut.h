#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FadeOut.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::FadeOut {
    IL2CPP_REGISTER_METHOD(0x0098F310, void, Perform, (app::FadeOut * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0098F320, void, FixedUpdate, (app::FadeOut * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F440, void, Stop, (app::FadeOut * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F490, bool, get_IsPerforming, (app::FadeOut * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_IsSuspended, (app::FadeOut * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_IsSuspended, (app::FadeOut * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0098F4C0, void, Serialize, (app::FadeOut * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0098F510, void, UpdateShaderValue, (app::FadeOut * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F5D0, void, ctor, (app::FadeOut * this_ptr))
} // namespace app::classes::FadeOut
