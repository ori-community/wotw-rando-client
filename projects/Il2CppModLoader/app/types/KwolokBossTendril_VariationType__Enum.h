#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KwolokBossTendril_VariationType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KwolokBossTendril_VariationType__Enum__Class** type_info;
        inline app::KwolokBossTendril_VariationType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokBossTendril_VariationType__Enum__Class>(type_info, "", "KwolokBossTendril", "VariationType");
        }
        inline app::KwolokBossTendril_VariationType__Enum* create() {
            return il2cpp::create_object<app::KwolokBossTendril_VariationType__Enum>(get_class());
        }
        inline app::KwolokBossTendril_VariationType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::KwolokBossTendril_VariationType__Enum__Array>(get_class(), size);
        }
    } // namespace KwolokBossTendril_VariationType__Enum
} // namespace app::classes::types
