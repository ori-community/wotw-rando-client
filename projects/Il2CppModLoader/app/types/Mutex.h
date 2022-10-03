#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Mutex {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Mutex__Class** type_info;
        inline app::Mutex__Class* get_class() {
            return il2cpp::get_class<app::Mutex__Class>(type_info, "System.Threading", "Mutex");
        }
        inline app::Mutex* create() {
            return il2cpp::create_object<app::Mutex>(get_class());
        }
    } // namespace Mutex
} // namespace app::classes::types
