#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SemaphoreSlim {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SemaphoreSlim__Class** type_info;
        inline app::SemaphoreSlim__Class* get_class() {
            return il2cpp::get_class<app::SemaphoreSlim__Class>(type_info, "System.Threading", "SemaphoreSlim");
        }
        inline app::SemaphoreSlim* create() {
            return il2cpp::create_object<app::SemaphoreSlim>(get_class());
        }
    } // namespace SemaphoreSlim
} // namespace app::classes::types
