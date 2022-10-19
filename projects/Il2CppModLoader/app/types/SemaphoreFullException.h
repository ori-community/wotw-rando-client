#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SemaphoreFullException {
        inline app::SemaphoreFullException__Class** type_info = (app::SemaphoreFullException__Class**)(modloader::win::memory::resolve_rva(0x04794A88));
        inline app::SemaphoreFullException__Class* get_class() {
            return il2cpp::get_class<app::SemaphoreFullException__Class>(type_info, "System.Threading", "SemaphoreFullException");
        }
        inline app::SemaphoreFullException* create() {
            return il2cpp::create_object<app::SemaphoreFullException>(get_class());
        }
    } // namespace SemaphoreFullException
} // namespace app::classes::types
