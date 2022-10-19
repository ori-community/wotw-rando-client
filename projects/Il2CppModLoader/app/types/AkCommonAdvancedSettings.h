#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCommonAdvancedSettings {
        namespace {
            inline app::AkCommonAdvancedSettings__Class* type_info_ref = nullptr;
        }
        inline app::AkCommonAdvancedSettings__Class** type_info = &type_info_ref;
        inline app::AkCommonAdvancedSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommonAdvancedSettings__Class>(type_info, "", "AkCommonAdvancedSettings");
        }
        inline app::AkCommonAdvancedSettings* create() {
            return il2cpp::create_object<app::AkCommonAdvancedSettings>(get_class());
        }
    } // namespace AkCommonAdvancedSettings
} // namespace app::classes::types
