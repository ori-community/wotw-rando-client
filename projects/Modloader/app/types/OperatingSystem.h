#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OperatingSystem {
        inline app::OperatingSystem__Class** type_info = (app::OperatingSystem__Class**)(modloader::win::memory::resolve_rva(0x04732ED0));
        inline app::OperatingSystem__Class* get_class() {
            return il2cpp::get_class<app::OperatingSystem__Class>(type_info, "System", "OperatingSystem");
        }
        inline app::OperatingSystem* create() {
            return il2cpp::create_object<app::OperatingSystem>(get_class());
        }
    } // namespace OperatingSystem
} // namespace app::classes::types
