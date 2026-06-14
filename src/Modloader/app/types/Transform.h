#pragma once
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Transform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Transform {
        inline app::Transform__Class** type_info() {
            static app::Transform__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Transform__Class**)(modloader::win::memory::resolve_rva(0x04788B20));
            }
            return cache;
        }
        inline app::Transform__Class* get_class() {
            return il2cpp::get_class<app::Transform__Class>(type_info(), "UnityEngine", "Transform");
        }
        inline app::Transform* create() {
            return il2cpp::create_object<app::Transform>(get_class());
        }
        inline app::Transform__Array* create_array(int size) {
            return il2cpp::array_new<app::Transform__Array>(get_class(), size);
        }
        inline app::Transform__Array* create_array(const std::vector<app::Transform*>& items) {
            return il2cpp::array_new<app::Transform__Array>(get_class(), items);
        }
    } // namespace Transform
} // namespace app::classes::types
