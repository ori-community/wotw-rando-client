#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::SimpleSRPToggleProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x0044E710, app::MoonRenderPipelineAsset *, get_mrpAsset, (app::SimpleSRPToggleProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3FD20, bool, GetState, (app::SimpleSRPToggleProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3FD40, void, Enable, (app::SimpleSRPToggleProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3FD90, void, Disable, (app::SimpleSRPToggleProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SimpleSRPToggleProfilingSetting * this_ptr))
}
