#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemberInfoSerializationHolder {
        namespace {
            inline app::MemberInfoSerializationHolder__Class* type_info_ref = nullptr;
        }
        inline app::MemberInfoSerializationHolder__Class** type_info = &type_info_ref;
        inline app::MemberInfoSerializationHolder__Class* get_class() {
            return il2cpp::get_class<app::MemberInfoSerializationHolder__Class>(type_info, "System.Reflection", "MemberInfoSerializationHolder");
        }
        inline app::MemberInfoSerializationHolder* create() {
            return il2cpp::create_object<app::MemberInfoSerializationHolder>(get_class());
        }
    } // namespace MemberInfoSerializationHolder
} // namespace app::classes::types
