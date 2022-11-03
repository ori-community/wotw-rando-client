#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PropertyAccessor_1_System_UIntPtr___Array {
        namespace {
            inline app::PropertyAccessor_1_System_UIntPtr___Array__Class* type_info_ref = nullptr;
        }
        inline app::PropertyAccessor_1_System_UIntPtr___Array__Class** type_info = &type_info_ref;
        inline app::PropertyAccessor_1_System_UIntPtr___Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyAccessor_1_System_UIntPtr___Array__Class>(type_info, "System.Diagnostics.Tracing", "PropertyAccessor`1[System.UIntPtr][]");
        }
        inline app::PropertyAccessor_1_System_UIntPtr___Array* create() {
            return il2cpp::create_object<app::PropertyAccessor_1_System_UIntPtr___Array>(get_class());
        }
    } // namespace PropertyAccessor_1_System_UIntPtr___Array
} // namespace app::classes::types
