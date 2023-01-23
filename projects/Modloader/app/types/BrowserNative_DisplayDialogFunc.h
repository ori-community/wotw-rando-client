#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BrowserNative_DisplayDialogFunc__Class.h>
#include <Modloader/app/structs/BrowserNative_DisplayDialogFunc.h>

namespace app::classes::types {
    namespace BrowserNative_DisplayDialogFunc {
        inline app::BrowserNative_DisplayDialogFunc__Class** type_info = (app::BrowserNative_DisplayDialogFunc__Class**)(modloader::win::memory::resolve_rva(0x0471A448));
        inline app::BrowserNative_DisplayDialogFunc__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_DisplayDialogFunc__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "DisplayDialogFunc");
        }
        inline app::BrowserNative_DisplayDialogFunc* create() {
            return il2cpp::create_object<app::BrowserNative_DisplayDialogFunc>(get_class());
        }
    } // namespace BrowserNative_DisplayDialogFunc
} // namespace app::classes::types
