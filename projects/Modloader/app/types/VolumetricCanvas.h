#pragma once
#include <Modloader/app/structs/VolumetricCanvas.h>
#include <Modloader/app/structs/VolumetricCanvas__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumetricCanvas {
        inline app::VolumetricCanvas__Class** type_info() {
            static app::VolumetricCanvas__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumetricCanvas__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumetricCanvas__Class* get_class() {
            return il2cpp::get_class<app::VolumetricCanvas__Class>(type_info(), "Moon.Rendering", "VolumetricCanvas");
        }
        inline app::VolumetricCanvas* create() {
            return il2cpp::create_object<app::VolumetricCanvas>(get_class());
        }
    } // namespace VolumetricCanvas
} // namespace app::classes::types
