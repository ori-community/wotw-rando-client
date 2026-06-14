#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinSpiritSpearSpellPuppet.h>

namespace app::classes::SeinSpiritSpearSpellPuppet {
    IL2CPP_REGISTER_METHOD(0x00A79BB0, int32_t, get_Id, app::SeinSpiritSpearSpellPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, app::SeinSpiritSpearSpellPuppet* this_ptr)
} // namespace app::classes::SeinSpiritSpearSpellPuppet
