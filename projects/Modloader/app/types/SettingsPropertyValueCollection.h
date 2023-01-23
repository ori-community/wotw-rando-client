#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SettingsPropertyValueCollection__Class.h>
#include <Modloader/app/structs/SettingsPropertyValueCollection.h>

namespace app::classes::types {
    namespace SettingsPropertyValueCollection {
        namespace {
            inline app::SettingsPropertyValueCollection__Class* type_info_ref = nullptr;
        }
        inline app::SettingsPropertyValueCollection__Class** type_info = &type_info_ref;
        inline app::SettingsPropertyValueCollection__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyValueCollection__Class>(type_info, "System.Configuration", "SettingsPropertyValueCollection");
        }
        inline app::SettingsPropertyValueCollection* create() {
            return il2cpp::create_object<app::SettingsPropertyValueCollection>(get_class());
        }
    } // namespace SettingsPropertyValueCollection
} // namespace app::classes::types
