#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_ShowContextMenuFunc {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BrowserNative_ShowContextMenuFunc__Class** type_info;
        inline app::BrowserNative_ShowContextMenuFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ShowContextMenuFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ShowContextMenuFunc");
        }
        inline app::BrowserNative_ShowContextMenuFunc* create() {
            return il2cpp::create_object<app::BrowserNative_ShowContextMenuFunc>(get_class());
        }
    } // namespace BrowserNative_ShowContextMenuFunc
} // namespace app::classes::types
