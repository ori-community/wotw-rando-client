#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WWiseSoundAnimatorEntity_TriggeringState__Enum {
        namespace {
            inline app::WWiseSoundAnimatorEntity_TriggeringState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WWiseSoundAnimatorEntity_TriggeringState__Enum__Class** type_info = &type_info_ref;
        inline app::WWiseSoundAnimatorEntity_TriggeringState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::WWiseSoundAnimatorEntity_TriggeringState__Enum__Class>(type_info, "Moon.Timeline", "WWiseSoundAnimatorEntity", "TriggeringState");
        }
        inline app::WWiseSoundAnimatorEntity_TriggeringState__Enum* create() {
            return il2cpp::create_object<app::WWiseSoundAnimatorEntity_TriggeringState__Enum>(get_class());
        }
    } // namespace WWiseSoundAnimatorEntity_TriggeringState__Enum
} // namespace app::classes::types
