#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkBasePlatformSettings {
        namespace {
            app::AkBasePlatformSettings__Class* type_info_ref = nullptr;
        }
        app::AkBasePlatformSettings__Class** type_info = &type_info_ref;
        inline app::AkBasePlatformSettings__Class* get_class() {
            return il2cpp::get_class<app::AkBasePlatformSettings__Class>(type_info, "", "AkBasePlatformSettings");
        }
        inline app::AkBasePlatformSettings* create() {
            return il2cpp::create_object<app::AkBasePlatformSettings>(get_class());
        }
    } // namespace AkBasePlatformSettings
} // namespace app::classes::types
