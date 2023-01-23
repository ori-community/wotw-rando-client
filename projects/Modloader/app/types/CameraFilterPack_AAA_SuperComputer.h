#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CameraFilterPack_AAA_SuperComputer__Class.h>
#include <Modloader/app/structs/CameraFilterPack_AAA_SuperComputer.h>

namespace app::classes::types {
    namespace CameraFilterPack_AAA_SuperComputer {
        inline app::CameraFilterPack_AAA_SuperComputer__Class** type_info = (app::CameraFilterPack_AAA_SuperComputer__Class**)(modloader::win::memory::resolve_rva(0x047254D8));
        inline app::CameraFilterPack_AAA_SuperComputer__Class* get_class() {
            return il2cpp::get_class<app::CameraFilterPack_AAA_SuperComputer__Class>(type_info, "", "CameraFilterPack_AAA_SuperComputer");
        }
        inline app::CameraFilterPack_AAA_SuperComputer* create() {
            return il2cpp::create_object<app::CameraFilterPack_AAA_SuperComputer>(get_class());
        }
    } // namespace CameraFilterPack_AAA_SuperComputer
} // namespace app::classes::types
