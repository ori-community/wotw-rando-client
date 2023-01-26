#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinSpiritFlareSpell.h>

namespace app::classes::SeinSpiritFlareSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinSpiritFlareSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E5740, void, OnSetReferenceToSein, (app::SeinSpiritFlareSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E5770, void, OnDestroy, (app::SeinSpiritFlareSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, (app::SeinSpiritFlareSpell * this_ptr))
} // namespace app::classes::SeinSpiritFlareSpell
