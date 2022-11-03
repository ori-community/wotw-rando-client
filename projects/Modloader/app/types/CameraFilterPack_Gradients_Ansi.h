#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CameraFilterPack_Gradients_Ansi {
        namespace {
            inline app::CameraFilterPack_Gradients_Ansi__Class* type_info_ref = nullptr;
        }
        inline app::CameraFilterPack_Gradients_Ansi__Class** type_info = &type_info_ref;
        inline app::CameraFilterPack_Gradients_Ansi__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_Gradients_Ansi__Class>(type_info, "", "CameraFilterPack_Gradients_Ansi");
        }
        inline app::CameraFilterPack_Gradients_Ansi* create() {
            return il2cpp::create_object<app::CameraFilterPack_Gradients_Ansi>(get_class());
        }
    } // namespace CameraFilterPack_Gradients_Ansi
} // namespace app::classes::types
