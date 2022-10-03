#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesaturationSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DesaturationSettings__Class** type_info;
        inline app::DesaturationSettings__Class* get_class() {
            return il2cpp::get_class<app::DesaturationSettings__Class>(type_info, "", "DesaturationSettings");
        }
        inline app::DesaturationSettings* create() {
            return il2cpp::create_object<app::DesaturationSettings>(get_class());
        }
    } // namespace DesaturationSettings
} // namespace app::classes::types
