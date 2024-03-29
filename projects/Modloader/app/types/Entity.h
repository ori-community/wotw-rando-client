#pragma once
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/Entity__Array.h>
#include <Modloader/app/structs/Entity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Entity {
        inline app::Entity__Class** type_info() {
            static app::Entity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Entity__Class**)(modloader::win::memory::resolve_rva(0x0477F9E8));
            }
            return cache;
        }
        inline app::Entity__Class* get_class() {
            return il2cpp::get_class<app::Entity__Class>(type_info(), "Moon", "Entity");
        }
        inline app::Entity* create() {
            return il2cpp::create_object<app::Entity>(get_class());
        }
        inline app::Entity__Array* create_array(int size) {
            return il2cpp::array_new<app::Entity__Array>(get_class(), size);
        }
        inline app::Entity__Array* create_array(const std::vector<app::Entity*>& items) {
            return il2cpp::array_new<app::Entity__Array>(get_class(), items);
        }
    } // namespace Entity
} // namespace app::classes::types
