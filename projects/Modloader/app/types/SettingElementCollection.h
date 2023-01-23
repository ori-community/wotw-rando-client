#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SettingElementCollection__Class.h>
#include <Modloader/app/structs/SettingElementCollection.h>

namespace app::classes::types {
    namespace SettingElementCollection {
        namespace {
            inline app::SettingElementCollection__Class* type_info_ref = nullptr;
        }
        inline app::SettingElementCollection__Class** type_info = &type_info_ref;
        inline app::SettingElementCollection__Class* get_class() {
            return il2cpp::get_class<app::SettingElementCollection__Class>(type_info, "System.Configuration", "SettingElementCollection");
        }
        inline app::SettingElementCollection* create() {
            return il2cpp::create_object<app::SettingElementCollection>(get_class());
        }
    } // namespace SettingElementCollection
} // namespace app::classes::types
