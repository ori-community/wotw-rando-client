#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SettingsPropertyCollection__Class.h>
#include <Modloader/app/structs/SettingsPropertyCollection.h>

namespace app::classes::types {
    namespace SettingsPropertyCollection {
        namespace {
            inline app::SettingsPropertyCollection__Class* type_info_ref = nullptr;
        }
        inline app::SettingsPropertyCollection__Class** type_info = &type_info_ref;
        inline app::SettingsPropertyCollection__Class* get_class() {
            return il2cpp::get_class<app::SettingsPropertyCollection__Class>(type_info, "System.Configuration", "SettingsPropertyCollection");
        }
        inline app::SettingsPropertyCollection* create() {
            return il2cpp::create_object<app::SettingsPropertyCollection>(get_class());
        }
    } // namespace SettingsPropertyCollection
} // namespace app::classes::types
