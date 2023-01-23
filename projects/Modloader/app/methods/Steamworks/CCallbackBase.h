#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CCallbackBase.h>

namespace app::classes::Steamworks::CCallbackBase {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CCallbackBase * this_ptr))
}
