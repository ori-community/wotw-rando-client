#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DSA {
        inline app::DSA__Class** type_info = (app::DSA__Class**)(modloader::win::memory::resolve_rva(0x04762E10));
        inline app::DSA__Class* get_class() {
            return il2cpp::get_class<app::DSA__Class>(type_info, "System.Security.Cryptography", "DSA");
        }
        inline app::DSA* create() {
            return il2cpp::create_object<app::DSA>(get_class());
        }
    } // namespace DSA
} // namespace app::classes::types
