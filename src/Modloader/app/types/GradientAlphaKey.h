#pragma once
#include <Modloader/app/structs/GradientAlphaKey.h>
#include <Modloader/app/structs/GradientAlphaKey__Array.h>
#include <Modloader/app/structs/GradientAlphaKey__Boxed.h>
#include <Modloader/app/structs/GradientAlphaKey__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GradientAlphaKey {
        inline app::GradientAlphaKey__Class** type_info() {
            static app::GradientAlphaKey__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GradientAlphaKey__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GradientAlphaKey__Class* get_class() {
            return il2cpp::get_class<app::GradientAlphaKey__Class>(type_info(), "UnityEngine", "GradientAlphaKey");
        }
        inline app::GradientAlphaKey* create() {
            return il2cpp::create_object<app::GradientAlphaKey>(get_class());
        }
        inline app::GradientAlphaKey__Boxed* box(app::GradientAlphaKey value) {
            return il2cpp::box_value<app::GradientAlphaKey__Boxed>(get_class(), value);
        }
        inline app::GradientAlphaKey__Array* create_array(int size) {
            return il2cpp::array_new<app::GradientAlphaKey__Array>(get_class(), size);
        }
        inline app::GradientAlphaKey__Array* create_array(const std::vector<app::GradientAlphaKey>& items) {
            return il2cpp::array_new<app::GradientAlphaKey__Array>(get_class(), items);
        }
    } // namespace GradientAlphaKey
} // namespace app::classes::types
