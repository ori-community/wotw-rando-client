#pragma once
#include <Modloader/app/structs/CollapsingPlatform_CollapsingPlatformType__Enum.h>
#include <Modloader/app/structs/CollapsingPlatform_CollapsingPlatformType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollapsingPlatform_CollapsingPlatformType__Enum {
        inline app::CollapsingPlatform_CollapsingPlatformType__Enum__Class** type_info() {
            static app::CollapsingPlatform_CollapsingPlatformType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollapsingPlatform_CollapsingPlatformType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollapsingPlatform_CollapsingPlatformType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CollapsingPlatform_CollapsingPlatformType__Enum__Class>(type_info(), "", "CollapsingPlatform", "CollapsingPlatformType");
        }
        inline app::CollapsingPlatform_CollapsingPlatformType__Enum* create() {
            return il2cpp::create_object<app::CollapsingPlatform_CollapsingPlatformType__Enum>(get_class());
        }
    } // namespace CollapsingPlatform_CollapsingPlatformType__Enum
} // namespace app::classes::types
