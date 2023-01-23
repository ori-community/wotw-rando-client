#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BrowserNative_NavStateFunc__Class.h>
#include <Modloader/app/structs/BrowserNative_NavStateFunc.h>

namespace app::classes::types {
    namespace BrowserNative_NavStateFunc {
        inline app::BrowserNative_NavStateFunc__Class** type_info = (app::BrowserNative_NavStateFunc__Class**)(modloader::win::memory::resolve_rva(0x04730878));
        inline app::BrowserNative_NavStateFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_NavStateFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "NavStateFunc");
        }
        inline app::BrowserNative_NavStateFunc* create() {
            return il2cpp::create_object<app::BrowserNative_NavStateFunc>(get_class());
        }
    } // namespace BrowserNative_NavStateFunc
} // namespace app::classes::types
