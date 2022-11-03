#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpecialSettingAttribute {
        namespace {
            inline app::SpecialSettingAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SpecialSettingAttribute__Class** type_info = &type_info_ref;
        inline app::SpecialSettingAttribute__Class* get_class() {
            return il2cpp::get_class<app::SpecialSettingAttribute__Class>(type_info, "System.Configuration", "SpecialSettingAttribute");
        }
        inline app::SpecialSettingAttribute* create() {
            return il2cpp::create_object<app::SpecialSettingAttribute>(get_class());
        }
    } // namespace SpecialSettingAttribute
} // namespace app::classes::types
