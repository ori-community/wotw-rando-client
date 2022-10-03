#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkWindowsSettings {
        namespace {
            app::AkWindowsSettings__Class* type_info_ref = nullptr;
        }
        app::AkWindowsSettings__Class** type_info = &type_info_ref;
        inline app::AkWindowsSettings__Class* get_class() {
            return il2cpp::get_class<app::AkWindowsSettings__Class>(type_info, "", "AkWindowsSettings");
        }
        inline app::AkWindowsSettings* create() {
            return il2cpp::create_object<app::AkWindowsSettings>(get_class());
        }
    } // namespace AkWindowsSettings
} // namespace app::classes::types
