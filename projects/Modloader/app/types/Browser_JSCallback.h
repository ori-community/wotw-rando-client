#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Browser_JSCallback {
        inline app::Browser_JSCallback__Class** type_info = (app::Browser_JSCallback__Class**)(modloader::win::memory::resolve_rva(0x0478E2D8));
        inline app::Browser_JSCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Browser_JSCallback__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Browser", "JSCallback");
        }
        inline app::Browser_JSCallback* create() {
            return il2cpp::create_object<app::Browser_JSCallback>(get_class());
        }
    } // namespace Browser_JSCallback
} // namespace app::classes::types
