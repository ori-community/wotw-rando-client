#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkInitSettings {
        inline app::AkInitSettings__Class** type_info = (app::AkInitSettings__Class**)(modloader::win::memory::resolve_rva(0x04711D10));
        inline app::AkInitSettings__Class* get_class() {
            return il2cpp::get_class<app::AkInitSettings__Class>(type_info, "", "AkInitSettings");
        }
        inline app::AkInitSettings* create() {
            return il2cpp::create_object<app::AkInitSettings>(get_class());
        }
    } // namespace AkInitSettings
} // namespace app::classes::types
