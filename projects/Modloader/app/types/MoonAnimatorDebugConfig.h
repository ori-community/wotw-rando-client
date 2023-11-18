#pragma once
#include <Modloader/app/structs/MoonAnimatorDebugConfig.h>
#include <Modloader/app/structs/MoonAnimatorDebugConfig__Boxed.h>
#include <Modloader/app/structs/MoonAnimatorDebugConfig__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorDebugConfig {
        inline app::MoonAnimatorDebugConfig__Class** type_info() {
            static app::MoonAnimatorDebugConfig__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonAnimatorDebugConfig__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonAnimatorDebugConfig__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorDebugConfig__Class>(type_info(), "Moon", "MoonAnimatorDebugConfig");
        }
        inline app::MoonAnimatorDebugConfig* create() {
            return il2cpp::create_object<app::MoonAnimatorDebugConfig>(get_class());
        }
        inline app::MoonAnimatorDebugConfig__Boxed* box(app::MoonAnimatorDebugConfig value) {
            return il2cpp::box_value<app::MoonAnimatorDebugConfig__Boxed>(get_class(), value);
        }
    } // namespace MoonAnimatorDebugConfig
} // namespace app::classes::types
