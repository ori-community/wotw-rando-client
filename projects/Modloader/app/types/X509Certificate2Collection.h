#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509Certificate2Collection {
        inline app::X509Certificate2Collection__Class** type_info = (app::X509Certificate2Collection__Class**)(modloader::win::memory::resolve_rva(0x04755468));
        inline app::X509Certificate2Collection__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate2Collection__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Certificate2Collection");
        }
        inline app::X509Certificate2Collection* create() {
            return il2cpp::create_object<app::X509Certificate2Collection>(get_class());
        }
    } // namespace X509Certificate2Collection
} // namespace app::classes::types
