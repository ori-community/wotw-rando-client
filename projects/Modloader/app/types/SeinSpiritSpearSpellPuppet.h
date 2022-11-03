#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinSpiritSpearSpellPuppet {
        inline app::SeinSpiritSpearSpellPuppet__Class** type_info = (app::SeinSpiritSpearSpellPuppet__Class**)(modloader::win::memory::resolve_rva(0x0473A6E0));
        inline app::SeinSpiritSpearSpellPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSpearSpellPuppet__Class>(type_info, "", "SeinSpiritSpearSpellPuppet");
        }
        inline app::SeinSpiritSpearSpellPuppet* create() {
            return il2cpp::create_object<app::SeinSpiritSpearSpellPuppet>(get_class());
        }
    } // namespace SeinSpiritSpearSpellPuppet
} // namespace app::classes::types
