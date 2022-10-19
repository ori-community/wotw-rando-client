#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Win32RegistryApi {
        inline app::Win32RegistryApi__Class** type_info = (app::Win32RegistryApi__Class**)(modloader::win::memory::resolve_rva(0x04784918));
        inline app::Win32RegistryApi__Class* get_class() {
            return il2cpp::get_class<app::Win32RegistryApi__Class>(type_info, "Microsoft.Win32", "Win32RegistryApi");
        }
        inline app::Win32RegistryApi* create() {
            return il2cpp::create_object<app::Win32RegistryApi>(get_class());
        }
    } // namespace Win32RegistryApi
} // namespace app::classes::types
