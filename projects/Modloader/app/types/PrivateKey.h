#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PrivateKey {
        inline app::PrivateKey__Class** type_info = (app::PrivateKey__Class**)(modloader::win::memory::resolve_rva(0x0470EC50));
        inline app::PrivateKey__Class* get_class() {
            return il2cpp::get_class<app::PrivateKey__Class>(type_info, "Mono.Security.Authenticode", "PrivateKey");
        }
        inline app::PrivateKey* create() {
            return il2cpp::create_object<app::PrivateKey>(get_class());
        }
    } // namespace PrivateKey
} // namespace app::classes::types
