#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace INewWindowHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::INewWindowHandler__Class** type_info;
        inline app::INewWindowHandler__Class* get_class() {
            return il2cpp::get_class<app::INewWindowHandler__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "INewWindowHandler");
        }
    } // namespace INewWindowHandler
} // namespace app::classes::types
