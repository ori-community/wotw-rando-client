#pragma once
#include <Modloader/app/structs/IDebugMenuToggleable.h>
#include <Modloader/app/structs/IDebugMenuToggleable__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuToggleable {
        inline app::IDebugMenuToggleable__Class** type_info() {
            static app::IDebugMenuToggleable__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDebugMenuToggleable__Class**)(modloader::win::memory::resolve_rva(0x04740288));
            }
            return cache;
        }
        inline app::IDebugMenuToggleable__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuToggleable__Class>(type_info(), "", "IDebugMenuToggleable");
        }
    } // namespace IDebugMenuToggleable
} // namespace app::classes::types
