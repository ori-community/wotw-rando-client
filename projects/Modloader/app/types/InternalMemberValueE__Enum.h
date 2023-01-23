#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InternalMemberValueE__Enum__Class.h>
#include <Modloader/app/structs/InternalMemberValueE__Enum.h>

namespace app::classes::types {
    namespace InternalMemberValueE__Enum {
        namespace {
            inline app::InternalMemberValueE__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InternalMemberValueE__Enum__Class** type_info = &type_info_ref;
        inline app::InternalMemberValueE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalMemberValueE__Enum__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "InternalMemberValueE");
        }
        inline app::InternalMemberValueE__Enum* create() {
            return il2cpp::create_object<app::InternalMemberValueE__Enum>(get_class());
        }
    } // namespace InternalMemberValueE__Enum
} // namespace app::classes::types
