#pragma once
#include <Modloader/app/structs/SeinSpiritSpearSpellPuppet.h>
#include <Modloader/app/structs/SeinSpiritSpearSpellPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritSpearSpellPuppet {
        inline app::SeinSpiritSpearSpellPuppet__Class** type_info() {
            static app::SeinSpiritSpearSpellPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinSpiritSpearSpellPuppet__Class**)(modloader::win::memory::resolve_rva(0x0473A6E0));
            }
            return cache;
        }
        inline app::SeinSpiritSpearSpellPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSpearSpellPuppet__Class>(type_info(), "", "SeinSpiritSpearSpellPuppet");
        }
        inline app::SeinSpiritSpearSpellPuppet* create() {
            return il2cpp::create_object<app::SeinSpiritSpearSpellPuppet>(get_class());
        }
    } // namespace SeinSpiritSpearSpellPuppet
} // namespace app::classes::types
