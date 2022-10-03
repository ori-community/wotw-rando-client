#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpellPickupContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpellPickupContext__Class** type_info;
        inline app::SpellPickupContext__Class* get_class() {
            return il2cpp::get_class<app::SpellPickupContext__Class>(type_info, "", "SpellPickupContext");
        }
        inline app::SpellPickupContext* create() {
            return il2cpp::create_object<app::SpellPickupContext>(get_class());
        }
    } // namespace SpellPickupContext
} // namespace app::classes::types
