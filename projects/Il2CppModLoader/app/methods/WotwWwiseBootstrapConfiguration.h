#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::WotwWwiseBootstrapConfiguration {
    IL2CPP_REGISTER_METHOD(0x00592170, void, SetStatics, (app::WotwWwiseBootstrapConfiguration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00592390, void, Configure, (app::WotwWwiseBootstrapConfiguration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00592690, void, PostProcessSettings_1, (app::WotwWwiseBootstrapConfiguration * this_ptr, app::AkWwiseInitializationSettings* settings))
    IL2CPP_REGISTER_METHOD(0x005926E0, bool, HasArgument, (app::WotwWwiseBootstrapConfiguration * this_ptr, app::String* flag))
    IL2CPP_REGISTER_METHOD(0x00592AA0, void, PostProcessSettings_2, (app::WotwWwiseBootstrapConfiguration * this_ptr, app::AkInitializationSettings* settings))
    IL2CPP_REGISTER_METHOD(0x00592D40, void, ctor, (app::WotwWwiseBootstrapConfiguration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00592DE0, void, cctor, ())
} // namespace app::classes::WotwWwiseBootstrapConfiguration
