#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MD4Managed_1 {
        inline app::MD4Managed_1__Class** type_info = (app::MD4Managed_1__Class**)(modloader::win::memory::resolve_rva(0x04701210));
        inline app::MD4Managed_1__Class* get_class() {
            return il2cpp::get_class<app::MD4Managed_1__Class>(type_info, "Mono.Security.Cryptography", "MD4Managed");
        }
        inline app::MD4Managed_1* create() {
            return il2cpp::create_object<app::MD4Managed_1>(get_class());
        }
    } // namespace MD4Managed_1
} // namespace app::classes::types
