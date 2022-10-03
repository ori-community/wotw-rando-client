#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Varying2DSoundProvider {
    IL2CPP_REGISTER_METHOD(0x013B9450, uint32_t, get_GuidHash, (app::Varying2DSoundProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B9490, app::SoundDescriptor*, GetSound, (app::Varying2DSoundProvider * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013B98D0, void, ctor, (app::Varying2DSoundProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013B99A0, void, cctor, ())
} // namespace app::classes::Varying2DSoundProvider
