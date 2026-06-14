#pragma once
#include <Modloader/app/structs/LightShadows__Enum.h>
#include <Modloader/app/structs/LightShadows__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightShadows__Enum {
        inline app::LightShadows__Enum__Class** type_info() {
            static app::LightShadows__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightShadows__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightShadows__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightShadows__Enum__Class>(type_info(), "UnityEngine", "LightShadows");
        }
        inline app::LightShadows__Enum* create() {
            return il2cpp::create_object<app::LightShadows__Enum>(get_class());
        }
    } // namespace LightShadows__Enum
} // namespace app::classes::types
