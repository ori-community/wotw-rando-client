#pragma once
#include <Modloader/app/structs/AntiAliasing_Method__Enum.h>
#include <Modloader/app/structs/AntiAliasing_Method__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AntiAliasing_Method__Enum {
        inline app::AntiAliasing_Method__Enum__Class** type_info() {
            static app::AntiAliasing_Method__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AntiAliasing_Method__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AntiAliasing_Method__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::AntiAliasing_Method__Enum__Class>(type_info(), "UnityStandardAssets.CinematicEffects", "AntiAliasing", "Method");
        }
        inline app::AntiAliasing_Method__Enum* create() {
            return il2cpp::create_object<app::AntiAliasing_Method__Enum>(get_class());
        }
    } // namespace AntiAliasing_Method__Enum
} // namespace app::classes::types
