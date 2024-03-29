#pragma once
#include <Modloader/app/structs/CameraOffsetMenuItem.h>
#include <Modloader/app/structs/CameraOffsetMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraOffsetMenuItem {
        inline app::CameraOffsetMenuItem__Class** type_info() {
            static app::CameraOffsetMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CameraOffsetMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04701640));
            }
            return cache;
        }
        inline app::CameraOffsetMenuItem__Class* get_class() {
            return il2cpp::get_class<app::CameraOffsetMenuItem__Class>(type_info(), "", "CameraOffsetMenuItem");
        }
        inline app::CameraOffsetMenuItem* create() {
            return il2cpp::create_object<app::CameraOffsetMenuItem>(get_class());
        }
    } // namespace CameraOffsetMenuItem
} // namespace app::classes::types
