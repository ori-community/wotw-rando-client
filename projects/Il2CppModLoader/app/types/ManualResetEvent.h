#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ManualResetEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ManualResetEvent__Class** type_info;
        inline app::ManualResetEvent__Class* get_class() {
            return il2cpp::get_class<app::ManualResetEvent__Class>(type_info, "System.Threading", "ManualResetEvent");
        }
        inline app::ManualResetEvent* create() {
            return il2cpp::create_object<app::ManualResetEvent>(get_class());
        }
    } // namespace ManualResetEvent
} // namespace app::classes::types
