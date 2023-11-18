#pragma once
#include <Modloader/app/structs/PropertyAccessor_1_System_UInt16___Array.h>
#include <Modloader/app/structs/PropertyAccessor_1_System_UInt16___Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PropertyAccessor_1_System_UInt16___Array {
        inline app::PropertyAccessor_1_System_UInt16___Array__Class** type_info() {
            static app::PropertyAccessor_1_System_UInt16___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PropertyAccessor_1_System_UInt16___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PropertyAccessor_1_System_UInt16___Array__Class* get_class() {
            return il2cpp::get_class<app::PropertyAccessor_1_System_UInt16___Array__Class>(type_info(), "System.Diagnostics.Tracing", "PropertyAccessor`1[System.UInt16][]");
        }
        inline app::PropertyAccessor_1_System_UInt16___Array* create() {
            return il2cpp::create_object<app::PropertyAccessor_1_System_UInt16___Array>(get_class());
        }
    } // namespace PropertyAccessor_1_System_UInt16___Array
} // namespace app::classes::types
