#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SpecialAbilityZone.h>

namespace app::classes::SpecialAbilityZone {
    IL2CPP_REGISTER_METHOD(0x00EF7470, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00EF7540, bool, get_IsInside, )
    IL2CPP_REGISTER_METHOD(0x00EF7830, bool, get_IsInsideRainbowZone, )
    IL2CPP_REGISTER_METHOD(0x00EF7B20, void, Awake, app::SpecialAbilityZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EF7CF0, void, OnEnable, app::SpecialAbilityZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EF7DB0, void, OnDisable, app::SpecialAbilityZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00886330, app::Rect, get_Bounds, app::SpecialAbilityZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SpecialAbilityZone* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EF7E90, void, cctor, )
} // namespace app::classes::SpecialAbilityZone
