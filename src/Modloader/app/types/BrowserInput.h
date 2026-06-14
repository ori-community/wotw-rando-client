#pragma once
#include <Modloader/app/structs/BrowserInput.h>
#include <Modloader/app/structs/BrowserInput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserInput {
        inline app::BrowserInput__Class** type_info() {
            static app::BrowserInput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserInput__Class**)(modloader::win::memory::resolve_rva(0x0471F010));
            }
            return cache;
        }
        inline app::BrowserInput__Class* get_class() {
            return il2cpp::get_class<app::BrowserInput__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserInput");
        }
        inline app::BrowserInput* create() {
            return il2cpp::create_object<app::BrowserInput>(get_class());
        }
    } // namespace BrowserInput
} // namespace app::classes::types
