#pragma once
#include <Modloader/app/structs/Object__Array__Array.h>
#include <Modloader/app/structs/Object__Array__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Object__Array__Array {
        inline app::Object__Array__Array__Class** type_info() {
            static app::Object__Array__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Object__Array__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Object__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::Object__Array__Array__Class>(type_info(), "System", "Object[][]");
        }
        inline app::Object__Array__Array* create() {
            return il2cpp::create_object<app::Object__Array__Array>(get_class());
        }
    } // namespace Object__Array__Array
} // namespace app::classes::types
