#pragma once
#include <Modloader/app/structs/VolumetricPointLight__Array.h>
#include <Modloader/app/structs/VolumetricPointLight__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumetricPointLight__Array {
        inline app::VolumetricPointLight__Array__Class** type_info() {
            static app::VolumetricPointLight__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumetricPointLight__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumetricPointLight__Array__Class* get_class() {
            return il2cpp::get_class<app::VolumetricPointLight__Array__Class>(type_info(), "Moon.Rendering", "VolumetricPointLight[]");
        }
        inline app::VolumetricPointLight__Array* create() {
            return il2cpp::create_object<app::VolumetricPointLight__Array>(get_class());
        }
    } // namespace VolumetricPointLight__Array
} // namespace app::classes::types
