#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetController_OffsetLayer__Array {
        namespace {
            app::CameraOffsetController_OffsetLayer__Array__Class* type_info_ref = nullptr;
        }
        app::CameraOffsetController_OffsetLayer__Array__Class** type_info = &type_info_ref;
        inline app::CameraOffsetController_OffsetLayer__Array__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetController_OffsetLayer__Array__Class>(type_info, "", "CameraOffsetController+OffsetLayer[]");
        }
        inline app::CameraOffsetController_OffsetLayer__Array* create() {
            return il2cpp::create_object<app::CameraOffsetController_OffsetLayer__Array>(get_class());
        }
    } // namespace CameraOffsetController_OffsetLayer__Array
} // namespace app::classes::types
