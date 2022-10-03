#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LockQueue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LockQueue__Class** type_info;
        inline app::LockQueue__Class* get_class() {
            return il2cpp::get_class<app::LockQueue__Class>(type_info, "System.Threading", "LockQueue");
        }
        inline app::LockQueue* create() {
            return il2cpp::create_object<app::LockQueue>(get_class());
        }
    } // namespace LockQueue
} // namespace app::classes::types
