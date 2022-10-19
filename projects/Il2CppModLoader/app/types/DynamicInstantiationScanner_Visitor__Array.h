#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicInstantiationScanner_Visitor__Array {
        namespace {
            inline app::DynamicInstantiationScanner_Visitor__Array__Class* type_info_ref = nullptr;
        }
        inline app::DynamicInstantiationScanner_Visitor__Array__Class** type_info = &type_info_ref;
        inline app::DynamicInstantiationScanner_Visitor__Array__Class* get_class() {
            return il2cpp::get_class<app::DynamicInstantiationScanner_Visitor__Array__Class>(type_info, "", "DynamicInstantiationScanner+Visitor[]");
        }
        inline app::DynamicInstantiationScanner_Visitor__Array* create() {
            return il2cpp::create_object<app::DynamicInstantiationScanner_Visitor__Array>(get_class());
        }
    } // namespace DynamicInstantiationScanner_Visitor__Array
} // namespace app::classes::types
