#pragma once
#include <Modloader/app/structs/BrowserNative_ChangeFunc.h>
#include <Modloader/app/structs/BrowserNative_ChangeFunc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_ChangeFunc {
        inline app::BrowserNative_ChangeFunc__Class** type_info() {
            static app::BrowserNative_ChangeFunc__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative_ChangeFunc__Class**)(modloader::win::memory::resolve_rva(0x04778548));
            }
            return cache;
        }
        inline app::BrowserNative_ChangeFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ChangeFunc__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ChangeFunc");
        }
        inline app::BrowserNative_ChangeFunc* create() {
            return il2cpp::create_object<app::BrowserNative_ChangeFunc>(get_class());
        }
    } // namespace BrowserNative_ChangeFunc
} // namespace app::classes::types
