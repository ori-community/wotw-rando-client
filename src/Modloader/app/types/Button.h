#pragma once
#include <Modloader/app/structs/Button.h>
#include <Modloader/app/structs/Button__Array.h>
#include <Modloader/app/structs/Button__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Button {
        inline app::Button__Class** type_info() {
            static app::Button__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Button__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Button__Class* get_class() {
            return il2cpp::get_class<app::Button__Class>(type_info(), "UnityEngine.UI", "Button");
        }
        inline app::Button* create() {
            return il2cpp::create_object<app::Button>(get_class());
        }
        inline app::Button__Array* create_array(int size) {
            return il2cpp::array_new<app::Button__Array>(get_class(), size);
        }
        inline app::Button__Array* create_array(const std::vector<app::Button*>& items) {
            return il2cpp::array_new<app::Button__Array>(get_class(), items);
        }
    } // namespace Button
} // namespace app::classes::types
