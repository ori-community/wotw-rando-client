#pragma once
#include <Modloader/app/structs/VolumetricConfig.h>
#include <Modloader/app/structs/VolumetricConfig__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumetricConfig {
        inline app::VolumetricConfig__Class** type_info() {
            static app::VolumetricConfig__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumetricConfig__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumetricConfig__Class* get_class() {
            return il2cpp::get_class<app::VolumetricConfig__Class>(type_info(), "Moon.Rendering", "VolumetricConfig");
        }
        inline app::VolumetricConfig* create() {
            return il2cpp::create_object<app::VolumetricConfig>(get_class());
        }
    } // namespace VolumetricConfig
} // namespace app::classes::types
