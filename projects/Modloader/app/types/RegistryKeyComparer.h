#pragma once
#include <Modloader/app/structs/RegistryKeyComparer.h>
#include <Modloader/app/structs/RegistryKeyComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RegistryKeyComparer {
        inline app::RegistryKeyComparer__Class** type_info() {
            static app::RegistryKeyComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RegistryKeyComparer__Class**)(modloader::win::memory::resolve_rva(0x0470FDD0));
            }
            return cache;
        }
        inline app::RegistryKeyComparer__Class* get_class() {
            return il2cpp::get_class<app::RegistryKeyComparer__Class>(type_info(), "Microsoft.Win32", "RegistryKeyComparer");
        }
        inline app::RegistryKeyComparer* create() {
            return il2cpp::create_object<app::RegistryKeyComparer>(get_class());
        }
    } // namespace RegistryKeyComparer
} // namespace app::classes::types
