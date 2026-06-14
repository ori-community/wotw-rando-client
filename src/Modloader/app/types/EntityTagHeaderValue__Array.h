#pragma once
#include <Modloader/app/structs/EntityTagHeaderValue__Array.h>
#include <Modloader/app/structs/EntityTagHeaderValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityTagHeaderValue__Array {
        inline app::EntityTagHeaderValue__Array__Class** type_info() {
            static app::EntityTagHeaderValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityTagHeaderValue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityTagHeaderValue__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityTagHeaderValue__Array__Class>(type_info(), "System.Net.Http.Headers", "EntityTagHeaderValue[]");
        }
        inline app::EntityTagHeaderValue__Array* create() {
            return il2cpp::create_object<app::EntityTagHeaderValue__Array>(get_class());
        }
    } // namespace EntityTagHeaderValue__Array
} // namespace app::classes::types
