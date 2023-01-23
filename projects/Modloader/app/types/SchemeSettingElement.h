#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SchemeSettingElement__Class.h>
#include <Modloader/app/structs/SchemeSettingElement.h>

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
