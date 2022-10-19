#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonAnimatorDebugConfig {
        namespace {
            inline app::MoonAnimatorDebugConfig__Class* type_info_ref = nullptr;
        }
        inline app::MoonAnimatorDebugConfig__Class** type_info = &type_info_ref;
        inline app::MoonAnimatorDebugConfig__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorDebugConfig__Class>(type_info, "Moon", "MoonAnimatorDebugConfig");
        }
        inline app::MoonAnimatorDebugConfig* create() {
            return il2cpp::create_object<app::MoonAnimatorDebugConfig>(get_class());
        }
        inline app::MoonAnimatorDebugConfig__Boxed* box(app::MoonAnimatorDebugConfig value) {
            return il2cpp::box_value<app::MoonAnimatorDebugConfig__Boxed>(get_class(), value);
        }
    } // namespace MoonAnimatorDebugConfig
} // namespace app::classes::types
