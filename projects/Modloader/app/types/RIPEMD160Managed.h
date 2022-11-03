#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RIPEMD160Managed {
        inline app::RIPEMD160Managed__Class** type_info = (app::RIPEMD160Managed__Class**)(modloader::win::memory::resolve_rva(0x04772CA8));
        inline app::RIPEMD160Managed__Class* get_class() {
            return il2cpp::get_class<app::RIPEMD160Managed__Class>(type_info, "System.Security.Cryptography", "RIPEMD160Managed");
        }
        inline app::RIPEMD160Managed* create() {
            return il2cpp::create_object<app::RIPEMD160Managed>(get_class());
        }
    } // namespace RIPEMD160Managed
} // namespace app::classes::types
