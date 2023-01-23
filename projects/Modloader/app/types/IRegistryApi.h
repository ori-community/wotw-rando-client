#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IRegistryApi__Class.h>

namespace app::classes::types {
    namespace IRegistryApi {
        inline app::IRegistryApi__Class** type_info = (app::IRegistryApi__Class**)(modloader::win::memory::resolve_rva(0x0472FC00));
        inline app::IRegistryApi__Class* get_class() {
            return il2cpp::get_class<app::IRegistryApi__Class>(type_info, "Microsoft.Win32", "IRegistryApi");
        }
    } // namespace IRegistryApi
} // namespace app::classes::types
