#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SystemClock {
        inline app::SystemClock__Class** type_info = (app::SystemClock__Class**)(modloader::win::memory::resolve_rva(0x0473AB50));
        inline app::SystemClock__Class* get_class() {
            return il2cpp::get_class<app::SystemClock__Class>(type_info, "UnityEngine", "SystemClock");
        }
        inline app::SystemClock* create() {
            return il2cpp::create_object<app::SystemClock>(get_class());
        }
    } // namespace SystemClock
} // namespace app::classes::types
