#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AppSettingsReader__Class.h>
#include <Modloader/app/structs/AppSettingsReader.h>

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
