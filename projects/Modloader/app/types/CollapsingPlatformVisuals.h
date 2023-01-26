#pragma once
#include <Modloader/app/structs/CollapsingPlatformVisuals.h>
#include <Modloader/app/structs/CollapsingPlatformVisuals__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CollapsingPlatformVisuals {
        inline app::CollapsingPlatformVisuals__Class** type_info() {
            static app::CollapsingPlatformVisuals__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CollapsingPlatformVisuals__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CollapsingPlatformVisuals__Class* get_class() {
            return il2cpp::get_class<app::CollapsingPlatformVisuals__Class>(type_info(), "", "CollapsingPlatformVisuals");
        }
        inline app::CollapsingPlatformVisuals* create() {
            return il2cpp::create_object<app::CollapsingPlatformVisuals>(get_class());
        }
    } // namespace CollapsingPlatformVisuals
} // namespace app::classes::types
