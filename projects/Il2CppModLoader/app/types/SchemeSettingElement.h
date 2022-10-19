#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SchemeSettingElement {
        namespace {
            inline app::SchemeSettingElement__Class* type_info_ref = nullptr;
        }
        inline app::SchemeSettingElement__Class** type_info = &type_info_ref;
        inline app::SchemeSettingElement__Class* get_class() {
            return il2cpp::get_class<app::SchemeSettingElement__Class>(type_info, "System.Configuration", "SchemeSettingElement");
        }
        inline app::SchemeSettingElement* create() {
            return il2cpp::create_object<app::SchemeSettingElement>(get_class());
        }
    } // namespace SchemeSettingElement
} // namespace app::classes::types
