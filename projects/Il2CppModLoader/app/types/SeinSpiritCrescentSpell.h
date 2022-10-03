#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritCrescentSpell {
        namespace {
            app::SeinSpiritCrescentSpell__Class* type_info_ref = nullptr;
        }
        app::SeinSpiritCrescentSpell__Class** type_info = &type_info_ref;
        inline app::SeinSpiritCrescentSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritCrescentSpell__Class>(type_info, "", "SeinSpiritCrescentSpell");
        }
        inline app::SeinSpiritCrescentSpell* create() {
            return il2cpp::create_object<app::SeinSpiritCrescentSpell>(get_class());
        }
    } // namespace SeinSpiritCrescentSpell
} // namespace app::classes::types
