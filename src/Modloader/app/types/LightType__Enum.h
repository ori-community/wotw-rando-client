#pragma once
#include <Modloader/app/structs/LightType__Enum.h>
#include <Modloader/app/structs/LightType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightType__Enum {
        inline app::LightType__Enum__Class** type_info() {
            static app::LightType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightType__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightType__Enum__Class>(type_info(), "UnityEngine", "LightType");
        }
        inline app::LightType__Enum* create() {
            return il2cpp::create_object<app::LightType__Enum>(get_class());
        }
    } // namespace LightType__Enum
} // namespace app::classes::types
