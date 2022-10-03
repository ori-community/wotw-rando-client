#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Semaphore_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Semaphore_1__Class** type_info;
        inline app::Semaphore_1__Class* get_class() {
            return il2cpp::get_class<app::Semaphore_1__Class>(type_info, "System.Net", "Semaphore");
        }
        inline app::Semaphore_1* create() {
            return il2cpp::create_object<app::Semaphore_1>(get_class());
        }
    } // namespace Semaphore_1
} // namespace app::classes::types
