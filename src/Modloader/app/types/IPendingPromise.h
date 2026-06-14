#pragma once
#include <Modloader/app/structs/IPendingPromise.h>
#include <Modloader/app/structs/IPendingPromise__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPendingPromise {
        inline app::IPendingPromise__Class** type_info() {
            static app::IPendingPromise__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IPendingPromise__Class**)(modloader::win::memory::resolve_rva(0x04715748));
            }
            return cache;
        }
        inline app::IPendingPromise__Class* get_class() {
            return il2cpp::get_class<app::IPendingPromise__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "IPendingPromise");
        }
    } // namespace IPendingPromise
} // namespace app::classes::types
