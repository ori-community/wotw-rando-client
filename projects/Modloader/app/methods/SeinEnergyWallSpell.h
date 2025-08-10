#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinEnergyWallSpell.h>

namespace app::classes::SeinEnergyWallSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, app::SeinEnergyWallSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AD0AF0, void, OnSetReferenceToSein, app::SeinEnergyWallSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00AD0B20, void, OnDestroy, app::SeinEnergyWallSpell* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, app::SeinEnergyWallSpell* this_ptr)
} // namespace app::classes::SeinEnergyWallSpell
