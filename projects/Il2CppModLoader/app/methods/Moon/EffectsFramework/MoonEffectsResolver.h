#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::EffectsFramework::MoonEffectsResolver {
    IL2CPP_REGISTER_METHOD(0x019865F0, app::GameObject*, Resolve, (app::IInstantiationHandler * instantiation_handler, app::IMoonEffectComposition* effect_composition, app::Vector3 position, app::Quaternion rotation, app::MoonEffectRevertHandle* revert_handle, bool record))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonEffectsResolver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01986DB0, void, cctor, ())
} // namespace app::classes::Moon::EffectsFramework::MoonEffectsResolver
