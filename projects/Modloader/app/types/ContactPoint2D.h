#pragma once
#include <Modloader/app/structs/ContactPoint2D.h>
#include <Modloader/app/structs/ContactPoint2D__Array.h>
#include <Modloader/app/structs/ContactPoint2D__Boxed.h>
#include <Modloader/app/structs/ContactPoint2D__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContactPoint2D {
        inline app::ContactPoint2D__Class** type_info() {
            static app::ContactPoint2D__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContactPoint2D__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContactPoint2D__Class* get_class() {
            return il2cpp::get_class<app::ContactPoint2D__Class>(type_info(), "UnityEngine", "ContactPoint2D");
        }
        inline app::ContactPoint2D* create() {
            return il2cpp::create_object<app::ContactPoint2D>(get_class());
        }
        inline app::ContactPoint2D__Boxed* box(app::ContactPoint2D value) {
            return il2cpp::box_value<app::ContactPoint2D__Boxed>(get_class(), value);
        }
        inline app::ContactPoint2D__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactPoint2D__Array>(get_class(), size);
        }
        inline app::ContactPoint2D__Array* create_array(const std::vector<app::ContactPoint2D>& items) {
            return il2cpp::array_new<app::ContactPoint2D__Array>(get_class(), items);
        }
    } // namespace ContactPoint2D
} // namespace app::classes::types
