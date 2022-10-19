#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_TV_Artefact {
        namespace {
            inline app::CameraFilterPack_TV_Artefact__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_TV_Artefact__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_TV_Artefact__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_TV_Artefact__Class>(type_info, "", "CameraFilterPack_TV_Artefact");
        }
        inline app::CameraFilterPack_TV_Artefact* create() {
            return il2cpp::create_object<app::CameraFilterPack_TV_Artefact>(get_class());
        }
    } // namespace CameraFilterPack_TV_Artefact
} // namespace app::classes::types
