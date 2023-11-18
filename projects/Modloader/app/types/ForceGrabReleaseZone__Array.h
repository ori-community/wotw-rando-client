#pragma once
#include <Modloader/app/structs/ForceGrabReleaseZone__Array.h>
#include <Modloader/app/structs/ForceGrabReleaseZone__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ForceGrabReleaseZone__Array {
        inline app::ForceGrabReleaseZone__Array__Class** type_info() {
            static app::ForceGrabReleaseZone__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ForceGrabReleaseZone__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ForceGrabReleaseZone__Array__Class* get_class() {
            return il2cpp::get_class<app::ForceGrabReleaseZone__Array__Class>(type_info(), "", "ForceGrabReleaseZone[]");
        }
        inline app::ForceGrabReleaseZone__Array* create() {
            return il2cpp::create_object<app::ForceGrabReleaseZone__Array>(get_class());
        }
    } // namespace ForceGrabReleaseZone__Array
} // namespace app::classes::types
