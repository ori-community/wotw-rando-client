#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BrowserNative_ShowContextMenuFunc__Class.h>
#include <Modloader/app/structs/BrowserNative_ShowContextMenuFunc.h>

namespace app::classes::types {
    namespace BrowserNative_ShowContextMenuFunc {
        inline app::BrowserNative_ShowContextMenuFunc__Class** type_info = (app::BrowserNative_ShowContextMenuFunc__Class**)(modloader::win::memory::resolve_rva(0x04703808));
        inline app::BrowserNative_ShowContextMenuFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ShowContextMenuFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ShowContextMenuFunc");
        }
        inline app::BrowserNative_ShowContextMenuFunc* create() {
            return il2cpp::create_object<app::BrowserNative_ShowContextMenuFunc>(get_class());
        }
    } // namespace BrowserNative_ShowContextMenuFunc
} // namespace app::classes::types
