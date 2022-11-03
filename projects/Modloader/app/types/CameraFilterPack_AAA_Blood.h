#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_AAA_Blood {
        namespace {
            inline app::CameraFilterPack_AAA_Blood__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_AAA_Blood__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_AAA_Blood__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_AAA_Blood__Class>(type_info, "", "CameraFilterPack_AAA_Blood");
        }
        inline app::CameraFilterPack_AAA_Blood* create() {
            return il2cpp::create_object<app::CameraFilterPack_AAA_Blood>(get_class());
        }
    } // namespace CameraFilterPack_AAA_Blood
} // namespace app::classes::types
