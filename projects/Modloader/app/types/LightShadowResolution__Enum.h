#pragma once
#include <Modloader/app/structs/LightShadowResolution__Enum.h>
#include <Modloader/app/structs/LightShadowResolution__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LightShadowResolution__Enum {
        inline app::LightShadowResolution__Enum__Class** type_info() {
            static app::LightShadowResolution__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LightShadowResolution__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LightShadowResolution__Enum__Class* get_class() {
            return il2cpp::get_class<app::LightShadowResolution__Enum__Class>(type_info(), "UnityEngine.Rendering", "LightShadowResolution");
        }
        inline app::LightShadowResolution__Enum* create() {
            return il2cpp::create_object<app::LightShadowResolution__Enum>(get_class());
        }
    } // namespace LightShadowResolution__Enum
} // namespace app::classes::types
