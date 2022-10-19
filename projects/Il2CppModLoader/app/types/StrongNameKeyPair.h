#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StrongNameKeyPair {
        inline app::StrongNameKeyPair__Class** type_info = (app::StrongNameKeyPair__Class**)(modloader::win::memory::resolve_rva(0x04760C98));
        inline app::StrongNameKeyPair__Class* get_class() {
            return il2cpp::get_class<app::StrongNameKeyPair__Class>(type_info, "System.Reflection", "StrongNameKeyPair");
        }
        inline app::StrongNameKeyPair* create() {
            return il2cpp::create_object<app::StrongNameKeyPair>(get_class());
        }
    } // namespace StrongNameKeyPair
} // namespace app::classes::types
