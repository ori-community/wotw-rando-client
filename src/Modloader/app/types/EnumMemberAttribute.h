#pragma once
#include <Modloader/app/structs/EnumMemberAttribute.h>
#include <Modloader/app/structs/EnumMemberAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnumMemberAttribute {
        inline app::EnumMemberAttribute__Class** type_info() {
            static app::EnumMemberAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnumMemberAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnumMemberAttribute__Class* get_class() {
            return il2cpp::get_class<app::EnumMemberAttribute__Class>(type_info(), "System.Runtime.Serialization", "EnumMemberAttribute");
        }
        inline app::EnumMemberAttribute* create() {
            return il2cpp::create_object<app::EnumMemberAttribute>(get_class());
        }
    } // namespace EnumMemberAttribute
} // namespace app::classes::types
