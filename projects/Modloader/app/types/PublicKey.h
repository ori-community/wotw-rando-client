#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PublicKey {
        inline app::PublicKey__Class** type_info = (app::PublicKey__Class**)(modloader::win::memory::resolve_rva(0x047401E8));
        inline app::PublicKey__Class* get_class() {
            return il2cpp::get_class<app::PublicKey__Class>(type_info, "System.Security.Cryptography.X509Certificates", "PublicKey");
        }
        inline app::PublicKey* create() {
            return il2cpp::create_object<app::PublicKey>(get_class());
        }
    } // namespace PublicKey
} // namespace app::classes::types
