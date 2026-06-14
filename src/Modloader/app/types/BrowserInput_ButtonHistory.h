#pragma once
#include <Modloader/app/structs/BrowserInput_ButtonHistory.h>
#include <Modloader/app/structs/BrowserInput_ButtonHistory__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserInput_ButtonHistory {
        inline app::BrowserInput_ButtonHistory__Class** type_info() {
            static app::BrowserInput_ButtonHistory__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserInput_ButtonHistory__Class**)(modloader::win::memory::resolve_rva(0x0470D238));
            }
            return cache;
        }
        inline app::BrowserInput_ButtonHistory__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserInput_ButtonHistory__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserInput", "ButtonHistory");
        }
        inline app::BrowserInput_ButtonHistory* create() {
            return il2cpp::create_object<app::BrowserInput_ButtonHistory>(get_class());
        }
    } // namespace BrowserInput_ButtonHistory
} // namespace app::classes::types
