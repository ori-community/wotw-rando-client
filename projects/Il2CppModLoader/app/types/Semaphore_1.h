#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Semaphore_1 {
        inline app::Semaphore_1__Class** type_info = (app::Semaphore_1__Class**)(modloader::win::memory::resolve_rva(0x04747898));
        inline app::Semaphore_1__Class* get_class() {
            return il2cpp::get_class<app::Semaphore_1__Class>(type_info, "System.Net", "Semaphore");
        }
        inline app::Semaphore_1* create() {
            return il2cpp::create_object<app::Semaphore_1>(get_class());
        }
    } // namespace Semaphore_1
} // namespace app::classes::types
