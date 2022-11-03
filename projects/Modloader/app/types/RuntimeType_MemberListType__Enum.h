#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeType_MemberListType__Enum {
        namespace {
            inline app::RuntimeType_MemberListType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeType_MemberListType__Enum__Class** type_info = &type_info_ref;
        inline app::RuntimeType_MemberListType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeType_MemberListType__Enum__Class>(type_info, "System", "RuntimeType", "MemberListType");
        }
        inline app::RuntimeType_MemberListType__Enum* create() {
            return il2cpp::create_object<app::RuntimeType_MemberListType__Enum>(get_class());
        }
    } // namespace RuntimeType_MemberListType__Enum
} // namespace app::classes::types
