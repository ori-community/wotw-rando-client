#pragma once
#include <Modloader/app/structs/EntityTargetting__Array.h>
#include <Modloader/app/structs/EntityTargetting__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityTargetting__Array {
        inline app::EntityTargetting__Array__Class** type_info() {
            static app::EntityTargetting__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityTargetting__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityTargetting__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityTargetting__Array__Class>(type_info(), "", "EntityTargetting[]");
        }
        inline app::EntityTargetting__Array* create() {
            return il2cpp::create_object<app::EntityTargetting__Array>(get_class());
        }
    } // namespace EntityTargetting__Array
} // namespace app::classes::types
