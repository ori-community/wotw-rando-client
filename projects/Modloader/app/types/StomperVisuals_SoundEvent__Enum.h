#pragma once
#include <Modloader/app/structs/StomperVisuals_SoundEvent__Enum.h>
#include <Modloader/app/structs/StomperVisuals_SoundEvent__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StomperVisuals_SoundEvent__Enum {
        inline app::StomperVisuals_SoundEvent__Enum__Class** type_info() {
            static app::StomperVisuals_SoundEvent__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StomperVisuals_SoundEvent__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StomperVisuals_SoundEvent__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StomperVisuals_SoundEvent__Enum__Class>(type_info(), "", "StomperVisuals", "SoundEvent");
        }
        inline app::StomperVisuals_SoundEvent__Enum* create() {
            return il2cpp::create_object<app::StomperVisuals_SoundEvent__Enum>(get_class());
        }
    } // namespace StomperVisuals_SoundEvent__Enum
} // namespace app::classes::types
