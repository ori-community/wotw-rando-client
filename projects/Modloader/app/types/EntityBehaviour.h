#pragma once
#include <Modloader/app/structs/EntityBehaviour.h>
#include <Modloader/app/structs/EntityBehaviour__Array.h>
#include <Modloader/app/structs/EntityBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityBehaviour {
        inline app::EntityBehaviour__Class** type_info() {
            static app::EntityBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EntityBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EntityBehaviour__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviour__Class>(type_info(), "Moon", "EntityBehaviour");
        }
        inline app::EntityBehaviour* create() {
            return il2cpp::create_object<app::EntityBehaviour>(get_class());
        }
        inline app::EntityBehaviour__Array* create_array(int size) {
            return il2cpp::array_new<app::EntityBehaviour__Array>(get_class(), size);
        }
        inline app::EntityBehaviour__Array* create_array(const std::vector<app::EntityBehaviour*>& items) {
            return il2cpp::array_new<app::EntityBehaviour__Array>(get_class(), items);
        }
    } // namespace EntityBehaviour
} // namespace app::classes::types
