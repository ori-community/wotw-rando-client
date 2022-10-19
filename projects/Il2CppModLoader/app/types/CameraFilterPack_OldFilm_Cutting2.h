#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_OldFilm_Cutting2 {
        namespace {
            inline app::CameraFilterPack_OldFilm_Cutting2__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_OldFilm_Cutting2__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_OldFilm_Cutting2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_OldFilm_Cutting2__Class>(type_info, "", "CameraFilterPack_OldFilm_Cutting2");
        }
        inline app::CameraFilterPack_OldFilm_Cutting2* create() {
            return il2cpp::create_object<app::CameraFilterPack_OldFilm_Cutting2>(get_class());
        }
    } // namespace CameraFilterPack_OldFilm_Cutting2
} // namespace app::classes::types
