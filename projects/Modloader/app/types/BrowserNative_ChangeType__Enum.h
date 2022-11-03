#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BrowserNative_ChangeType__Enum {
        inline app::BrowserNative_ChangeType__Enum__Class** type_info = (app::BrowserNative_ChangeType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04763218));
        inline app::BrowserNative_ChangeType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BrowserNative_ChangeType__Enum__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative", "ChangeType");
        }
        inline app::BrowserNative_ChangeType__Enum* create() {
            return il2cpp::create_object<app::BrowserNative_ChangeType__Enum>(get_class());
        }
    } // namespace BrowserNative_ChangeType__Enum
} // namespace app::classes::types
