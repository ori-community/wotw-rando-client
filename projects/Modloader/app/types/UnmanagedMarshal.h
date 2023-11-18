#pragma once
#include <Modloader/app/structs/UnmanagedMarshal.h>
#include <Modloader/app/structs/UnmanagedMarshal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnmanagedMarshal {
        inline app::UnmanagedMarshal__Class** type_info() {
            static app::UnmanagedMarshal__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnmanagedMarshal__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnmanagedMarshal__Class* get_class() {
            return il2cpp::get_class<app::UnmanagedMarshal__Class>(type_info(), "System.Reflection.Emit", "UnmanagedMarshal");
        }
        inline app::UnmanagedMarshal* create() {
            return il2cpp::create_object<app::UnmanagedMarshal>(get_class());
        }
    } // namespace UnmanagedMarshal
} // namespace app::classes::types
