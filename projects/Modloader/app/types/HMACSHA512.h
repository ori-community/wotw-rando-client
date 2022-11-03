#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HMACSHA512 {
        inline app::HMACSHA512__Class** type_info = (app::HMACSHA512__Class**)(modloader::win::memory::resolve_rva(0x047186D0));
        inline app::HMACSHA512__Class* get_class() {
            return il2cpp::get_class<app::HMACSHA512__Class>(type_info, "System.Security.Cryptography", "HMACSHA512");
        }
        inline app::HMACSHA512* create() {
            return il2cpp::create_object<app::HMACSHA512>(get_class());
        }
    } // namespace HMACSHA512
} // namespace app::classes::types
