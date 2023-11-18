#pragma once
#include <Modloader/app/structs/EntityPlaceholder__Array.h>
#include <Modloader/app/structs/EntityPlaceholder__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityPlaceholder__Array {
        inline app::EntityPlaceholder__Array__Class** type_info() {
            static app::EntityPlaceholder__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityPlaceholder__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityPlaceholder__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityPlaceholder__Array__Class>(type_info(), "", "EntityPlaceholder[]");
        }
        inline app::EntityPlaceholder__Array* create() {
            return il2cpp::create_object<app::EntityPlaceholder__Array>(get_class());
        }
    } // namespace EntityPlaceholder__Array
} // namespace app::classes::types
