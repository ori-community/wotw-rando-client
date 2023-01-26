#pragma once
#include <Modloader/app/structs/DialogHandler_MenuCallback.h>
#include <Modloader/app/structs/DialogHandler_MenuCallback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DialogHandler_MenuCallback {
        inline app::DialogHandler_MenuCallback__Class** type_info() {
            static app::DialogHandler_MenuCallback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DialogHandler_MenuCallback__Class**)(modloader::win::memory::resolve_rva(0x04755DC0));
            }
            return cache;
        }
        inline app::DialogHandler_MenuCallback__Class* get_class() {
            return il2cpp::get_nested_class<app::DialogHandler_MenuCallback__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "DialogHandler", "MenuCallback");
        }
        inline app::DialogHandler_MenuCallback* create() {
            return il2cpp::create_object<app::DialogHandler_MenuCallback>(get_class());
        }
    } // namespace DialogHandler_MenuCallback
} // namespace app::classes::types
