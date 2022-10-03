#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Promise {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Promise__Class** type_info;
        inline app::Promise__Class* get_class() {
            return il2cpp::get_class<app::Promise__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Promise");
        }
        inline app::Promise* create() {
            return il2cpp::create_object<app::Promise>(get_class());
        }
    } // namespace Promise
} // namespace app::classes::types
