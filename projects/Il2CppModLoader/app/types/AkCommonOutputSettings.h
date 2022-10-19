#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCommonOutputSettings {
        namespace {
            inline app::AkCommonOutputSettings__Class* type_info_ref = nullptr;
        }
        inline app::AkCommonOutputSettings__Class** type_info = &type_info_ref;
        inline app::AkCommonOutputSettings__Class* get_class() {
            return il2cpp::get_class<app::AkCommonOutputSettings__Class>(type_info, "", "AkCommonOutputSettings");
        }
        inline app::AkCommonOutputSettings* create() {
            return il2cpp::create_object<app::AkCommonOutputSettings>(get_class());
        }
    } // namespace AkCommonOutputSettings
} // namespace app::classes::types
