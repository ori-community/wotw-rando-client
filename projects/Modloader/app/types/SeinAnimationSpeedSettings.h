#pragma once
#include <Modloader/app/structs/SeinAnimationSpeedSettings.h>
#include <Modloader/app/structs/SeinAnimationSpeedSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAnimationSpeedSettings {
        inline app::SeinAnimationSpeedSettings__Class** type_info() {
            static app::SeinAnimationSpeedSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinAnimationSpeedSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinAnimationSpeedSettings__Class* get_class() {
            return il2cpp::get_class<app::SeinAnimationSpeedSettings__Class>(type_info(), "", "SeinAnimationSpeedSettings");
        }
        inline app::SeinAnimationSpeedSettings* create() {
            return il2cpp::create_object<app::SeinAnimationSpeedSettings>(get_class());
        }
    } // namespace SeinAnimationSpeedSettings
} // namespace app::classes::types
