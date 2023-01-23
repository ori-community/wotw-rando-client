#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RegistryKeyComparer__Class.h>
#include <Modloader/app/structs/RegistryKeyComparer.h>

namespace app::classes::types {
    namespace RegistryKeyComparer {
        inline app::RegistryKeyComparer__Class** type_info = (app::RegistryKeyComparer__Class**)(modloader::win::memory::resolve_rva(0x0470FDD0));
        inline app::RegistryKeyComparer__Class* get_class() {
            return il2cpp::get_class<app::RegistryKeyComparer__Class>(type_info, "Microsoft.Win32", "RegistryKeyComparer");
        }
        inline app::RegistryKeyComparer* create() {
            return il2cpp::create_object<app::RegistryKeyComparer>(get_class());
        }
    } // namespace RegistryKeyComparer
} // namespace app::classes::types
