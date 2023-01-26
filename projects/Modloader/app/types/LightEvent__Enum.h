#pragma once
#include <Modloader/app/structs/LightEvent__Enum.h>
#include <Modloader/app/structs/LightEvent__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightEvent__Enum {
        inline app::LightEvent__Enum__Class** type_info() {
            static app::LightEvent__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightEvent__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightEvent__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightEvent__Enum__Class>(type_info(), "UnityEngine.Rendering", "LightEvent");
        }
        inline app::LightEvent__Enum* create() {
            return il2cpp::create_object<app::LightEvent__Enum>(get_class());
        }
    } // namespace LightEvent__Enum
} // namespace app::classes::types
