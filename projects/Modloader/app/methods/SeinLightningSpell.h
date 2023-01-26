#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinLightningSpell.h>

namespace app::classes::SeinLightningSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinLightningSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00892650, void, OnSetReferenceToSein, (app::SeinLightningSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00892680, void, OnDestroy, (app::SeinLightningSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinLightningSpell * this_ptr))
} // namespace app::classes::SeinLightningSpell
