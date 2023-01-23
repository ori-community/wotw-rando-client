#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkSourceSettings__Class.h>
#include <Modloader/app/structs/AkSourceSettings.h>

namespace app::classes::types {
    namespace AkSourceSettings {
        inline app::AkSourceSettings__Class** type_info = (app::AkSourceSettings__Class**)(modloader::win::memory::resolve_rva(0x047580F8));
        inline app::AkSourceSettings__Class* get_class() {
            return il2cpp::get_class<app::AkSourceSettings__Class>(type_info, "", "AkSourceSettings");
        }
        inline app::AkSourceSettings* create() {
            return il2cpp::create_object<app::AkSourceSettings>(get_class());
        }
    } // namespace AkSourceSettings
} // namespace app::classes::types
