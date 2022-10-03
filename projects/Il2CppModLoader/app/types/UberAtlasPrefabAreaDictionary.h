#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberAtlasPrefabAreaDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberAtlasPrefabAreaDictionary__Class** type_info;
        inline app::UberAtlasPrefabAreaDictionary__Class* get_class() {
            return il2cpp::get_class<app::UberAtlasPrefabAreaDictionary__Class>(type_info, "", "UberAtlasPrefabAreaDictionary");
        }
        inline app::UberAtlasPrefabAreaDictionary* create() {
            return il2cpp::create_object<app::UberAtlasPrefabAreaDictionary>(get_class());
        }
    } // namespace UberAtlasPrefabAreaDictionary
} // namespace app::classes::types
