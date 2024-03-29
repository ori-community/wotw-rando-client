#pragma once
#include <Modloader/app/structs/ClientSettingsSection.h>
#include <Modloader/app/structs/ClientSettingsSection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientSettingsSection {
        inline app::ClientSettingsSection__Class** type_info() {
            static app::ClientSettingsSection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClientSettingsSection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClientSettingsSection__Class* get_class() {
            return il2cpp::get_class<app::ClientSettingsSection__Class>(type_info(), "System.Configuration", "ClientSettingsSection");
        }
        inline app::ClientSettingsSection* create() {
            return il2cpp::create_object<app::ClientSettingsSection>(get_class());
        }
    } // namespace ClientSettingsSection
} // namespace app::classes::types
