#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BrowserNative_ReadyFunc__Class.h>
#include <Modloader/app/structs/BrowserNative_ReadyFunc.h>

namespace app::classes::types {
    namespace BrowserNative_ReadyFunc {
        inline app::BrowserNative_ReadyFunc__Class** type_info = (app::BrowserNative_ReadyFunc__Class**)(modloader::win::memory::resolve_rva(0x047174A8));
        inline app::BrowserNative_ReadyFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ReadyFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ReadyFunc");
        }
        inline app::BrowserNative_ReadyFunc* create() {
            return il2cpp::create_object<app::BrowserNative_ReadyFunc>(get_class());
        }
    } // namespace BrowserNative_ReadyFunc
} // namespace app::classes::types
