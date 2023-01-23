#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_KwolokBossTendril_DurationType_.h>
#include <Modloader/app/structs/KwolokBossTendril_AllowedTendrilVariations.h>
#include <Modloader/app/structs/List_1_KwolokBossTendril_VariationType_.h>

namespace app::classes::KwolokBossTendril_AllowedTendrilVariations {
    IL2CPP_REGISTER_METHOD(0x012EE180, app::List_1_KwolokBossTendril_DurationType_*, GetDurations, (app::KwolokBossTendril_AllowedTendrilVariations * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012EE320, app::List_1_KwolokBossTendril_VariationType_*, GetVariations, (app::KwolokBossTendril_AllowedTendrilVariations * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012EE500, void, ctor, (app::KwolokBossTendril_AllowedTendrilVariations * this_ptr))
} // namespace app::classes::KwolokBossTendril_AllowedTendrilVariations
