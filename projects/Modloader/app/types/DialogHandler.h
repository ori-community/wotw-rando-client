#pragma once
#include <Modloader/app/structs/DialogHandler.h>
#include <Modloader/app/structs/DialogHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DialogHandler {
        inline app::DialogHandler__Class** type_info() {
            static app::DialogHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DialogHandler__Class**)(modloader::win::memory::resolve_rva(0x0473B4E0));
            }
            return cache;
        }
        inline app::DialogHandler__Class* get_class() {
            return il2cpp::get_class<app::DialogHandler__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "DialogHandler");
        }
        inline app::DialogHandler* create() {
            return il2cpp::create_object<app::DialogHandler>(get_class());
        }
    } // namespace DialogHandler
} // namespace app::classes::types
