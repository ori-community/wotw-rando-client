#pragma once
#include <Modloader/app/structs/BrowserNavState.h>
#include <Modloader/app/structs/BrowserNavState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNavState {
        inline app::BrowserNavState__Class** type_info() {
            static app::BrowserNavState__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNavState__Class**)(modloader::win::memory::resolve_rva(0x04757318));
            }
            return cache;
        }
        inline app::BrowserNavState__Class* get_class() {
            return il2cpp::get_class<app::BrowserNavState__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNavState");
        }
        inline app::BrowserNavState* create() {
            return il2cpp::create_object<app::BrowserNavState>(get_class());
        }
    } // namespace BrowserNavState
} // namespace app::classes::types
