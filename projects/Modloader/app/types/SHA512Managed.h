#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SHA512Managed__Class.h>
#include <Modloader/app/structs/SHA512Managed.h>

namespace app::classes::types {
    namespace SHA512Managed {
        inline app::SHA512Managed__Class** type_info = (app::SHA512Managed__Class**)(modloader::win::memory::resolve_rva(0x0472E240));
        inline app::SHA512Managed__Class* get_class() {
            return il2cpp::get_class<app::SHA512Managed__Class>(type_info, "System.Security.Cryptography", "SHA512Managed");
        }
        inline app::SHA512Managed* create() {
            return il2cpp::create_object<app::SHA512Managed>(get_class());
        }
    } // namespace SHA512Managed
} // namespace app::classes::types
