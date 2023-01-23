#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocalFileSettingsProvider__Class.h>
#include <Modloader/app/structs/LocalFileSettingsProvider.h>

namespace app::classes::types {
    namespace LocalFileSettingsProvider {
        namespace {
            inline app::LocalFileSettingsProvider__Class* type_info_ref = nullptr;
        }
        inline app::LocalFileSettingsProvider__Class** type_info = &type_info_ref;
        inline app::LocalFileSettingsProvider__Class* get_class() {
            return il2cpp::get_class<app::LocalFileSettingsProvider__Class>(type_info, "System.Configuration", "LocalFileSettingsProvider");
        }
        inline app::LocalFileSettingsProvider* create() {
            return il2cpp::create_object<app::LocalFileSettingsProvider>(get_class());
        }
    } // namespace LocalFileSettingsProvider
} // namespace app::classes::types
