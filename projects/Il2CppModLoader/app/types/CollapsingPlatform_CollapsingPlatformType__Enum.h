#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CollapsingPlatform_CollapsingPlatformType__Enum {
        namespace {
            inline app::CollapsingPlatform_CollapsingPlatformType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CollapsingPlatform_CollapsingPlatformType__Enum__Class** type_info = &type_info_ref;
        inline app::CollapsingPlatform_CollapsingPlatformType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CollapsingPlatform_CollapsingPlatformType__Enum__Class>(type_info, "", "CollapsingPlatform", "CollapsingPlatformType");
        }
        inline app::CollapsingPlatform_CollapsingPlatformType__Enum* create() {
            return il2cpp::create_object<app::CollapsingPlatform_CollapsingPlatformType__Enum>(get_class());
        }
    } // namespace CollapsingPlatform_CollapsingPlatformType__Enum
} // namespace app::classes::types
