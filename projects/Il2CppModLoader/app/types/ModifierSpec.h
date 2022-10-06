#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ModifierSpec {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ModifierSpec__Class** type_info;
        inline app::ModifierSpec__Class* get_class() {
            return il2cpp::get_class<app::ModifierSpec__Class>(type_info, "System", "ModifierSpec");
        }
        inline app::ModifierSpec__Array* create_array(int size) {
            return il2cpp::array_new<app::ModifierSpec__Array>(get_class(), size);
        }
        inline app::ModifierSpec__Array* create_array(const std::vector<app::ModifierSpec*>& items) {
            return il2cpp::array_new<app::ModifierSpec__Array>(get_class(), items);
        }
    } // namespace ModifierSpec
} // namespace app::classes::types
