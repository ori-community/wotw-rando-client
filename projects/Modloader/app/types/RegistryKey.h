#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegistryKey {
        inline app::RegistryKey__Class** type_info = (app::RegistryKey__Class**)(modloader::win::memory::resolve_rva(0x047816D0));
        inline app::RegistryKey__Class* get_class() {
            return il2cpp::get_class<app::RegistryKey__Class>(type_info, "Microsoft.Win32", "RegistryKey");
        }
        inline app::RegistryKey* create() {
            return il2cpp::create_object<app::RegistryKey>(get_class());
        }
    } // namespace RegistryKey
} // namespace app::classes::types
