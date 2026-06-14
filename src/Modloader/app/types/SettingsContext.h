#pragma once
#include <Modloader/app/structs/SettingsContext.h>
#include <Modloader/app/structs/SettingsContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SettingsContext {
        inline app::SettingsContext__Class** type_info() {
            static app::SettingsContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SettingsContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SettingsContext__Class* get_class() {
            return il2cpp::get_class<app::SettingsContext__Class>(type_info(), "System.Configuration", "SettingsContext");
        }
        inline app::SettingsContext* create() {
            return il2cpp::create_object<app::SettingsContext>(get_class());
        }
    } // namespace SettingsContext
} // namespace app::classes::types
