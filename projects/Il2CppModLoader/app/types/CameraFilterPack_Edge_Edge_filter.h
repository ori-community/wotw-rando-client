#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Edge_Edge_filter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Edge_Edge_filter__Class** type_info;
        inline app::CameraFilterPack_Edge_Edge_filter__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Edge_Edge_filter__Class>(type_info, "", "CameraFilterPack_Edge_Edge_filter");
        }
        inline app::CameraFilterPack_Edge_Edge_filter* create() {
            return il2cpp::create_object<app::CameraFilterPack_Edge_Edge_filter>(get_class());
        }
    } // namespace CameraFilterPack_Edge_Edge_filter
} // namespace app::classes::types
