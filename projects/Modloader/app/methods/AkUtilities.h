#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/AkUtilities.h>

namespace app::classes::AkUtilities {
    IL2CPP_REGISTER_METHOD(0x027008C0, app::String*, get_GuidMapPath, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AkUtilities * this_ptr))
} // namespace app::classes::AkUtilities
