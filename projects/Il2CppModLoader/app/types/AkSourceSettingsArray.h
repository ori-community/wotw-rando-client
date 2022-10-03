#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkSourceSettingsArray {
        namespace {
            app::AkSourceSettingsArray__Class* type_info_ref = nullptr;
        }
        app::AkSourceSettingsArray__Class** type_info = &type_info_ref;
        inline app::AkSourceSettingsArray__Class* get_class() {
            return il2cpp::get_class<app::AkSourceSettingsArray__Class>(type_info, "", "AkSourceSettingsArray");
        }
        inline app::AkSourceSettingsArray* create() {
            return il2cpp::create_object<app::AkSourceSettingsArray>(get_class());
        }
    } // namespace AkSourceSettingsArray
} // namespace app::classes::types
