#pragma once
#include <Modloader/app/structs/IRegistryApi.h>
#include <Modloader/app/structs/IRegistryApi__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRegistryApi {
        inline app::IRegistryApi__Class** type_info() {
            static app::IRegistryApi__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRegistryApi__Class**)(modloader::win::memory::resolve_rva(0x0472FC00));
            }
            return cache;
        }
        inline app::IRegistryApi__Class* get_class() {
            return il2cpp::get_class<app::IRegistryApi__Class>(type_info(), "Microsoft.Win32", "IRegistryApi");
        }
    } // namespace IRegistryApi
} // namespace app::classes::types
