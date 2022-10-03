#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CheatsHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CheatsHandler__Class** type_info;
        inline app::CheatsHandler__Class* get_class() {
            return il2cpp::get_class<app::CheatsHandler__Class>(type_info, "", "CheatsHandler");
        }
        inline app::CheatsHandler* create() {
            return il2cpp::create_object<app::CheatsHandler>(get_class());
        }
    } // namespace CheatsHandler
} // namespace app::classes::types
