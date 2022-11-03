#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RIPEMD160 {
        inline app::RIPEMD160__Class** type_info = (app::RIPEMD160__Class**)(modloader::win::memory::resolve_rva(0x04737580));
        inline app::RIPEMD160__Class* get_class() {
            return il2cpp::get_class<app::RIPEMD160__Class>(type_info, "System.Security.Cryptography", "RIPEMD160");
        }
        inline app::RIPEMD160* create() {
            return il2cpp::create_object<app::RIPEMD160>(get_class());
        }
    } // namespace RIPEMD160
} // namespace app::classes::types
