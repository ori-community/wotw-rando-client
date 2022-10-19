#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkCallbackManager {
        inline app::AkCallbackManager__Class** type_info = (app::AkCallbackManager__Class**)(modloader::win::memory::resolve_rva(0x0470BF28));
        inline app::AkCallbackManager__Class* get_class() {
            return il2cpp::get_class<app::AkCallbackManager__Class>(type_info, "", "AkCallbackManager");
        }
        inline app::AkCallbackManager* create() {
            return il2cpp::create_object<app::AkCallbackManager>(get_class());
        }
    } // namespace AkCallbackManager
} // namespace app::classes::types
