#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GetMemberBinder {
        inline app::GetMemberBinder__Class** type_info = (app::GetMemberBinder__Class**)(modloader::win::memory::resolve_rva(0x047356A8));
        inline app::GetMemberBinder__Class* get_class() {
            return il2cpp::get_class<app::GetMemberBinder__Class>(type_info, "System.Dynamic", "GetMemberBinder");
        }
        inline app::GetMemberBinder* create() {
            return il2cpp::create_object<app::GetMemberBinder>(get_class());
        }
    } // namespace GetMemberBinder
} // namespace app::classes::types
