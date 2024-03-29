#pragma once
#include <Modloader/app/structs/Navigation.h>
#include <Modloader/app/structs/Navigation__Array.h>
#include <Modloader/app/structs/Navigation__Boxed.h>
#include <Modloader/app/structs/Navigation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Navigation {
        inline app::Navigation__Class** type_info() {
            static app::Navigation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Navigation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Navigation__Class* get_class() {
            return il2cpp::get_class<app::Navigation__Class>(type_info(), "UnityEngine.UI", "Navigation");
        }
        inline app::Navigation* create() {
            return il2cpp::create_object<app::Navigation>(get_class());
        }
        inline app::Navigation__Boxed* box(app::Navigation value) {
            return il2cpp::box_value<app::Navigation__Boxed>(get_class(), value);
        }
        inline app::Navigation__Array* create_array(int size) {
            return il2cpp::array_new<app::Navigation__Array>(get_class(), size);
        }
        inline app::Navigation__Array* create_array(const std::vector<app::Navigation>& items) {
            return il2cpp::array_new<app::Navigation__Array>(get_class(), items);
        }
    } // namespace Navigation
} // namespace app::classes::types
