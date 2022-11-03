#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SeinSpiritSentrySpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinSpiritSentrySpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A6A2A0, void, SpawnSpiritSentry, (app::SeinSpiritSentrySpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A6A680, void, OnSetReferenceToSein, (app::SeinSpiritSentrySpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A6A6B0, void, Start, (app::SeinSpiritSentrySpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A6A770, void, OnDestroy, (app::SeinSpiritSentrySpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatePerforming, (app::SeinSpiritSentrySpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A6A7B0, void, UpdateCharacterState, (app::SeinSpiritSentrySpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A6ABB0, app::IEnumerator*, HandleSpawningSentries, (app::SeinSpiritSentrySpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A6AD00, void, ctor, (app::SeinSpiritSentrySpell * this_ptr))
} // namespace app::classes::SeinSpiritSentrySpell
