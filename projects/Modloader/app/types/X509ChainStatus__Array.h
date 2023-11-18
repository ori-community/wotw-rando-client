#pragma once
#include <Modloader/app/structs/X509ChainStatus__Array.h>
#include <Modloader/app/structs/X509ChainStatus__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509ChainStatus__Array {
        inline app::X509ChainStatus__Array__Class** type_info() {
            static app::X509ChainStatus__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::X509ChainStatus__Array__Class**)(modloader::win::memory::resolve_rva(0x0474A4C0));
            }
            return cache;
        }
        inline app::X509ChainStatus__Array__Class* get_class() {
            return il2cpp::get_class<app::X509ChainStatus__Array__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509ChainStatus[]");
        }
        inline app::X509ChainStatus__Array* create() {
            return il2cpp::create_object<app::X509ChainStatus__Array>(get_class());
        }
    } // namespace X509ChainStatus__Array
} // namespace app::classes::types
