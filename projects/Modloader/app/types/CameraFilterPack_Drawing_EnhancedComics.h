#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_EnhancedComics.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_EnhancedComics__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_EnhancedComics {
        inline app::CameraFilterPack_Drawing_EnhancedComics__Class** type_info() {
            static app::CameraFilterPack_Drawing_EnhancedComics__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Drawing_EnhancedComics__Class**)(modloader::win::memory::resolve_rva(0x04719A50));
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_EnhancedComics__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_EnhancedComics__Class>(type_info(), "", "CameraFilterPack_Drawing_EnhancedComics");
        }
        inline app::CameraFilterPack_Drawing_EnhancedComics* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_EnhancedComics>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_EnhancedComics
} // namespace app::classes::types
