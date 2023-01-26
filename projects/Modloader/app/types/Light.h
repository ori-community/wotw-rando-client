#pragma once
#include <Modloader/app/structs/Light.h>
#include <Modloader/app/structs/Light__Array.h>
#include <Modloader/app/structs/Light__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Light {
        inline app::Light__Class** type_info() {
            static app::Light__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Light__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Light__Class* get_class() {
            return il2cpp::get_class<app::Light__Class>(type_info(), "UnityEngine", "Light");
        }
        inline app::Light* create() {
            return il2cpp::create_object<app::Light>(get_class());
        }
        inline app::Light__Array* create_array(int size) {
            return il2cpp::array_new<app::Light__Array>(get_class(), size);
        }
        inline app::Light__Array* create_array(const std::vector<app::Light*>& items) {
            return il2cpp::array_new<app::Light__Array>(get_class(), items);
        }
    } // namespace Light
} // namespace app::classes::types
