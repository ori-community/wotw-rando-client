#pragma once
#include <Modloader/app/structs/ManifestBasedResourceGroveler.h>
#include <Modloader/app/structs/ManifestBasedResourceGroveler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ManifestBasedResourceGroveler {
        inline app::ManifestBasedResourceGroveler__Class** type_info() {
            static app::ManifestBasedResourceGroveler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ManifestBasedResourceGroveler__Class**)(modloader::win::memory::resolve_rva(0x0470A400));
            }
            return cache;
        }
        inline app::ManifestBasedResourceGroveler__Class* get_class() {
            return il2cpp::get_class<app::ManifestBasedResourceGroveler__Class>(type_info(), "System.Resources", "ManifestBasedResourceGroveler");
        }
        inline app::ManifestBasedResourceGroveler* create() {
            return il2cpp::create_object<app::ManifestBasedResourceGroveler>(get_class());
        }
    } // namespace ManifestBasedResourceGroveler
} // namespace app::classes::types
