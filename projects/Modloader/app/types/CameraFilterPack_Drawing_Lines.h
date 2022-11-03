#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Lines {
        inline app::CameraFilterPack_Drawing_Lines__Class** type_info = (app::CameraFilterPack_Drawing_Lines__Class**)(modloader::win::memory::resolve_rva(0x04764A30));
        inline app::CameraFilterPack_Drawing_Lines__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Lines__Class>(type_info, "", "CameraFilterPack_Drawing_Lines");
        }
        inline app::CameraFilterPack_Drawing_Lines* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Lines>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Lines
} // namespace app::classes::types
