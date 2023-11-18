#pragma once
#include <Modloader/app/structs/Assembly__Array.h>
#include <Modloader/app/structs/Assembly__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Assembly__Array {
        inline app::Assembly__Array__Class** type_info() {
            static app::Assembly__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Assembly__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Assembly__Array__Class* get_class() {
            return il2cpp::get_class<app::Assembly__Array__Class>(type_info(), "System.Reflection", "Assembly[]");
        }
        inline app::Assembly__Array* create() {
            return il2cpp::create_object<app::Assembly__Array>(get_class());
        }
    } // namespace Assembly__Array
} // namespace app::classes::types
