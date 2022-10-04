#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPendingPromise {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPendingPromise__Class** type_info;
        inline app::IPendingPromise__Class* get_class() {
            return il2cpp::get_class<app::IPendingPromise__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "IPendingPromise");
        }
    } // namespace IPendingPromise
} // namespace app::classes::types
