#pragma once
#include <Modloader/app/structs/VolumeHasChanged_t.h>
#include <Modloader/app/structs/VolumeHasChanged_t__Boxed.h>
#include <Modloader/app/structs/VolumeHasChanged_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VolumeHasChanged_t {
        inline app::VolumeHasChanged_t__Class** type_info() {
            static app::VolumeHasChanged_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VolumeHasChanged_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VolumeHasChanged_t__Class* get_class() {
            return il2cpp::get_class<app::VolumeHasChanged_t__Class>(type_info(), "Steamworks", "VolumeHasChanged_t");
        }
        inline app::VolumeHasChanged_t* create() {
            return il2cpp::create_object<app::VolumeHasChanged_t>(get_class());
        }
        inline app::VolumeHasChanged_t__Boxed* box(app::VolumeHasChanged_t value) {
            return il2cpp::box_value<app::VolumeHasChanged_t__Boxed>(get_class(), value);
        }
    } // namespace VolumeHasChanged_t
} // namespace app::classes::types
