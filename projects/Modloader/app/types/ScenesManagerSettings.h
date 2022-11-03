#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScenesManagerSettings {
        inline app::ScenesManagerSettings__Class** type_info = (app::ScenesManagerSettings__Class**)(modloader::win::memory::resolve_rva(0x04785730));
        inline app::ScenesManagerSettings__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerSettings__Class>(type_info, "", "ScenesManagerSettings");
        }
        inline app::ScenesManagerSettings* create() {
            return il2cpp::create_object<app::ScenesManagerSettings>(get_class());
        }
    } // namespace ScenesManagerSettings
} // namespace app::classes::types
