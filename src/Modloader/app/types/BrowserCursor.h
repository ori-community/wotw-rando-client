#pragma once
#include <Modloader/app/structs/BrowserCursor.h>
#include <Modloader/app/structs/BrowserCursor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserCursor {
        inline app::BrowserCursor__Class** type_info() {
            static app::BrowserCursor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserCursor__Class**)(modloader::win::memory::resolve_rva(0x047328A8));
            }
            return cache;
        }
        inline app::BrowserCursor__Class* get_class() {
            return il2cpp::get_class<app::BrowserCursor__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserCursor");
        }
        inline app::BrowserCursor* create() {
            return il2cpp::create_object<app::BrowserCursor>(get_class());
        }
    } // namespace BrowserCursor
} // namespace app::classes::types
