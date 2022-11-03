#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CspParameters {
        inline app::CspParameters__Class** type_info = (app::CspParameters__Class**)(modloader::win::memory::resolve_rva(0x04761E80));
        inline app::CspParameters__Class* get_class() {
            return il2cpp::get_class<app::CspParameters__Class>(type_info, "System.Security.Cryptography", "CspParameters");
        }
        inline app::CspParameters* create() {
            return il2cpp::create_object<app::CspParameters>(get_class());
        }
    } // namespace CspParameters
} // namespace app::classes::types
