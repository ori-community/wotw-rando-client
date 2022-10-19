#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpellPickupPlaceholder {
        namespace {
            inline app::SpellPickupPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::SpellPickupPlaceholder__Class** type_info = &type_info_ref;
        inline app::SpellPickupPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::SpellPickupPlaceholder__Class>(type_info, "", "SpellPickupPlaceholder");
        }
        inline app::SpellPickupPlaceholder* create() {
            return il2cpp::create_object<app::SpellPickupPlaceholder>(get_class());
        }
    } // namespace SpellPickupPlaceholder
} // namespace app::classes::types
