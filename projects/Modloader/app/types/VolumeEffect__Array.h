#pragma once
#include <Modloader/app/structs/VolumeEffect__Array.h>
#include <Modloader/app/structs/VolumeEffect__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeEffect__Array {
        inline app::VolumeEffect__Array__Class** type_info() {
            static app::VolumeEffect__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumeEffect__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumeEffect__Array__Class* get_class() {
            return il2cpp::get_class<app::VolumeEffect__Array__Class>(type_info(), "AmplifyColor", "VolumeEffect[]");
        }
        inline app::VolumeEffect__Array* create() {
            return il2cpp::create_object<app::VolumeEffect__Array>(get_class());
        }
    } // namespace VolumeEffect__Array
} // namespace app::classes::types
