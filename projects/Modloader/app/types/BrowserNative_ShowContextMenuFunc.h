#pragma once
#include <Modloader/app/structs/BrowserNative_ShowContextMenuFunc.h>
#include <Modloader/app/structs/BrowserNative_ShowContextMenuFunc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_ShowContextMenuFunc {
        inline app::BrowserNative_ShowContextMenuFunc__Class** type_info() {
            static app::BrowserNative_ShowContextMenuFunc__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative_ShowContextMenuFunc__Class**)(modloader::win::memory::resolve_rva(0x04703808));
            }
            return cache;
        }
        inline app::BrowserNative_ShowContextMenuFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ShowContextMenuFunc__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ShowContextMenuFunc");
        }
        inline app::BrowserNative_ShowContextMenuFunc* create() {
            return il2cpp::create_object<app::BrowserNative_ShowContextMenuFunc>(get_class());
        }
    } // namespace BrowserNative_ShowContextMenuFunc
} // namespace app::classes::types
