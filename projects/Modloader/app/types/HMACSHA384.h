#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HMACSHA384 {
        inline app::HMACSHA384__Class** type_info = (app::HMACSHA384__Class**)(modloader::win::memory::resolve_rva(0x0474E618));
        inline app::HMACSHA384__Class* get_class() {
            return il2cpp::get_class<app::HMACSHA384__Class>(type_info, "System.Security.Cryptography", "HMACSHA384");
        }
        inline app::HMACSHA384* create() {
            return il2cpp::create_object<app::HMACSHA384>(get_class());
        }
    } // namespace HMACSHA384
} // namespace app::classes::types
