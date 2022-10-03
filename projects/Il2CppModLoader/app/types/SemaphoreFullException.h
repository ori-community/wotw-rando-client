#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SemaphoreFullException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SemaphoreFullException__Class** type_info;
        inline app::SemaphoreFullException__Class* get_class() {
            return il2cpp::get_class<app::SemaphoreFullException__Class>(type_info, "System.Threading", "SemaphoreFullException");
        }
        inline app::SemaphoreFullException* create() {
            return il2cpp::create_object<app::SemaphoreFullException>(get_class());
        }
    } // namespace SemaphoreFullException
} // namespace app::classes::types
