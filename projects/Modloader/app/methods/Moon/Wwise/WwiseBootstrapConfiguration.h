#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WwiseBootstrapConfiguration.h>

namespace app::classes::Moon::Wwise::WwiseBootstrapConfiguration {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::WwiseBootstrapConfiguration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02712340, void, cctor, ())
} // namespace app::classes::Moon::Wwise::WwiseBootstrapConfiguration
