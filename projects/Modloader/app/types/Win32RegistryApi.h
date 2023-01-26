#pragma once
#include <Modloader/app/structs/Win32RegistryApi.h>
#include <Modloader/app/structs/Win32RegistryApi__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Win32RegistryApi {
        inline app::Win32RegistryApi__Class** type_info() {
            static app::Win32RegistryApi__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Win32RegistryApi__Class**)(modloader::win::memory::resolve_rva(0x04784918));
            }
            return cache;
        }
        inline app::Win32RegistryApi__Class* get_class() {
            return il2cpp::get_class<app::Win32RegistryApi__Class>(type_info(), "Microsoft.Win32", "Win32RegistryApi");
        }
        inline app::Win32RegistryApi* create() {
            return il2cpp::create_object<app::Win32RegistryApi>(get_class());
        }
    } // namespace Win32RegistryApi
} // namespace app::classes::types
