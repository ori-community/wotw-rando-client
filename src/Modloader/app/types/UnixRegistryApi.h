#pragma once
#include <Modloader/app/structs/UnixRegistryApi.h>
#include <Modloader/app/structs/UnixRegistryApi__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnixRegistryApi {
        inline app::UnixRegistryApi__Class** type_info() {
            static app::UnixRegistryApi__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnixRegistryApi__Class**)(modloader::win::memory::resolve_rva(0x04703BD0));
            }
            return cache;
        }
        inline app::UnixRegistryApi__Class* get_class() {
            return il2cpp::get_class<app::UnixRegistryApi__Class>(type_info(), "Microsoft.Win32", "UnixRegistryApi");
        }
        inline app::UnixRegistryApi* create() {
            return il2cpp::create_object<app::UnixRegistryApi>(get_class());
        }
    } // namespace UnixRegistryApi
} // namespace app::classes::types
