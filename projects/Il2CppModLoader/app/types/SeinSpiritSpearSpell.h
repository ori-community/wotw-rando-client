#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritSpearSpell {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinSpiritSpearSpell__Class** type_info;
        inline app::SeinSpiritSpearSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSpearSpell__Class>(type_info, "", "SeinSpiritSpearSpell");
        }
        inline app::SeinSpiritSpearSpell* create() {
            return il2cpp::create_object<app::SeinSpiritSpearSpell>(get_class());
        }
    } // namespace SeinSpiritSpearSpell
} // namespace app::classes::types
