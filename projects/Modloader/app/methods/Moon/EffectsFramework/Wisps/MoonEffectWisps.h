#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonEffectWisps.h>
#include <Modloader/app/structs/List_1_Moon_EffectsFramework_MoonEffectVariationModifier_.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/IInstantiationHandler.h>

namespace app::classes::Moon::EffectsFramework::Wisps::MoonEffectWisps {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::GameObject*, get_Prefab, (app::MoonEffectWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_IsDirty, (app::MoonEffectWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0120C4B0, app::List_1_Moon_EffectsFramework_MoonEffectVariationModifier_*, get_Modifiers, (app::MoonEffectWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0120C6D0, app::GameObject*, Resolve_1, (app::MoonEffectWisps * this_ptr, app::Vector3 position, app::Quaternion rotation, bool record))
    IL2CPP_REGISTER_METHOD(0x0120C7E0, app::GameObject*, Resolve_2, (app::MoonEffectWisps * this_ptr, app::IInstantiationHandler* instantiation_handler, app::Vector3 position, app::Quaternion rotation, bool record))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, SetDirty, (app::MoonEffectWisps * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonEffectWisps * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0120C9E0, void, cctor, ())
} // namespace app::classes::Moon::EffectsFramework::Wisps::MoonEffectWisps
