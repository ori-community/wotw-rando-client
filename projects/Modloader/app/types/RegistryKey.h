#pragma once
#include <Modloader/app/structs/RegistryKey.h>
#include <Modloader/app/structs/RegistryKey__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegistryKey {
        inline app::RegistryKey__Class** type_info() {
            static app::RegistryKey__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegistryKey__Class**)(modloader::win::memory::resolve_rva(0x047816D0));
            }
            return cache;
        }
        inline app::RegistryKey__Class* get_class() {
            return il2cpp::get_class<app::RegistryKey__Class>(type_info(), "Microsoft.Win32", "RegistryKey");
        }
        inline app::RegistryKey* create() {
            return il2cpp::create_object<app::RegistryKey>(get_class());
        }
    } // namespace RegistryKey
} // namespace app::classes::types
