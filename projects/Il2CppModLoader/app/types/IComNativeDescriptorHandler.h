#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IComNativeDescriptorHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IComNativeDescriptorHandler__Class** type_info;
        inline app::IComNativeDescriptorHandler__Class* get_class() {
            return il2cpp::get_class<app::IComNativeDescriptorHandler__Class>(type_info, "System.ComponentModel", "IComNativeDescriptorHandler");
        }
    } // namespace IComNativeDescriptorHandler
} // namespace app::classes::types
