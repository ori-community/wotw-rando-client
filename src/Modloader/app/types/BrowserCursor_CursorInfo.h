#pragma once
#include <Modloader/app/structs/BrowserCursor_CursorInfo.h>
#include <Modloader/app/structs/BrowserCursor_CursorInfo__Array.h>
#include <Modloader/app/structs/BrowserCursor_CursorInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserCursor_CursorInfo {
        inline app::BrowserCursor_CursorInfo__Class** type_info() {
            static app::BrowserCursor_CursorInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserCursor_CursorInfo__Class**)(modloader::win::memory::resolve_rva(0x04789DE8));
            }
            return cache;
        }
        inline app::BrowserCursor_CursorInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserCursor_CursorInfo__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserCursor", "CursorInfo");
        }
        inline app::BrowserCursor_CursorInfo* create() {
            return il2cpp::create_object<app::BrowserCursor_CursorInfo>(get_class());
        }
        inline app::BrowserCursor_CursorInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::BrowserCursor_CursorInfo__Array>(get_class(), size);
        }
        inline app::BrowserCursor_CursorInfo__Array* create_array(const std::vector<app::BrowserCursor_CursorInfo*>& items) {
            return il2cpp::array_new<app::BrowserCursor_CursorInfo__Array>(get_class(), items);
        }
    } // namespace BrowserCursor_CursorInfo
} // namespace app::classes::types
