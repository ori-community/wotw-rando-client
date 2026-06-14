#pragma once
#include <Modloader/app/structs/Browser_JSCallback.h>
#include <Modloader/app/structs/Browser_JSCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Browser_JSCallback {
        inline app::Browser_JSCallback__Class** type_info() {
            static app::Browser_JSCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Browser_JSCallback__Class**)(modloader::win::memory::resolve_rva(0x0478E2D8));
            }
            return cache;
        }
        inline app::Browser_JSCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::Browser_JSCallback__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "Browser", "JSCallback");
        }
        inline app::Browser_JSCallback* create() {
            return il2cpp::create_object<app::Browser_JSCallback>(get_class());
        }
    } // namespace Browser_JSCallback
} // namespace app::classes::types
