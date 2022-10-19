#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_ScriptableObjectVisitor {
        inline app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class** type_info = (app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class**)(modloader::win::memory::resolve_rva(0x04710028));
        inline app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class>(type_info, "", "DynamicInstantiationScanner", "ScriptableObjectVisitor");
        }
        inline app::DynamicInstantiationScanner_ScriptableObjectVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_ScriptableObjectVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_ScriptableObjectVisitor
} // namespace app::classes::types
