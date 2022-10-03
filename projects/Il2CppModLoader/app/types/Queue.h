#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Queue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Queue__Class** type_info;
        inline app::Queue__Class* get_class() {
            return il2cpp::get_class<app::Queue__Class>(type_info, "System.Collections", "Queue");
        }
        inline app::Queue* create() {
            return il2cpp::create_object<app::Queue>(get_class());
        }
    } // namespace Queue
} // namespace app::classes::types
