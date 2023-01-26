#pragma once
#include <Modloader/app/structs/Atlas__Array.h>
#include <Modloader/app/structs/Atlas__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Atlas__Array {
        inline app::Atlas__Array__Class** type_info() {
            static app::Atlas__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Atlas__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Atlas__Array__Class* get_class() {
            return il2cpp::get_class<app::Atlas__Array__Class>(type_info(), "", "Atlas[]");
        }
        inline app::Atlas__Array* create() {
            return il2cpp::create_object<app::Atlas__Array>(get_class());
        }
    } // namespace Atlas__Array
} // namespace app::classes::types
