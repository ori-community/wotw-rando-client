#pragma once
#include <Modloader/app/structs/UnmanagedFunctionPointerAttribute.h>
#include <Modloader/app/structs/UnmanagedFunctionPointerAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnmanagedFunctionPointerAttribute {
        inline app::UnmanagedFunctionPointerAttribute__Class** type_info() {
            static app::UnmanagedFunctionPointerAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnmanagedFunctionPointerAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnmanagedFunctionPointerAttribute__Class* get_class() {
            return il2cpp::get_class<app::UnmanagedFunctionPointerAttribute__Class>(type_info(), "System.Runtime.InteropServices", "UnmanagedFunctionPointerAttribute");
        }
        inline app::UnmanagedFunctionPointerAttribute* create() {
            return il2cpp::create_object<app::UnmanagedFunctionPointerAttribute>(get_class());
        }
    } // namespace UnmanagedFunctionPointerAttribute
} // namespace app::classes::types
