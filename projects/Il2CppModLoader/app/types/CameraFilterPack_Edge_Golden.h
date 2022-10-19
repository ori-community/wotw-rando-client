#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Edge_Golden {
        namespace {
            inline app::CameraFilterPack_Edge_Golden__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Edge_Golden__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Edge_Golden__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Edge_Golden__Class>(type_info, "", "CameraFilterPack_Edge_Golden");
        }
        inline app::CameraFilterPack_Edge_Golden* create() {
            return il2cpp::create_object<app::CameraFilterPack_Edge_Golden>(get_class());
        }
    } // namespace CameraFilterPack_Edge_Golden
} // namespace app::classes::types
