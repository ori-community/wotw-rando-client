#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Dns {
        inline app::Dns__Class** type_info = (app::Dns__Class**)(modloader::win::memory::resolve_rva(0x047743C0));
        inline app::Dns__Class* get_class() {
            return il2cpp::get_class<app::Dns__Class>(type_info, "System.Net", "Dns");
        }
        inline app::Dns* create() {
            return il2cpp::create_object<app::Dns>(get_class());
        }
    } // namespace Dns
} // namespace app::classes::types
