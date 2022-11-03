#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnumMemberAttribute {
        namespace {
            inline app::EnumMemberAttribute__Class* type_info_ref = nullptr;
        }
        inline app::EnumMemberAttribute__Class** type_info = &type_info_ref;
        inline app::EnumMemberAttribute__Class* get_class() {
            return il2cpp::get_class<app::EnumMemberAttribute__Class>(type_info, "System.Runtime.Serialization", "EnumMemberAttribute");
        }
        inline app::EnumMemberAttribute* create() {
            return il2cpp::create_object<app::EnumMemberAttribute>(get_class());
        }
    } // namespace EnumMemberAttribute
} // namespace app::classes::types
