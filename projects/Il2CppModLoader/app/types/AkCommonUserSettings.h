#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCommonUserSettings {
        inline app::AkCommonUserSettings__Class** type_info = (app::AkCommonUserSettings__Class**)(modloader::win::memory::resolve_rva(0x047489C8));
        inline app::AkCommonUserSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommonUserSettings__Class>(type_info, "", "AkCommonUserSettings");
        }
        inline app::AkCommonUserSettings* create() {
            return il2cpp::create_object<app::AkCommonUserSettings>(get_class());
        }
    } // namespace AkCommonUserSettings
} // namespace app::classes::types
