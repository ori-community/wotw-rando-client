#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_EnhancedComics {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CameraFilterPack_Drawing_EnhancedComics__Class** type_info;
        inline app::CameraFilterPack_Drawing_EnhancedComics__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_EnhancedComics__Class>(type_info, "", "CameraFilterPack_Drawing_EnhancedComics");
        }
        inline app::CameraFilterPack_Drawing_EnhancedComics* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_EnhancedComics>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_EnhancedComics
} // namespace app::classes::types
