#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Drawing_BluePrint {
        namespace {
            inline app::CameraFilterPack_Drawing_BluePrint__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Drawing_BluePrint__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Drawing_BluePrint__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Drawing_BluePrint__Class>(type_info, "", "CameraFilterPack_Drawing_BluePrint");
        }
        inline app::CameraFilterPack_Drawing_BluePrint* create() {
            return il2cpp::create_object<app::CameraFilterPack_Drawing_BluePrint>(get_class());
        }
    } // namespace CameraFilterPack_Drawing_BluePrint
} // namespace app::classes::types
