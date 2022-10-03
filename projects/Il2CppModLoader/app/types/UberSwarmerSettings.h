#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberSwarmerSettings {
        namespace {
            app::UberSwarmerSettings__Class* type_info_ref = nullptr;
        }
        app::UberSwarmerSettings__Class** type_info = &type_info_ref;
        inline app::UberSwarmerSettings__Class* get_class() {
            return il2cpp::get_class<app::UberSwarmerSettings__Class>(type_info, "", "UberSwarmerSettings");
        }
        inline app::UberSwarmerSettings* create() {
            return il2cpp::create_object<app::UberSwarmerSettings>(get_class());
        }
    } // namespace UberSwarmerSettings
} // namespace app::classes::types
