#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_ScriptableObjectVisitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class** type_info;
        inline app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class>(type_info, "", "DynamicInstantiationScanner", "ScriptableObjectVisitor");
        }
        inline app::DynamicInstantiationScanner_ScriptableObjectVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_ScriptableObjectVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_ScriptableObjectVisitor
} // namespace app::classes::types
