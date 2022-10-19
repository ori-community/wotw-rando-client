#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyAccessor_1_System_Int16___Array {
        namespace {
            inline app::PropertyAccessor_1_System_Int16___Array__Class* type_info_ref = nullptr;
        }
        inline app::PropertyAccessor_1_System_Int16___Array__Class** type_info = &type_info_ref;
        inline app::PropertyAccessor_1_System_Int16___Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyAccessor_1_System_Int16___Array__Class>(type_info, "System.Diagnostics.Tracing", "PropertyAccessor`1[System.Int16][]");
        }
        inline app::PropertyAccessor_1_System_Int16___Array* create() {
            return il2cpp::create_object<app::PropertyAccessor_1_System_Int16___Array>(get_class());
        }
    } // namespace PropertyAccessor_1_System_Int16___Array
} // namespace app::classes::types
