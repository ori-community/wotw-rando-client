#pragma once
#include <Modloader/app/structs/TypeIdentifier__Array.h>
#include <Modloader/app/structs/TypeIdentifier__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TypeIdentifier__Array {
        inline app::TypeIdentifier__Array__Class** type_info() {
            static app::TypeIdentifier__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TypeIdentifier__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TypeIdentifier__Array__Class* get_class() {
            return il2cpp::get_class<app::TypeIdentifier__Array__Class>(type_info(), "System", "TypeIdentifier[]");
        }
        inline app::TypeIdentifier__Array* create() {
            return il2cpp::create_object<app::TypeIdentifier__Array>(get_class());
        }
    } // namespace TypeIdentifier__Array
} // namespace app::classes::types
