#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafeHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SafeHandle__Class** type_info;
        inline app::SafeHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeHandle__Class>(type_info, "System.Runtime.InteropServices", "SafeHandle");
        }
        inline app::SafeHandle* create() {
            return il2cpp::create_object<app::SafeHandle>(get_class());
        }
    } // namespace SafeHandle
} // namespace app::classes::types
