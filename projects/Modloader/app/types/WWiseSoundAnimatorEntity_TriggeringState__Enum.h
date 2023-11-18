#pragma once
#include <Modloader/app/structs/WWiseSoundAnimatorEntity_TriggeringState__Enum.h>
#include <Modloader/app/structs/WWiseSoundAnimatorEntity_TriggeringState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WWiseSoundAnimatorEntity_TriggeringState__Enum {
        inline app::WWiseSoundAnimatorEntity_TriggeringState__Enum__Class** type_info() {
            static app::WWiseSoundAnimatorEntity_TriggeringState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WWiseSoundAnimatorEntity_TriggeringState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WWiseSoundAnimatorEntity_TriggeringState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WWiseSoundAnimatorEntity_TriggeringState__Enum__Class>(type_info(), "Moon.Timeline", "WWiseSoundAnimatorEntity", "TriggeringState");
        }
        inline app::WWiseSoundAnimatorEntity_TriggeringState__Enum* create() {
            return il2cpp::create_object<app::WWiseSoundAnimatorEntity_TriggeringState__Enum>(get_class());
        }
    } // namespace WWiseSoundAnimatorEntity_TriggeringState__Enum
} // namespace app::classes::types
