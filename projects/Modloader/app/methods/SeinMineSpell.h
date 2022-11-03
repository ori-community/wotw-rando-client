#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinMineSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinMineSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008ACBB0, void, OnSetReferenceToSein, (app::SeinMineSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008ACBE0, void, OnDestroy, (app::SeinMineSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008ACC20, void, UpdateCharacterState, (app::SeinMineSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005D06C0, app::PlatformMovement*, get_PlatformMovement, (app::SeinMineSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008ACD00, bool, CanDropMine, (app::SeinMineSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008ACF30, void, DropMine, (app::SeinMineSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008ADAC0, void, ctor, (app::SeinMineSpell * this_ptr))
} // namespace app::classes::SeinMineSpell
