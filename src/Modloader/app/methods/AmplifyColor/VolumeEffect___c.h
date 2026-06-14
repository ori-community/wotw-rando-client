#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VolumeEffectComponent.h>
#include <Modloader/app/structs/VolumeEffect_c.h>

namespace app::classes::AmplifyColor::VolumeEffect___c {
    IL2CPP_REGISTER_METHOD(0x030CF6F0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::VolumeEffect_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030CF830, bool, _ListAcceptableComponents_b__10_0, app::VolumeEffect_c* this_ptr, app::Component_1* comp)
    IL2CPP_REGISTER_METHOD(0x00C53630, app::String*, _GetComponentNames_b__11_0, app::VolumeEffect_c* this_ptr, app::VolumeEffectComponent* r)
} // namespace app::classes::AmplifyColor::VolumeEffect___c
