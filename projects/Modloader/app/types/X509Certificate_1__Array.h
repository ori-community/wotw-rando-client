#pragma once
#include <Modloader/app/structs/X509Certificate_1__Array.h>
#include <Modloader/app/structs/X509Certificate_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509Certificate_1__Array {
        inline app::X509Certificate_1__Array__Class** type_info() {
            static app::X509Certificate_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509Certificate_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04733610));
            }
            return cache;
        }
        inline app::X509Certificate_1__Array__Class* get_class() {
            return il2cpp::get_class<app::X509Certificate_1__Array__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509Certificate[]");
        }
        inline app::X509Certificate_1__Array* create() {
            return il2cpp::create_object<app::X509Certificate_1__Array>(get_class());
        }
    } // namespace X509Certificate_1__Array
} // namespace app::classes::types
