#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SafeRegistryHandle {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SafeRegistryHandle__Class** type_info;
        inline app::SafeRegistryHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeRegistryHandle__Class>(type_info, "Microsoft.Win32.SafeHandles", "SafeRegistryHandle");
        }
        inline app::SafeRegistryHandle* create() {
            return il2cpp::create_object<app::SafeRegistryHandle>(get_class());
        }
    } // namespace SafeRegistryHandle
} // namespace app::classes::types
