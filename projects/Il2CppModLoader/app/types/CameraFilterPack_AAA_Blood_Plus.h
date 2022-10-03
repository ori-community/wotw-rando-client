#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_AAA_Blood_Plus {
        namespace {
            app::CameraFilterPack_AAA_Blood_Plus__Class* type_info_ref = nullptr;
        }
        app::CameraFilterPack_AAA_Blood_Plus__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_AAA_Blood_Plus__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_AAA_Blood_Plus__Class>(type_info, "", "CameraFilterPack_AAA_Blood_Plus");
        }
        inline app::CameraFilterPack_AAA_Blood_Plus* create() {
            return il2cpp::create_object<app::CameraFilterPack_AAA_Blood_Plus>(get_class());
        }
    } // namespace CameraFilterPack_AAA_Blood_Plus
} // namespace app::classes::types
