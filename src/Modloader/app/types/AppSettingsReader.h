#pragma once
#include <Modloader/app/structs/AppSettingsReader.h>
#include <Modloader/app/structs/AppSettingsReader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AppSettingsReader {
        inline app::AppSettingsReader__Class** type_info() {
            static app::AppSettingsReader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AppSettingsReader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AppSettingsReader__Class* get_class() {
            return il2cpp::get_class<app::AppSettingsReader__Class>(type_info(), "System.Configuration", "AppSettingsReader");
        }
        inline app::AppSettingsReader* create() {
            return il2cpp::create_object<app::AppSettingsReader>(get_class());
        }
    } // namespace AppSettingsReader
} // namespace app::classes::types
