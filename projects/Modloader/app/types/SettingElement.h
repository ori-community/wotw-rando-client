#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SettingElement {
        namespace {
            inline app::SettingElement__Class* type_info_ref = nullptr;
        }
        inline app::SettingElement__Class** type_info = &type_info_ref;
        inline app::SettingElement__Class* get_class() {
            return il2cpp::get_class<app::SettingElement__Class>(type_info, "System.Configuration", "SettingElement");
        }
        inline app::SettingElement* create() {
            return il2cpp::create_object<app::SettingElement>(get_class());
        }
    } // namespace SettingElement
} // namespace app::classes::types
