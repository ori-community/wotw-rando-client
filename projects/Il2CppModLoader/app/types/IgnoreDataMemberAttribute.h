#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IgnoreDataMemberAttribute {
        namespace {
            inline app::IgnoreDataMemberAttribute__Class* type_info_ref = nullptr;
        }
        inline app::IgnoreDataMemberAttribute__Class** type_info = &type_info_ref;
        inline app::IgnoreDataMemberAttribute__Class* get_class() {
            return il2cpp::get_class<app::IgnoreDataMemberAttribute__Class>(type_info, "System.Runtime.Serialization", "IgnoreDataMemberAttribute");
        }
        inline app::IgnoreDataMemberAttribute* create() {
            return il2cpp::create_object<app::IgnoreDataMemberAttribute>(get_class());
        }
    } // namespace IgnoreDataMemberAttribute
} // namespace app::classes::types
