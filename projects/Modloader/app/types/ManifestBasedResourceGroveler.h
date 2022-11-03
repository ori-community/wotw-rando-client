#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ManifestBasedResourceGroveler {
        inline app::ManifestBasedResourceGroveler__Class** type_info = (app::ManifestBasedResourceGroveler__Class**)(modloader::win::memory::resolve_rva(0x0470A400));
        inline app::ManifestBasedResourceGroveler__Class* get_class() {
            return il2cpp::get_class<app::ManifestBasedResourceGroveler__Class>(type_info, "System.Resources", "ManifestBasedResourceGroveler");
        }
        inline app::ManifestBasedResourceGroveler* create() {
            return il2cpp::create_object<app::ManifestBasedResourceGroveler>(get_class());
        }
    } // namespace ManifestBasedResourceGroveler
} // namespace app::classes::types
