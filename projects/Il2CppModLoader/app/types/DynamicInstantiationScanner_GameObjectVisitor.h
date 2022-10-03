#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_GameObjectVisitor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DynamicInstantiationScanner_GameObjectVisitor__Class** type_info;
        inline app::DynamicInstantiationScanner_GameObjectVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_GameObjectVisitor__Class>(type_info, "", "DynamicInstantiationScanner", "GameObjectVisitor");
        }
        inline app::DynamicInstantiationScanner_GameObjectVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_GameObjectVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_GameObjectVisitor
} // namespace app::classes::types
