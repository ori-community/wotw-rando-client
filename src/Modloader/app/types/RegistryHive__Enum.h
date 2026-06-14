#pragma once
#include <Modloader/app/structs/RegistryHive__Enum.h>
#include <Modloader/app/structs/RegistryHive__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegistryHive__Enum {
        inline app::RegistryHive__Enum__Class** type_info() {
            static app::RegistryHive__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegistryHive__Enum__Class**)(modloader::win::memory::resolve_rva(0x04763230));
            }
            return cache;
        }
        inline app::RegistryHive__Enum__Class* get_class() {
            return il2cpp::get_class<app::RegistryHive__Enum__Class>(type_info(), "Microsoft.Win32", "RegistryHive");
        }
        inline app::RegistryHive__Enum* create() {
            return il2cpp::create_object<app::RegistryHive__Enum>(get_class());
        }
    } // namespace RegistryHive__Enum
} // namespace app::classes::types
