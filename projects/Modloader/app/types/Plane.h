#pragma once
#include <Modloader/app/structs/Plane.h>
#include <Modloader/app/structs/Plane__Array.h>
#include <Modloader/app/structs/Plane__Boxed.h>
#include <Modloader/app/structs/Plane__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Plane {
        inline app::Plane__Class** type_info() {
            static app::Plane__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Plane__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Plane__Class* get_class() {
            return il2cpp::get_class<app::Plane__Class>(type_info(), "UnityEngine", "Plane");
        }
        inline app::Plane* create() {
            return il2cpp::create_object<app::Plane>(get_class());
        }
        inline app::Plane__Boxed* box(app::Plane value) {
            return il2cpp::box_value<app::Plane__Boxed>(get_class(), value);
        }
        inline app::Plane__Array* create_array(int size) {
            return il2cpp::array_new<app::Plane__Array>(get_class(), size);
        }
        inline app::Plane__Array* create_array(const std::vector<app::Plane>& items) {
            return il2cpp::array_new<app::Plane__Array>(get_class(), items);
        }
    } // namespace Plane
} // namespace app::classes::types
