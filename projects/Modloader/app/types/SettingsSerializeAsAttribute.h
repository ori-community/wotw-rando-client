#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingsSerializeAsAttribute {
        namespace {
            inline app::SettingsSerializeAsAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SettingsSerializeAsAttribute__Class** type_info = &type_info_ref;
        inline app::SettingsSerializeAsAttribute__Class* get_class() {
            return il2cpp::get_class<app::SettingsSerializeAsAttribute__Class>(type_info, "System.Configuration", "SettingsSerializeAsAttribute");
        }
        inline app::SettingsSerializeAsAttribute* create() {
            return il2cpp::create_object<app::SettingsSerializeAsAttribute>(get_class());
        }
    } // namespace SettingsSerializeAsAttribute
} // namespace app::classes::types
