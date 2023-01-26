#pragma once
#include <Modloader/app/structs/BrowserCursor_CursorInfo__Array.h>
#include <Modloader/app/structs/BrowserCursor_CursorInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserCursor_CursorInfo__Array {
        inline app::BrowserCursor_CursorInfo__Array__Class** type_info() {
            static app::BrowserCursor_CursorInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrowserCursor_CursorInfo__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrowserCursor_CursorInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::BrowserCursor_CursorInfo__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserCursor+CursorInfo[]");
        }
        inline app::BrowserCursor_CursorInfo__Array* create() {
            return il2cpp::create_object<app::BrowserCursor_CursorInfo__Array>(get_class());
        }
    } // namespace BrowserCursor_CursorInfo__Array
} // namespace app::classes::types
