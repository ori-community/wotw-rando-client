#pragma once
#include <Modloader/app/structs/X509ExtensionCollection.h>
#include <Modloader/app/structs/X509ExtensionCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509ExtensionCollection {
        inline app::X509ExtensionCollection__Class** type_info() {
            static app::X509ExtensionCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509ExtensionCollection__Class**)(modloader::win::memory::resolve_rva(0x0470ADB0));
            }
            return cache;
        }
        inline app::X509ExtensionCollection__Class* get_class() {
            return il2cpp::get_class<app::X509ExtensionCollection__Class>(type_info(), "Mono.Security.X509", "X509ExtensionCollection");
        }
        inline app::X509ExtensionCollection* create() {
            return il2cpp::create_object<app::X509ExtensionCollection>(get_class());
        }
    } // namespace X509ExtensionCollection
} // namespace app::classes::types
