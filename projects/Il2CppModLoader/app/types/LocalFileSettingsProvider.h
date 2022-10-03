#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LocalFileSettingsProvider {
        namespace {
            app::LocalFileSettingsProvider__Class* type_info_ref = nullptr;
        }
        app::LocalFileSettingsProvider__Class** type_info = &type_info_ref;
        inline app::LocalFileSettingsProvider__Class* get_class() {
            return il2cpp::get_class<app::LocalFileSettingsProvider__Class>(type_info, "System.Configuration", "LocalFileSettingsProvider");
        }
        inline app::LocalFileSettingsProvider* create() {
            return il2cpp::create_object<app::LocalFileSettingsProvider>(get_class());
        }
    } // namespace LocalFileSettingsProvider
} // namespace app::classes::types
