#pragma once
#include <Modloader/app/structs/BrowserNative.h>
#include <Modloader/app/structs/BrowserNative__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative {
        inline app::BrowserNative__Class** type_info() {
            static app::BrowserNative__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative__Class**)(modloader::win::memory::resolve_rva(0x0474FB30));
            }
            return cache;
        }
        inline app::BrowserNative__Class* get_class() {
            return il2cpp::get_class<app::BrowserNative__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative");
        }
        inline app::BrowserNative* create() {
            return il2cpp::create_object<app::BrowserNative>(get_class());
        }
    } // namespace BrowserNative
} // namespace app::classes::types
