#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga2 {
        inline app::CameraFilterPack_Drawing_Manga2__Class** type_info = (app::CameraFilterPack_Drawing_Manga2__Class**)(modloader::win::memory::resolve_rva(0x0473CF80));
        inline app::CameraFilterPack_Drawing_Manga2__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga2__Class>(type_info, "", "CameraFilterPack_Drawing_Manga2");
        }
        inline app::CameraFilterPack_Drawing_Manga2* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga2>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga2
} // namespace app::classes::types
