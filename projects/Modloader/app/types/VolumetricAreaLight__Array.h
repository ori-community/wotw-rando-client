#pragma once
#include <Modloader/app/structs/VolumetricAreaLight__Array.h>
#include <Modloader/app/structs/VolumetricAreaLight__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumetricAreaLight__Array {
        inline app::VolumetricAreaLight__Array__Class** type_info() {
            static app::VolumetricAreaLight__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumetricAreaLight__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumetricAreaLight__Array__Class* get_class() {
            return il2cpp::get_class<app::VolumetricAreaLight__Array__Class>(type_info(), "Moon.Rendering", "VolumetricAreaLight[]");
        }
        inline app::VolumetricAreaLight__Array* create() {
            return il2cpp::create_object<app::VolumetricAreaLight__Array>(get_class());
        }
    } // namespace VolumetricAreaLight__Array
} // namespace app::classes::types
