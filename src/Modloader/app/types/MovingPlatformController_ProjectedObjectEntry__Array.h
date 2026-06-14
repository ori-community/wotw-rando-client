#pragma once
#include <Modloader/app/structs/MovingPlatformController_ProjectedObjectEntry__Array.h>
#include <Modloader/app/structs/MovingPlatformController_ProjectedObjectEntry__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MovingPlatformController_ProjectedObjectEntry__Array {
        inline app::MovingPlatformController_ProjectedObjectEntry__Array__Class** type_info() {
            static app::MovingPlatformController_ProjectedObjectEntry__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MovingPlatformController_ProjectedObjectEntry__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MovingPlatformController_ProjectedObjectEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::MovingPlatformController_ProjectedObjectEntry__Array__Class>(type_info(), "", "MovingPlatformController+ProjectedObjectEntry[]");
        }
        inline app::MovingPlatformController_ProjectedObjectEntry__Array* create() {
            return il2cpp::create_object<app::MovingPlatformController_ProjectedObjectEntry__Array>(get_class());
        }
    } // namespace MovingPlatformController_ProjectedObjectEntry__Array
} // namespace app::classes::types
