#pragma once
#include <Modloader/app/structs/ColorUtility.h>
#include <Modloader/app/structs/ColorUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ColorUtility {
        inline app::ColorUtility__Class** type_info() {
            static app::ColorUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ColorUtility__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ColorUtility__Class* get_class() {
            return il2cpp::get_class<app::ColorUtility__Class>(type_info(), "UnityEngine", "ColorUtility");
        }
        inline app::ColorUtility* create() {
            return il2cpp::create_object<app::ColorUtility>(get_class());
        }
    } // namespace ColorUtility
} // namespace app::classes::types
