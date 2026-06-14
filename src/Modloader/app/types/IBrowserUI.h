#pragma once
#include <Modloader/app/structs/IBrowserUI.h>
#include <Modloader/app/structs/IBrowserUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBrowserUI {
        inline app::IBrowserUI__Class** type_info() {
            static app::IBrowserUI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBrowserUI__Class**)(modloader::win::memory::resolve_rva(0x04724ED0));
            }
            return cache;
        }
        inline app::IBrowserUI__Class* get_class() {
            return il2cpp::get_class<app::IBrowserUI__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "IBrowserUI");
        }
    } // namespace IBrowserUI
} // namespace app::classes::types
