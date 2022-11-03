#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_ContextMenuOrigin__Enum {
        inline app::BrowserNative_ContextMenuOrigin__Enum__Class** type_info = (app::BrowserNative_ContextMenuOrigin__Enum__Class**)(modloader::win::memory::resolve_rva(0x04758888));
        inline app::BrowserNative_ContextMenuOrigin__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ContextMenuOrigin__Enum__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ContextMenuOrigin");
        }
        inline app::BrowserNative_ContextMenuOrigin__Enum* create() {
            return il2cpp::create_object<app::BrowserNative_ContextMenuOrigin__Enum>(get_class());
        }
    } // namespace BrowserNative_ContextMenuOrigin__Enum
} // namespace app::classes::types
