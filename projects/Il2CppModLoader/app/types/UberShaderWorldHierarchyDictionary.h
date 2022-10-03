#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberShaderWorldHierarchyDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberShaderWorldHierarchyDictionary__Class** type_info;
        inline app::UberShaderWorldHierarchyDictionary__Class* get_class() {
            return il2cpp::get_class<app::UberShaderWorldHierarchyDictionary__Class>(type_info, "", "UberShaderWorldHierarchyDictionary");
        }
        inline app::UberShaderWorldHierarchyDictionary* create() {
            return il2cpp::create_object<app::UberShaderWorldHierarchyDictionary>(get_class());
        }
    } // namespace UberShaderWorldHierarchyDictionary
} // namespace app::classes::types
