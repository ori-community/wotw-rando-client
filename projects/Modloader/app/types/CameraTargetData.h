#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraTargetData__Class.h>
#include <Modloader/app/structs/CameraTargetData.h>

namespace app::classes::types {
    namespace CameraTargetData {
        inline app::CameraTargetData__Class** type_info = (app::CameraTargetData__Class**)(modloader::win::memory::resolve_rva(0x04794050));
        inline app::CameraTargetData__Class* get_class() {
            return il2cpp::get_class<app::CameraTargetData__Class>(type_info, "", "CameraTargetData");
        }
        inline app::CameraTargetData* create() {
            return il2cpp::create_object<app::CameraTargetData>(get_class());
        }
    } // namespace CameraTargetData
} // namespace app::classes::types
