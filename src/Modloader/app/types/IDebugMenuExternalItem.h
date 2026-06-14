#pragma once
#include <Modloader/app/structs/IDebugMenuExternalItem.h>
#include <Modloader/app/structs/IDebugMenuExternalItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuExternalItem {
        inline app::IDebugMenuExternalItem__Class** type_info() {
            static app::IDebugMenuExternalItem__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDebugMenuExternalItem__Class**)(modloader::win::memory::resolve_rva(0x0473EC20));
            }
            return cache;
        }
        inline app::IDebugMenuExternalItem__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuExternalItem__Class>(type_info(), "", "IDebugMenuExternalItem");
        }
    } // namespace IDebugMenuExternalItem
} // namespace app::classes::types
