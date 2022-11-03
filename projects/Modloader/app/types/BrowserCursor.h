#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserCursor {
        inline app::BrowserCursor__Class** type_info = (app::BrowserCursor__Class**)(modloader::win::memory::resolve_rva(0x047328A8));
        inline app::BrowserCursor__Class* get_class() {
            return il2cpp::get_class<app::BrowserCursor__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserCursor");
        }
        inline app::BrowserCursor* create() {
            return il2cpp::create_object<app::BrowserCursor>(get_class());
        }
    } // namespace BrowserCursor
} // namespace app::classes::types
