#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemberHolder {
        inline app::MemberHolder__Class** type_info = (app::MemberHolder__Class**)(modloader::win::memory::resolve_rva(0x04782D60));
        inline app::MemberHolder__Class* get_class() {
            return il2cpp::get_class<app::MemberHolder__Class>(type_info, "System.Runtime.Serialization", "MemberHolder");
        }
        inline app::MemberHolder* create() {
            return il2cpp::create_object<app::MemberHolder>(get_class());
        }
    } // namespace MemberHolder
} // namespace app::classes::types
