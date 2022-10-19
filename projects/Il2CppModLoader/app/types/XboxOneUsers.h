#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxOneUsers {
        inline app::XboxOneUsers__Class** type_info = (app::XboxOneUsers__Class**)(modloader::win::memory::resolve_rva(0x04706C10));
        inline app::XboxOneUsers__Class* get_class() {
            return il2cpp::get_class<app::XboxOneUsers__Class>(type_info, "", "XboxOneUsers");
        }
        inline app::XboxOneUsers* create() {
            return il2cpp::create_object<app::XboxOneUsers>(get_class());
        }
    } // namespace XboxOneUsers
} // namespace app::classes::types
