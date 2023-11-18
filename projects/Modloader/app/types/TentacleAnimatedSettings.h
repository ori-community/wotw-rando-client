#pragma once
#include <Modloader/app/structs/TentacleAnimatedSettings.h>
#include <Modloader/app/structs/TentacleAnimatedSettings__Boxed.h>
#include <Modloader/app/structs/TentacleAnimatedSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TentacleAnimatedSettings {
        inline app::TentacleAnimatedSettings__Class** type_info() {
            static app::TentacleAnimatedSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TentacleAnimatedSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TentacleAnimatedSettings__Class* get_class() {
            return il2cpp::get_class<app::TentacleAnimatedSettings__Class>(type_info(), "", "TentacleAnimatedSettings");
        }
        inline app::TentacleAnimatedSettings* create() {
            return il2cpp::create_object<app::TentacleAnimatedSettings>(get_class());
        }
        inline app::TentacleAnimatedSettings__Boxed* box(app::TentacleAnimatedSettings value) {
            return il2cpp::box_value<app::TentacleAnimatedSettings__Boxed>(get_class(), value);
        }
    } // namespace TentacleAnimatedSettings
} // namespace app::classes::types
