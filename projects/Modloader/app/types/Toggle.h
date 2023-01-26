#pragma once
#include <Modloader/app/structs/Toggle.h>
#include <Modloader/app/structs/Toggle__Array.h>
#include <Modloader/app/structs/Toggle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Toggle {
        inline app::Toggle__Class** type_info() {
            static app::Toggle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Toggle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Toggle__Class* get_class() {
            return il2cpp::get_class<app::Toggle__Class>(type_info(), "UnityEngine.UI", "Toggle");
        }
        inline app::Toggle* create() {
            return il2cpp::create_object<app::Toggle>(get_class());
        }
        inline app::Toggle__Array* create_array(int size) {
            return il2cpp::array_new<app::Toggle__Array>(get_class(), size);
        }
        inline app::Toggle__Array* create_array(const std::vector<app::Toggle*>& items) {
            return il2cpp::array_new<app::Toggle__Array>(get_class(), items);
        }
    } // namespace Toggle
} // namespace app::classes::types
