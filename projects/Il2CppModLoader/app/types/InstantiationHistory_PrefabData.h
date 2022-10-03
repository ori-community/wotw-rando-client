#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiationHistory_PrefabData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InstantiationHistory_PrefabData__Class** type_info;
        inline app::InstantiationHistory_PrefabData__Class* get_class() {
            return il2cpp::get_nested_class<app::InstantiationHistory_PrefabData__Class>(type_info, "", "InstantiationHistory", "PrefabData");
        }
        inline app::InstantiationHistory_PrefabData* create() {
            return il2cpp::create_object<app::InstantiationHistory_PrefabData>(get_class());
        }
        inline app::InstantiationHistory_PrefabData__Array* create_array(int size) {
            return il2cpp::array_new<app::InstantiationHistory_PrefabData__Array>(get_class(), size);
        }
    } // namespace InstantiationHistory_PrefabData
} // namespace app::classes::types
