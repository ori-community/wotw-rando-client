#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDebugMenuExternalItem {
        inline app::IDebugMenuExternalItem__Class** type_info = (app::IDebugMenuExternalItem__Class**)(modloader::win::memory::resolve_rva(0x0473EC20));
        inline app::IDebugMenuExternalItem__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuExternalItem__Class>(type_info, "", "IDebugMenuExternalItem");
        }
    } // namespace IDebugMenuExternalItem
} // namespace app::classes::types
