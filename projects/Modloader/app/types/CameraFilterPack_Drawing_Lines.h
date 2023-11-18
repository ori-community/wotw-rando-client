#pragma once
#include <Modloader/app/structs/CameraFilterPack_Drawing_Lines.h>
#include <Modloader/app/structs/CameraFilterPack_Drawing_Lines__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_Lines {
        inline app::CameraFilterPack_Drawing_Lines__Class** type_info() {
            static app::CameraFilterPack_Drawing_Lines__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraFilterPack_Drawing_Lines__Class**)(modloader::win::memory::resolve_rva(0x04764A30));
            }
            return cache;
        }
        inline app::CameraFilterPack_Drawing_Lines__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_Lines__Class>(type_info(), "", "CameraFilterPack_Drawing_Lines");
        }
        inline app::CameraFilterPack_Drawing_Lines* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_Lines>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_Lines
} // namespace app::classes::types
