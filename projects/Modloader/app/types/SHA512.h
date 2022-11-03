#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SHA512 {
        inline app::SHA512__Class** type_info = (app::SHA512__Class**)(modloader::win::memory::resolve_rva(0x04763180));
        inline app::SHA512__Class* get_class() {
            return il2cpp::get_class<app::SHA512__Class>(type_info, "System.Security.Cryptography", "SHA512");
        }
        inline app::SHA512* create() {
            return il2cpp::create_object<app::SHA512>(get_class());
        }
    } // namespace SHA512
} // namespace app::classes::types
