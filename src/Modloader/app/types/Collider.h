#pragma once
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/Collider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Collider {
        inline app::Collider__Class** type_info() {
            static app::Collider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Collider__Class**)(modloader::win::memory::resolve_rva(0x0470DB00));
            }
            return cache;
        }
        inline app::Collider__Class* get_class() {
            return il2cpp::get_class<app::Collider__Class>(type_info(), "UnityEngine", "Collider");
        }
        inline app::Collider* create() {
            return il2cpp::create_object<app::Collider>(get_class());
        }
        inline app::Collider__Array* create_array(int size) {
            return il2cpp::array_new<app::Collider__Array>(get_class(), size);
        }
        inline app::Collider__Array* create_array(const std::vector<app::Collider*>& items) {
            return il2cpp::array_new<app::Collider__Array>(get_class(), items);
        }
    } // namespace Collider
} // namespace app::classes::types
