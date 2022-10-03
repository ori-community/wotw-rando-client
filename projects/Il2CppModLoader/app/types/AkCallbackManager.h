#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkCallbackManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkCallbackManager__Class** type_info;
        inline app::AkCallbackManager__Class* get_class() {
            return il2cpp::get_class<app::AkCallbackManager__Class>(type_info, "", "AkCallbackManager");
        }
        inline app::AkCallbackManager* create() {
            return il2cpp::create_object<app::AkCallbackManager>(get_class());
        }
    } // namespace AkCallbackManager
} // namespace app::classes::types
