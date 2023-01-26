#pragma once
#include <Modloader/app/structs/LocalFileSettingsProvider.h>
#include <Modloader/app/structs/LocalFileSettingsProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocalFileSettingsProvider {
        inline app::LocalFileSettingsProvider__Class** type_info() {
            static app::LocalFileSettingsProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LocalFileSettingsProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LocalFileSettingsProvider__Class* get_class() {
            return il2cpp::get_class<app::LocalFileSettingsProvider__Class>(type_info(), "System.Configuration", "LocalFileSettingsProvider");
        }
        inline app::LocalFileSettingsProvider* create() {
            return il2cpp::create_object<app::LocalFileSettingsProvider>(get_class());
        }
    } // namespace LocalFileSettingsProvider
} // namespace app::classes::types
