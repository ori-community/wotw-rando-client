#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509ExtensionCollection_2 {
        inline app::X509ExtensionCollection_2__Class** type_info = (app::X509ExtensionCollection_2__Class**)(modloader::win::memory::resolve_rva(0x04711DC0));
        inline app::X509ExtensionCollection_2__Class* get_class() {
            return il2cpp::get_class<app::X509ExtensionCollection_2__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ExtensionCollection");
        }
        inline app::X509ExtensionCollection_2* create() {
            return il2cpp::create_object<app::X509ExtensionCollection_2>(get_class());
        }
    } // namespace X509ExtensionCollection_2
} // namespace app::classes::types
