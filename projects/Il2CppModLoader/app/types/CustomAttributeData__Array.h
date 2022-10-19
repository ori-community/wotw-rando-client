#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CustomAttributeData__Array {
        namespace {
            inline app::CustomAttributeData__Array__Class* type_info_ref = nullptr;
        }
        inline app::CustomAttributeData__Array__Class** type_info = &type_info_ref;
        inline app::CustomAttributeData__Array__Class* get_class() {
            return il2cpp::get_class<app::CustomAttributeData__Array__Class>(type_info, "System.Reflection", "CustomAttributeData[]");
        }
        inline app::CustomAttributeData__Array* create() {
            return il2cpp::create_object<app::CustomAttributeData__Array>(get_class());
        }
    } // namespace CustomAttributeData__Array
} // namespace app::classes::types
