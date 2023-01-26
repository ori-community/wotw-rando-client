#pragma once
#include <Modloader/app/structs/RuntimeType_MemberListType__Enum.h>
#include <Modloader/app/structs/RuntimeType_MemberListType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeType_MemberListType__Enum {
        inline app::RuntimeType_MemberListType__Enum__Class** type_info() {
            static app::RuntimeType_MemberListType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RuntimeType_MemberListType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RuntimeType_MemberListType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeType_MemberListType__Enum__Class>(type_info(), "System", "RuntimeType", "MemberListType");
        }
        inline app::RuntimeType_MemberListType__Enum* create() {
            return il2cpp::create_object<app::RuntimeType_MemberListType__Enum>(get_class());
        }
    } // namespace RuntimeType_MemberListType__Enum
} // namespace app::classes::types
