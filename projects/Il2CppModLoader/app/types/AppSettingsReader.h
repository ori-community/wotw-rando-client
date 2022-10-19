#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AppSettingsReader {
        namespace {
            inline app::AppSettingsReader__Class* type_info_ref = nullptr;
        }
        inline app::AppSettingsReader__Class** type_info = &type_info_ref;
        inline app::AppSettingsReader__Class* get_class() {
            return il2cpp::get_class<app::AppSettingsReader__Class>(type_info, "System.Configuration", "AppSettingsReader");
        }
        inline app::AppSettingsReader* create() {
            return il2cpp::create_object<app::AppSettingsReader>(get_class());
        }
    } // namespace AppSettingsReader
} // namespace app::classes::types
