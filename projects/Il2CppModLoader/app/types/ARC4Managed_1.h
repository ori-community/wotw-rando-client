#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ARC4Managed_1 {
        inline app::ARC4Managed_1__Class** type_info = (app::ARC4Managed_1__Class**)(modloader::win::memory::resolve_rva(0x047099D0));
        inline app::ARC4Managed_1__Class* get_class() {
            return il2cpp::get_class<app::ARC4Managed_1__Class>(type_info, "Mono.Security.Cryptography", "ARC4Managed");
        }
        inline app::ARC4Managed_1* create() {
            return il2cpp::create_object<app::ARC4Managed_1>(get_class());
        }
    } // namespace ARC4Managed_1
} // namespace app::classes::types
