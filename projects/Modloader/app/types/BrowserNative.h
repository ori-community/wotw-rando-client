#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BrowserNative__Class.h>
#include <Modloader/app/structs/BrowserNative.h>

namespace app::classes::types {
    namespace BrowserNative {
        inline app::BrowserNative__Class** type_info = (app::BrowserNative__Class**)(modloader::win::memory::resolve_rva(0x0474FB30));
        inline app::BrowserNative__Class* get_class() {
            return il2cpp::get_class<app::BrowserNative__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "BrowserNative");
        }
        inline app::BrowserNative* create() {
            return il2cpp::create_object<app::BrowserNative>(get_class());
        }
    } // namespace BrowserNative
} // namespace app::classes::types
