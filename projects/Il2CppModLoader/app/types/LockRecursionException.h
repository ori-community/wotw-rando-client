#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LockRecursionException {
        inline app::LockRecursionException__Class** type_info = (app::LockRecursionException__Class**)(modloader::win::memory::resolve_rva(0x047947B0));
        inline app::LockRecursionException__Class* get_class() {
            return il2cpp::get_class<app::LockRecursionException__Class>(type_info, "System.Threading", "LockRecursionException");
        }
        inline app::LockRecursionException* create() {
            return il2cpp::create_object<app::LockRecursionException>(get_class());
        }
    } // namespace LockRecursionException
} // namespace app::classes::types
