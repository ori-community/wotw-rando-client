#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PasswordPropertyTextAttribute {
        inline app::PasswordPropertyTextAttribute__Class** type_info = (app::PasswordPropertyTextAttribute__Class**)(modloader::win::memory::resolve_rva(0x04716CA0));
        inline app::PasswordPropertyTextAttribute__Class* get_class() {
            return il2cpp::get_class<app::PasswordPropertyTextAttribute__Class>(type_info, "System.ComponentModel", "PasswordPropertyTextAttribute");
        }
        inline app::PasswordPropertyTextAttribute* create() {
            return il2cpp::create_object<app::PasswordPropertyTextAttribute>(get_class());
        }
    } // namespace PasswordPropertyTextAttribute
} // namespace app::classes::types
