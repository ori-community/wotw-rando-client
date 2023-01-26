#pragma once
#include <Modloader/app/structs/TypeSpec__Array.h>
#include <Modloader/app/structs/TypeSpec__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeSpec__Array {
        inline app::TypeSpec__Array__Class** type_info() {
            static app::TypeSpec__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeSpec__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeSpec__Array__Class* get_class() {
            return il2cpp::get_class<app::TypeSpec__Array__Class>(type_info(), "System", "TypeSpec[]");
        }
        inline app::TypeSpec__Array* create() {
            return il2cpp::create_object<app::TypeSpec__Array>(get_class());
        }
    } // namespace TypeSpec__Array
} // namespace app::classes::types
