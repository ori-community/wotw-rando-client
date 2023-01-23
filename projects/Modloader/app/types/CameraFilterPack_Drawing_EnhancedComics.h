#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_EnhancedComics__Class.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_EnhancedComics.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_EnhancedComics {
        inline app::CameraFilterPack_Drawing_EnhancedComics__Class** type_info = (app::CameraFilterPack_Drawing_EnhancedComics__Class**)(modloader::win::memory::resolve_rva(0x04719A50));
        inline app::CameraFilterPack_Drawing_EnhancedComics__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_EnhancedComics__Class>(type_info, "", "CameraFilterPack_Drawing_EnhancedComics");
        }
        inline app::CameraFilterPack_Drawing_EnhancedComics* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_EnhancedComics>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_EnhancedComics
} // namespace app::classes::types
