#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CollapsingPlatformVisuals {
        namespace {
            app::CollapsingPlatformVisuals__Class* type_info_ref = nullptr;
        }
        app::CollapsingPlatformVisuals__Class** type_info = &type_info_ref;
        inline app::CollapsingPlatformVisuals__Class* get_class() {
            return il2cpp::get_class<app::CollapsingPlatformVisuals__Class>(type_info, "", "CollapsingPlatformVisuals");
        }
        inline app::CollapsingPlatformVisuals* create() {
            return il2cpp::create_object<app::CollapsingPlatformVisuals>(get_class());
        }
    } // namespace CollapsingPlatformVisuals
} // namespace app::classes::types
