#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LockRecursionException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LockRecursionException__Class** type_info;
        inline app::LockRecursionException__Class* get_class() {
            return il2cpp::get_class<app::LockRecursionException__Class>(type_info, "System.Threading", "LockRecursionException");
        }
        inline app::LockRecursionException* create() {
            return il2cpp::create_object<app::LockRecursionException>(get_class());
        }
    } // namespace LockRecursionException
} // namespace app::classes::types
