#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X509Certificate_1__Array {
        inline app::X509Certificate_1__Array__Class** type_info = (app::X509Certificate_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04733610));
        inline app::X509Certificate_1__Array__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate_1__Array__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Certificate[]");
        }
        inline app::X509Certificate_1__Array* create() {
            return il2cpp::create_object<app::X509Certificate_1__Array>(get_class());
        }
    } // namespace X509Certificate_1__Array
} // namespace app::classes::types
