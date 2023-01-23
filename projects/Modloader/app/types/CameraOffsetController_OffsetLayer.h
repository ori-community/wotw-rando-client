#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraOffsetController_OffsetLayer__Class.h>
#include <Modloader/app/structs/CameraOffsetController_OffsetLayer.h>
#include <Modloader/app/structs/CameraOffsetController_OffsetLayer__Array.h>

namespace app::classes::types {
    namespace CameraOffsetController_OffsetLayer {
        inline app::CameraOffsetController_OffsetLayer__Class** type_info = (app::CameraOffsetController_OffsetLayer__Class**)(modloader::win::memory::resolve_rva(0x04734A78));
        inline app::CameraOffsetController_OffsetLayer__Class* get_class() {
            return il2cpp::get_nested_class<app::CameraOffsetController_OffsetLayer__Class>(type_info, "", "CameraOffsetController", "OffsetLayer");
        }
        inline app::CameraOffsetController_OffsetLayer* create() {
            return il2cpp::create_object<app::CameraOffsetController_OffsetLayer>(get_class());
        }
        inline app::CameraOffsetController_OffsetLayer__Array* create_array(int size) {
            return il2cpp::array_new<app::CameraOffsetController_OffsetLayer__Array>(get_class(), size);
        }
        inline app::CameraOffsetController_OffsetLayer__Array* create_array(const std::vector<app::CameraOffsetController_OffsetLayer*>& items) {
            return il2cpp::array_new<app::CameraOffsetController_OffsetLayer__Array>(get_class(), items);
        }
    } // namespace CameraOffsetController_OffsetLayer
} // namespace app::classes::types
