#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MovingPlatformController_ProjectedObjectEntry__Array {
        namespace {
            app::MovingPlatformController_ProjectedObjectEntry__Array__Class* type_info_ref = nullptr;
        }
        app::MovingPlatformController_ProjectedObjectEntry__Array__Class** type_info = &type_info_ref;
        inline app::MovingPlatformController_ProjectedObjectEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::MovingPlatformController_ProjectedObjectEntry__Array__Class>(type_info, "", "MovingPlatformController+ProjectedObjectEntry[]");
        }
        inline app::MovingPlatformController_ProjectedObjectEntry__Array* create() {
            return il2cpp::create_object<app::MovingPlatformController_ProjectedObjectEntry__Array>(get_class());
        }
    } // namespace MovingPlatformController_ProjectedObjectEntry__Array
} // namespace app::classes::types
