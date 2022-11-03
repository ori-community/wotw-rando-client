#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FPSTestFields {
        inline app::FPSTestFields__Class** type_info = (app::FPSTestFields__Class**)(modloader::win::memory::resolve_rva(0x0473D0A0));
        inline app::FPSTestFields__Class* get_class() {
            return il2cpp::get_class<app::FPSTestFields__Class>(type_info, "", "FPSTestFields");
        }
        inline app::FPSTestFields* create() {
            return il2cpp::create_object<app::FPSTestFields>(get_class());
        }
    } // namespace FPSTestFields
} // namespace app::classes::types
