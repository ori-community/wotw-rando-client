#pragma once
#include <Modloader/app/structs/SunShafts_SunShaftsResolution__Enum.h>
#include <Modloader/app/structs/SunShafts_SunShaftsResolution__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SunShafts_SunShaftsResolution__Enum {
        inline app::SunShafts_SunShaftsResolution__Enum__Class** type_info() {
            static app::SunShafts_SunShaftsResolution__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SunShafts_SunShaftsResolution__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SunShafts_SunShaftsResolution__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SunShafts_SunShaftsResolution__Enum__Class>(type_info(), "UnityStandardAssets.ImageEffects", "SunShafts", "SunShaftsResolution");
        }
        inline app::SunShafts_SunShaftsResolution__Enum* create() {
            return il2cpp::create_object<app::SunShafts_SunShaftsResolution__Enum>(get_class());
        }
    } // namespace SunShafts_SunShaftsResolution__Enum
} // namespace app::classes::types
