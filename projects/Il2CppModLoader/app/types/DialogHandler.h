#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DialogHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DialogHandler__Class** type_info;
        inline app::DialogHandler__Class* get_class() {
            return il2cpp::get_class<app::DialogHandler__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "DialogHandler");
        }
        inline app::DialogHandler* create() {
            return il2cpp::create_object<app::DialogHandler>(get_class());
        }
    } // namespace DialogHandler
} // namespace app::classes::types
