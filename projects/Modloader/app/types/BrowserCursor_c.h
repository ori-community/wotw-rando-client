#pragma once
#include <Modloader/app/structs/BrowserCursor_c.h>
#include <Modloader/app/structs/BrowserCursor_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserCursor_c {
        inline app::BrowserCursor_c__Class** type_info() {
            static app::BrowserCursor_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserCursor_c__Class**)(modloader::win::memory::resolve_rva(0x047627A0));
            }
            return cache;
        }
        inline app::BrowserCursor_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserCursor_c__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserCursor", "<>c");
        }
        inline app::BrowserCursor_c* create() {
            return il2cpp::create_object<app::BrowserCursor_c>(get_class());
        }
    } // namespace BrowserCursor_c
} // namespace app::classes::types
