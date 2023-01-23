#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkPlatformInitSettings__Class.h>
#include <Modloader/app/structs/AkPlatformInitSettings.h>

namespace app::classes::types {
    namespace AkPlatformInitSettings {
        inline app::AkPlatformInitSettings__Class** type_info = (app::AkPlatformInitSettings__Class**)(modloader::win::memory::resolve_rva(0x04759228));
        inline app::AkPlatformInitSettings__Class* get_class() {
            return il2cpp::get_class<app::AkPlatformInitSettings__Class>(type_info, "", "AkPlatformInitSettings");
        }
        inline app::AkPlatformInitSettings* create() {
            return il2cpp::create_object<app::AkPlatformInitSettings>(get_class());
        }
    } // namespace AkPlatformInitSettings
} // namespace app::classes::types
