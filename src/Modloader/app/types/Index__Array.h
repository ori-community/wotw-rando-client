#pragma once
#include <Modloader/app/structs/Index__Array.h>
#include <Modloader/app/structs/Index__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Index__Array {
        inline app::Index__Array__Class** type_info() {
            static app::Index__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Index__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Index__Array__Class* get_class() {
            return il2cpp::get_class<app::Index__Array__Class>(type_info(), "System.Data", "Index[]");
        }
        inline app::Index__Array* create() {
            return il2cpp::create_object<app::Index__Array>(get_class());
        }
    } // namespace Index__Array
} // namespace app::classes::types
