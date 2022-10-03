#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleAnimatedSettings {
        namespace {
            app::TentacleAnimatedSettings__Class* type_info_ref = nullptr;
        }
        app::TentacleAnimatedSettings__Class** type_info = &type_info_ref;
        inline app::TentacleAnimatedSettings__Class* get_class() {
            return il2cpp::get_class<app::TentacleAnimatedSettings__Class>(type_info, "", "TentacleAnimatedSettings");
        }
        inline app::TentacleAnimatedSettings* create() {
            return il2cpp::create_object<app::TentacleAnimatedSettings>(get_class());
        }
        inline app::TentacleAnimatedSettings__Boxed* box(app::TentacleAnimatedSettings value) {
            return il2cpp::box_value<app::TentacleAnimatedSettings__Boxed>(get_class(), value);
        }
    } // namespace TentacleAnimatedSettings
} // namespace app::classes::types
