#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraTarget_TargetLayer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraTarget_TargetLayer__Class** type_info;
        inline app::CameraTarget_TargetLayer__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraTarget_TargetLayer__Class>(type_info, "", "CameraTarget", "TargetLayer");
        }
        inline app::CameraTarget_TargetLayer* create() {
            return il2cpp::create_object<app::CameraTarget_TargetLayer>(get_class());
        }
        inline app::CameraTarget_TargetLayer__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraTarget_TargetLayer__Array>(get_class(), size);
        }
    } // namespace CameraTarget_TargetLayer
} // namespace app::classes::types
