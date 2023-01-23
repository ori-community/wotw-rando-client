#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkStreamMgrSettings__Class.h>
#include <Modloader/app/structs/AkStreamMgrSettings.h>

namespace app::classes::types {
    namespace AkStreamMgrSettings {
        inline app::AkStreamMgrSettings__Class** type_info = (app::AkStreamMgrSettings__Class**)(modloader::win::memory::resolve_rva(0x047811F8));
        inline app::AkStreamMgrSettings__Class* get_class() {
            return il2cpp::get_class<app::AkStreamMgrSettings__Class>(type_info, "", "AkStreamMgrSettings");
        }
        inline app::AkStreamMgrSettings* create() {
            return il2cpp::create_object<app::AkStreamMgrSettings>(get_class());
        }
    } // namespace AkStreamMgrSettings
} // namespace app::classes::types
