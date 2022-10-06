#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetController_OffsetLayer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraOffsetController_OffsetLayer__Class** type_info;
        inline app::CameraOffsetController_OffsetLayer__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraOffsetController_OffsetLayer__Class>(type_info, "", "CameraOffsetController", "OffsetLayer");
        }
        inline app::CameraOffsetController_OffsetLayer* create() {
            return il2cpp::create_object<app::CameraOffsetController_OffsetLayer>(get_class());
        }
        inline app::CameraOffsetController_OffsetLayer__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraOffsetController_OffsetLayer__Array>(get_class(), size);
        }
        inline app::CameraOffsetController_OffsetLayer__Array* create_array(const std::vector<app::CameraOffsetController_OffsetLayer*>& items) {
            return il2cpp::array_new<app::CameraOffsetController_OffsetLayer__Array>(get_class(), items);
        }
    } // namespace CameraOffsetController_OffsetLayer
} // namespace app::classes::types
