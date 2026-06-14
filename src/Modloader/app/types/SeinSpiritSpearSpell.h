#pragma once
#include <Modloader/app/structs/SeinSpiritSpearSpell.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritSpearSpell {
        inline app::SeinSpiritSpearSpell__Class** type_info() {
            static app::SeinSpiritSpearSpell__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinSpiritSpearSpell__Class**)(modloader::win::memory::resolve_rva(0x0470C9A0));
            }
            return cache;
        }
        inline app::SeinSpiritSpearSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSpearSpell__Class>(type_info(), "", "SeinSpiritSpearSpell");
        }
        inline app::SeinSpiritSpearSpell* create() {
            return il2cpp::create_object<app::SeinSpiritSpearSpell>(get_class());
        }
    } // namespace SeinSpiritSpearSpell
} // namespace app::classes::types
