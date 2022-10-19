#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegistryHive__Enum {
        inline app::RegistryHive__Enum__Class** type_info = (app::RegistryHive__Enum__Class**)(modloader::win::memory::resolve_rva(0x04763230));
        inline app::RegistryHive__Enum__Class* get_class() {
            return il2cpp::get_class<app::RegistryHive__Enum__Class>(type_info, "Microsoft.Win32", "RegistryHive");
        }
        inline app::RegistryHive__Enum* create() {
            return il2cpp::create_object<app::RegistryHive__Enum>(get_class());
        }
    } // namespace RegistryHive__Enum
} // namespace app::classes::types
