#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkCommonCommSettings__Class.h>
#include <Modloader/app/structs/AkCommonCommSettings.h>

namespace app::classes::types {
    namespace AkCommonCommSettings {
        inline app::AkCommonCommSettings__Class** type_info = (app::AkCommonCommSettings__Class**)(modloader::win::memory::resolve_rva(0x0478F140));
        inline app::AkCommonCommSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommonCommSettings__Class>(type_info, "", "AkCommonCommSettings");
        }
        inline app::AkCommonCommSettings* create() {
            return il2cpp::create_object<app::AkCommonCommSettings>(get_class());
        }
    } // namespace AkCommonCommSettings
} // namespace app::classes::types
