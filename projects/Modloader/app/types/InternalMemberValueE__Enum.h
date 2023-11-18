#pragma once
#include <Modloader/app/structs/InternalMemberValueE__Enum.h>
#include <Modloader/app/structs/InternalMemberValueE__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalMemberValueE__Enum {
        inline app::InternalMemberValueE__Enum__Class** type_info() {
            static app::InternalMemberValueE__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InternalMemberValueE__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InternalMemberValueE__Enum__Class* get_class() {
            return il2cpp::get_class<app::InternalMemberValueE__Enum__Class>(type_info(), "System.Runtime.Serialization.Formatters.Binary", "InternalMemberValueE");
        }
        inline app::InternalMemberValueE__Enum* create() {
            return il2cpp::create_object<app::InternalMemberValueE__Enum>(get_class());
        }
    } // namespace InternalMemberValueE__Enum
} // namespace app::classes::types
