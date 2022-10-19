#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemberTypes__Enum {
        inline app::MemberTypes__Enum__Class** type_info = (app::MemberTypes__Enum__Class**)(modloader::win::memory::resolve_rva(0x047328F8));
        inline app::MemberTypes__Enum__Class* get_class() {
            return il2cpp::get_class<app::MemberTypes__Enum__Class>(type_info, "System.Reflection", "MemberTypes");
        }
        inline app::MemberTypes__Enum* create() {
            return il2cpp::create_object<app::MemberTypes__Enum>(get_class());
        }
    } // namespace MemberTypes__Enum
} // namespace app::classes::types
