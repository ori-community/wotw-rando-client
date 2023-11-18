#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PortalVistor {
    IL2CPP_REGISTER_METHOD(0x00C67270, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00C67340, void, cctor, ())
} // namespace app::classes::PortalVistor
