#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/CrushPlayer.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/GrabbableSurface.h>
#include <Modloader/app/structs/IDashAtackable.h>
#include <Modloader/app/structs/IPushable.h>
#include <Modloader/app/structs/MovingPlatformSettings.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::Moon::MoonFlags {
    IL2CPP_REGISTER_METHOD(0x01119B40, bool, HasFlag, (app::GameObject * go, uint32_t flag))
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_1, (app::GameObject * go, uint32_t flag, app::Object** comp))
    IL2CPP_REGISTER_METHOD(0x015F1E50, app::Object*, GetComponentIfHasFlag, (app::GameObject * go, uint32_t flag))
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_2, (app::GameObject * go, uint32_t flag, app::CrushPlayer** comp))
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_3, (app::GameObject * go, uint32_t flag, app::DamageDealer** comp))
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_4, (app::GameObject * go, uint32_t flag, app::MovingPlatformSettings** comp))
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_5, (app::GameObject * go, uint32_t flag, app::IDashAtackable** comp))
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_6, (app::GameObject * go, uint32_t flag, app::IPushable** comp))
    IL2CPP_REGISTER_METHOD(0x01B31F60, bool, GetComponentByFlag_7, (app::GameObject * go, uint32_t flag, app::GrabbableSurface** comp))
} // namespace app::classes::Moon::MoonFlags
