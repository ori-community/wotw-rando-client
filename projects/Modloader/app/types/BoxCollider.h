#pragma once
#include <Modloader/app/structs/BoxCollider.h>
#include <Modloader/app/structs/BoxCollider__Array.h>
#include <Modloader/app/structs/BoxCollider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BoxCollider {
        inline app::BoxCollider__Class** type_info() {
            static app::BoxCollider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BoxCollider__Class**)(modloader::win::memory::resolve_rva(0x04784060));
            }
            return cache;
        }
        inline app::BoxCollider__Class* get_class() {
            return il2cpp::get_class<app::BoxCollider__Class>(type_info(), "UnityEngine", "BoxCollider");
        }
        inline app::BoxCollider* create() {
            return il2cpp::create_object<app::BoxCollider>(get_class());
        }
        inline app::BoxCollider__Array* create_array(int size) {
            return il2cpp::array_new<app::BoxCollider__Array>(get_class(), size);
        }
        inline app::BoxCollider__Array* create_array(const std::vector<app::BoxCollider*>& items) {
            return il2cpp::array_new<app::BoxCollider__Array>(get_class(), items);
        }
    } // namespace BoxCollider
} // namespace app::classes::types
