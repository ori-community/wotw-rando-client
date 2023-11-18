#pragma once
#include <Modloader/app/structs/BrowserNative_ForwardJSCallFunc.h>
#include <Modloader/app/structs/BrowserNative_ForwardJSCallFunc__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrowserNative_ForwardJSCallFunc {
        inline app::BrowserNative_ForwardJSCallFunc__Class** type_info() {
            static app::BrowserNative_ForwardJSCallFunc__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BrowserNative_ForwardJSCallFunc__Class**)(modloader::win::memory::resolve_rva(0x04768FD8));
            }
            return cache;
        }
        inline app::BrowserNative_ForwardJSCallFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ForwardJSCallFunc__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ForwardJSCallFunc");
        }
        inline app::BrowserNative_ForwardJSCallFunc* create() {
            return il2cpp::create_object<app::BrowserNative_ForwardJSCallFunc>(get_class());
        }
    } // namespace BrowserNative_ForwardJSCallFunc
} // namespace app::classes::types
