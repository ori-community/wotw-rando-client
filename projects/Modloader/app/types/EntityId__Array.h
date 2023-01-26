#pragma once
#include <Modloader/app/structs/EntityId__Array.h>
#include <Modloader/app/structs/EntityId__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityId__Array {
        inline app::EntityId__Array__Class** type_info() {
            static app::EntityId__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityId__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityId__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityId__Array__Class>(type_info(), "Moon.Timeline", "EntityId[]");
        }
        inline app::EntityId__Array* create() {
            return il2cpp::create_object<app::EntityId__Array>(get_class());
        }
    } // namespace EntityId__Array
} // namespace app::classes::types
