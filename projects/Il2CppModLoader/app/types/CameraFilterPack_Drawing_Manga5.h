#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Manga5 {
        inline app::CameraFilterPack_Drawing_Manga5__Class** type_info = (app::CameraFilterPack_Drawing_Manga5__Class**)(modloader::win::memory::resolve_rva(0x04715E08));
        inline app::CameraFilterPack_Drawing_Manga5__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Manga5__Class>(type_info, "", "CameraFilterPack_Drawing_Manga5");
        }
        inline app::CameraFilterPack_Drawing_Manga5* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Manga5>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Manga5
} // namespace app::classes::types
