#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnixRegistryApi {
        inline app::UnixRegistryApi__Class** type_info = (app::UnixRegistryApi__Class**)(modloader::win::memory::resolve_rva(0x04703BD0));
        inline app::UnixRegistryApi__Class* get_class() {
            return il2cpp::get_class<app::UnixRegistryApi__Class>(type_info, "Microsoft.Win32", "UnixRegistryApi");
        }
        inline app::UnixRegistryApi* create() {
            return il2cpp::create_object<app::UnixRegistryApi>(get_class());
        }
    } // namespace UnixRegistryApi
} // namespace app::classes::types
