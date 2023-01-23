#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Edge_Sobel__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Edge_Sobel.h>

namespace app::classes::types {
    namespace CameraFilterPack_Edge_Sobel {
        namespace {
            inline app::CameraFilterPack_Edge_Sobel__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Edge_Sobel__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Edge_Sobel__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Edge_Sobel__Class>(type_info, "", "CameraFilterPack_Edge_Sobel");
        }
        inline app::CameraFilterPack_Edge_Sobel* create() {
            return il2cpp::create_object<app::CameraFilterPack_Edge_Sobel>(get_class());
        }
    } // namespace CameraFilterPack_Edge_Sobel
} // namespace app::classes::types
