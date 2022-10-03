#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AbilitiesPlugin_FieldInfoCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AbilitiesPlugin_FieldInfoCollection__Class** type_info;
        inline app::AbilitiesPlugin_FieldInfoCollection__Class* get_class() {
            return il2cpp::get_nested_class<app::AbilitiesPlugin_FieldInfoCollection__Class>(type_info, "", "AbilitiesPlugin", "FieldInfoCollection");
        }
        inline app::AbilitiesPlugin_FieldInfoCollection* create() {
            return il2cpp::create_object<app::AbilitiesPlugin_FieldInfoCollection>(get_class());
        }
        inline app::AbilitiesPlugin_FieldInfoCollection__Array* create_array(int size) {
            return il2cpp::array_new<app::AbilitiesPlugin_FieldInfoCollection__Array>(get_class(), size);
        }
    } // namespace AbilitiesPlugin_FieldInfoCollection
} // namespace app::classes::types
