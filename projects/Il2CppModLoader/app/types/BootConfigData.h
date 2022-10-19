#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace BootConfigData {
        inline app::BootConfigData__Class** type_info = (app::BootConfigData__Class**)(modloader::win::memory::resolve_rva(0x04746358));
        inline app::BootConfigData__Class* get_class() {
            return il2cpp::get_class<app::BootConfigData__Class>(type_info, "UnityEngine", "BootConfigData");
        }
        inline app::BootConfigData* create() {
            return il2cpp::create_object<app::BootConfigData>(get_class());
        }
    } // namespace BootConfigData
} // namespace app::classes::types
