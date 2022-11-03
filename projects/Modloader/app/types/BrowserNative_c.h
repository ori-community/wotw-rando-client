#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_c {
        inline app::BrowserNative_c__Class** type_info = (app::BrowserNative_c__Class**)(modloader::win::memory::resolve_rva(0x04790DF8));
        inline app::BrowserNative_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "<>c");
        }
        inline app::BrowserNative_c* create() {
            return il2cpp::create_object<app::BrowserNative_c>(get_class());
        }
    } // namespace BrowserNative_c
} // namespace app::classes::types
