#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellPickup {
        namespace {
            inline app::SpellPickup__Class* type_info_ref = nullptr;
        }
        inline app::SpellPickup__Class** type_info = &type_info_ref;
        inline app::SpellPickup__Class* get_class() {
            return il2cpp::get_class<app::SpellPickup__Class>(type_info, "", "SpellPickup");
        }
        inline app::SpellPickup* create() {
            return il2cpp::create_object<app::SpellPickup>(get_class());
        }
    } // namespace SpellPickup
} // namespace app::classes::types
