#pragma once
#include <Modloader/app/structs/GradientColorKey.h>
#include <Modloader/app/structs/GradientColorKey__Array.h>
#include <Modloader/app/structs/GradientColorKey__Boxed.h>
#include <Modloader/app/structs/GradientColorKey__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GradientColorKey {
        inline app::GradientColorKey__Class** type_info() {
            static app::GradientColorKey__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GradientColorKey__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GradientColorKey__Class* get_class() {
            return il2cpp::get_class<app::GradientColorKey__Class>(type_info(), "UnityEngine", "GradientColorKey");
        }
        inline app::GradientColorKey* create() {
            return il2cpp::create_object<app::GradientColorKey>(get_class());
        }
        inline app::GradientColorKey__Boxed* box(app::GradientColorKey value) {
            return il2cpp::box_value<app::GradientColorKey__Boxed>(get_class(), value);
        }
        inline app::GradientColorKey__Array* create_array(int size) {
            return il2cpp::array_new<app::GradientColorKey__Array>(get_class(), size);
        }
        inline app::GradientColorKey__Array* create_array(const std::vector<app::GradientColorKey>& items) {
            return il2cpp::array_new<app::GradientColorKey__Array>(get_class(), items);
        }
    } // namespace GradientColorKey
} // namespace app::classes::types
