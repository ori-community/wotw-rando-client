#pragma once
#include <Modloader/app/structs/PickUpSphere.h>
#include <Modloader/app/structs/PickUpSphere__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PickUpSphere {
        inline app::PickUpSphere__Class** type_info() {
            static app::PickUpSphere__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PickUpSphere__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PickUpSphere__Class* get_class() {
            return il2cpp::get_class<app::PickUpSphere__Class>(type_info(), "RootMotion.Demos", "PickUpSphere");
        }
        inline app::PickUpSphere* create() {
            return il2cpp::create_object<app::PickUpSphere>(get_class());
        }
    } // namespace PickUpSphere
} // namespace app::classes::types
