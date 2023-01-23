#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SettingChangingEventArgs__Class.h>
#include <Modloader/app/structs/SettingChangingEventArgs.h>

namespace app::classes::types {
    namespace SettingChangingEventArgs {
        namespace {
            inline app::SettingChangingEventArgs__Class* type_info_ref = nullptr;
        }
        inline app::SettingChangingEventArgs__Class** type_info = &type_info_ref;
        inline app::SettingChangingEventArgs__Class* get_class() {
            return il2cpp::get_class<app::SettingChangingEventArgs__Class>(type_info, "System.Configuration", "SettingChangingEventArgs");
        }
        inline app::SettingChangingEventArgs* create() {
            return il2cpp::create_object<app::SettingChangingEventArgs>(get_class());
        }
    } // namespace SettingChangingEventArgs
} // namespace app::classes::types
