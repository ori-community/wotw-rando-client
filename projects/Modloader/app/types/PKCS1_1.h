#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PKCS1_1 {
        inline app::PKCS1_1__Class** type_info = (app::PKCS1_1__Class**)(modloader::win::memory::resolve_rva(0x0473E048));
        inline app::PKCS1_1__Class* get_class() {
            return il2cpp::get_class<app::PKCS1_1__Class>(type_info, "Mono.Security.Cryptography", "PKCS1");
        }
        inline app::PKCS1_1* create() {
            return il2cpp::create_object<app::PKCS1_1>(get_class());
        }
    } // namespace PKCS1_1
} // namespace app::classes::types
