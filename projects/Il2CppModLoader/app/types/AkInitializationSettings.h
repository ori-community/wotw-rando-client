#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkInitializationSettings {
        inline app::AkInitializationSettings__Class** type_info = (app::AkInitializationSettings__Class**)(modloader::win::memory::resolve_rva(0x04728B80));
        inline app::AkInitializationSettings__Class* get_class() {
            return il2cpp::get_class<app::AkInitializationSettings__Class>(type_info, "", "AkInitializationSettings");
        }
        inline app::AkInitializationSettings* create() {
            return il2cpp::create_object<app::AkInitializationSettings>(get_class());
        }
    } // namespace AkInitializationSettings
} // namespace app::classes::types
