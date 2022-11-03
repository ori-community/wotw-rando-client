#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityBehaviour {
        namespace {
            inline app::EntityBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::EntityBehaviour__Class** type_info = &type_info_ref;
        inline app::EntityBehaviour__Class* get_class() {
            return il2cpp::get_class<app::EntityBehaviour__Class>(type_info, "Moon", "EntityBehaviour");
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
