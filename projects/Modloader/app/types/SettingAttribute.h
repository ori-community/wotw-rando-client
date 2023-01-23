#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SettingAttribute__Class.h>
#include <Modloader/app/structs/SettingAttribute.h>

namespace app::classes::types {
    namespace SettingAttribute {
        namespace {
            inline app::SettingAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SettingAttribute__Class** type_info = &type_info_ref;
        inline app::SettingAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingAttribute__Class>(type_info, "System.Configuration", "SettingAttribute");
        }
        inline app::SettingAttribute* create() {
            return il2cpp::create_object<app::SettingAttribute>(get_class());
        }
    } // namespace SettingAttribute
} // namespace app::classes::types
