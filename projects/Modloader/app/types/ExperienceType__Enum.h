#pragma once
#include <Modloader/app/structs/ExperienceType__Enum.h>
#include <Modloader/app/structs/ExperienceType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExperienceType__Enum {
        inline app::ExperienceType__Enum__Class** type_info() {
            static app::ExperienceType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExperienceType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExperienceType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ExperienceType__Enum__Class>(type_info(), "ScreenshotIcons", "ExperienceType");
        }
        inline app::ExperienceType__Enum* create() {
            return il2cpp::create_object<app::ExperienceType__Enum>(get_class());
        }
    } // namespace ExperienceType__Enum
} // namespace app::classes::types
