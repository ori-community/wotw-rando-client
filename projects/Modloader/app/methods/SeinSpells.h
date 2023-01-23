#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinGlowSpell.h>
#include <Modloader/app/structs/SeinSpells.h>
#include <Modloader/app/structs/SeinInvisibilitySpell.h>
#include <Modloader/app/structs/SeinStickyMineSpell.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell.h>
#include <Modloader/app/structs/SeinLifeAbsorbSpell.h>
#include <Modloader/app/structs/SeinMeditateSpell.h>
#include <Modloader/app/structs/SeinChargeShotSpell.h>
#include <Modloader/app/structs/SeinJumpShotSpell.h>
#include <Modloader/app/structs/SeinChakramSpell.h>
#include <Modloader/app/structs/SeinBlazeSpell.h>

namespace app::classes::SeinSpells {
    IL2CPP_REGISTER_METHOD(0x004173F0, app::SeinGlowSpell*, get_Glow, (app::SeinSpells * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E0070, void, set_Glow, (app::SeinSpells * this_ptr, app::SeinGlowSpell* value))
    IL2CPP_REGISTER_METHOD(0x005E0120, app::SeinInvisibilitySpell*, get_Invisibility, (app::SeinSpells * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E0140, void, set_Invisibility, (app::SeinSpells * this_ptr, app::SeinInvisibilitySpell* value))
    IL2CPP_REGISTER_METHOD(0x005E01F0, app::SeinStickyMineSpell*, get_StickyMine, (app::SeinSpells * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E0210, void, set_StickyMine, (app::SeinSpells * this_ptr, app::SeinStickyMineSpell* value))
    IL2CPP_REGISTER_METHOD(0x005E02C0, app::SeinSpiritSpearSpell*, get_SpiritSpearSpell, (app::SeinSpells * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E02E0, void, set_SpiritSpearSpell, (app::SeinSpells * this_ptr, app::SeinSpiritSpearSpell* value))
    IL2CPP_REGISTER_METHOD(0x005E0390, app::SeinLifeAbsorbSpell*, get_LifeAbsorbSpell, (app::SeinSpells * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E03B0, void, set_LifeAbsorbSpell, (app::SeinSpells * this_ptr, app::SeinLifeAbsorbSpell* value))
    IL2CPP_REGISTER_METHOD(0x005E0460, app::SeinMeditateSpell*, get_MeditateSpell, (app::SeinSpells * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E0480, void, set_MeditateSpell, (app::SeinSpells * this_ptr, app::SeinMeditateSpell* value))
    IL2CPP_REGISTER_METHOD(0x005E0530, app::SeinChargeShotSpell*, get_ChargeShotSpell, (app::SeinSpells * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E0550, void, set_ChargeShotSpell, (app::SeinSpells * this_ptr, app::SeinChargeShotSpell* value))
    IL2CPP_REGISTER_METHOD(0x005E0600, app::SeinJumpShotSpell*, get_JumpShotSpell, (app::SeinSpells * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E0620, void, set_JumpShotSpell, (app::SeinSpells * this_ptr, app::SeinJumpShotSpell* value))
    IL2CPP_REGISTER_METHOD(0x005E06D0, app::SeinChakramSpell*, get_ChakramSpell, (app::SeinSpells * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E06F0, void, set_ChakramSpell, (app::SeinSpells * this_ptr, app::SeinChakramSpell* value))
    IL2CPP_REGISTER_METHOD(0x005E07A0, app::SeinBlazeSpell*, get_BlazeSpell, (app::SeinSpells * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E07C0, void, set_BlazeSpell, (app::SeinSpells * this_ptr, app::SeinBlazeSpell* value))
    IL2CPP_REGISTER_METHOD(0x005E0870, void, RefreshStateCache, (app::SeinSpells * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005E0A10, void, ctor, (app::SeinSpells * this_ptr))
} // namespace app::classes::SeinSpells
