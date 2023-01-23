#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnumDisabledAttribute__Class.h>
#include <Modloader/app/structs/EnumDisabledAttribute.h>

namespace app::classes::types {
    namespace EnumDisabledAttribute {
        namespace {
            inline app::EnumDisabledAttribute__Class* type_info_ref = nullptr;
        }
        inline app::EnumDisabledAttribute__Class** type_info = &type_info_ref;
        inline app::EnumDisabledAttribute__Class* get_class() {
            return il2cpp::get_class<app::EnumDisabledAttribute__Class>(type_info, "", "EnumDisabledAttribute");
        }
        inline app::EnumDisabledAttribute* create() {
            return il2cpp::create_object<app::EnumDisabledAttribute>(get_class());
        }
    } // namespace EnumDisabledAttribute
} // namespace app::classes::types
