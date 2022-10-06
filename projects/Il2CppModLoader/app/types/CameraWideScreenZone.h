#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraWideScreenZone {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraWideScreenZone__Class** type_info;
        inline app::CameraWideScreenZone__Class* get_class() {
            return il2cpp::get_class<app::CameraWideScreenZone__Class>(type_info, "", "CameraWideScreenZone");
        }
        inline app::CameraWideScreenZone* create() {
            return il2cpp::create_object<app::CameraWideScreenZone>(get_class());
        }
        inline app::CameraWideScreenZone__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraWideScreenZone__Array>(get_class(), size);
        }
        inline app::CameraWideScreenZone__Array* create_array(const std::vector<app::CameraWideScreenZone*>& items) {
            return il2cpp::array_new<app::CameraWideScreenZone__Array>(get_class(), items);
        }
    } // namespace CameraWideScreenZone
} // namespace app::classes::types
