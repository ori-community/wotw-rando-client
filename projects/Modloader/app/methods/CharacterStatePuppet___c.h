#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterStatePuppet_c.h>
#include <Modloader/app/structs/PropertyInfo_1.h>

namespace app::classes::CharacterStatePuppet___c {
    IL2CPP_REGISTER_METHOD(0x013161D0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::CharacterStatePuppet_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01316310, bool, _OnInitializeGhostPuppetMaster_b__12_0, app::CharacterStatePuppet_c* this_ptr, app::PropertyInfo_1* prop)
} // namespace app::classes::CharacterStatePuppet___c
