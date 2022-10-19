#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkSwitchSettings {
        namespace {
            inline app::AkSwitchSettings__Class* type_info_ref = nullptr;
        }
        inline app::AkSwitchSettings__Class** type_info = &type_info_ref;
        inline app::AkSwitchSettings__Class* get_class() {
            return il2cpp::get_class<app::AkSwitchSettings__Class>(type_info, "", "AkSwitchSettings");
        }
        inline app::AkSwitchSettings* create() {
            return il2cpp::create_object<app::AkSwitchSettings>(get_class());
        }
    } // namespace AkSwitchSettings
} // namespace app::classes::types
