#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509ExtensionCollection {
        inline app::X509ExtensionCollection__Class** type_info = (app::X509ExtensionCollection__Class**)(modloader::win::memory::resolve_rva(0x0470ADB0));
        inline app::X509ExtensionCollection__Class* get_class() {
            return il2cpp::get_class<app::X509ExtensionCollection__Class>(type_info, "Mono.Security.X509", "X509ExtensionCollection");
        }
        inline app::X509ExtensionCollection* create() {
            return il2cpp::create_object<app::X509ExtensionCollection>(get_class());
        }
    } // namespace X509ExtensionCollection
} // namespace app::classes::types
