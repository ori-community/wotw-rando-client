#pragma once
#include <Modloader/app/structs/DynamicInstantiationScanner_ScriptableObjectVisitor.h>
#include <Modloader/app/structs/DynamicInstantiationScanner_ScriptableObjectVisitor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_ScriptableObjectVisitor {
        inline app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class** type_info() {
            static app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class**)(modloader::win::memory::resolve_rva(0x04710028));
            }
            return cache;
        }
        inline app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicInstantiationScanner_ScriptableObjectVisitor__Class>(type_info(), "", "DynamicInstantiationScanner", "ScriptableObjectVisitor");
        }
        inline app::DynamicInstantiationScanner_ScriptableObjectVisitor* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_ScriptableObjectVisitor>(get_class());
        }
    } // namespace DynamicInstantiationScanner_ScriptableObjectVisitor
} // namespace app::classes::types
