#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ParenthesizePropertyNameAttribute {
        inline app::ParenthesizePropertyNameAttribute__Class** type_info = (app::ParenthesizePropertyNameAttribute__Class**)(modloader::win::memory::resolve_rva(0x04728D18));
        inline app::ParenthesizePropertyNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::ParenthesizePropertyNameAttribute__Class>(type_info, "System.ComponentModel", "ParenthesizePropertyNameAttribute");
        }
        inline app::ParenthesizePropertyNameAttribute* create() {
            return il2cpp::create_object<app::ParenthesizePropertyNameAttribute>(get_class());
        }
    } // namespace ParenthesizePropertyNameAttribute
} // namespace app::classes::types
