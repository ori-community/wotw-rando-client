#pragma once
#include <Modloader/app/structs/ContactPoint.h>
#include <Modloader/app/structs/ContactPoint__Array.h>
#include <Modloader/app/structs/ContactPoint__Boxed.h>
#include <Modloader/app/structs/ContactPoint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContactPoint {
        inline app::ContactPoint__Class** type_info() {
            static app::ContactPoint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContactPoint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContactPoint__Class* get_class() {
            return il2cpp::get_class<app::ContactPoint__Class>(type_info(), "UnityEngine", "ContactPoint");
        }
        inline app::ContactPoint* create() {
            return il2cpp::create_object<app::ContactPoint>(get_class());
        }
        inline app::ContactPoint__Boxed* box(app::ContactPoint value) {
            return il2cpp::box_value<app::ContactPoint__Boxed>(get_class(), value);
        }
        inline app::ContactPoint__Array* create_array(int size) {
            return il2cpp::array_new<app::ContactPoint__Array>(get_class(), size);
        }
        inline app::ContactPoint__Array* create_array(const std::vector<app::ContactPoint>& items) {
            return il2cpp::array_new<app::ContactPoint__Array>(get_class(), items);
        }
    } // namespace ContactPoint
} // namespace app::classes::types
