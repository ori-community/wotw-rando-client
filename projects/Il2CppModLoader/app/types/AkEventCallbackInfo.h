#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkEventCallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkEventCallbackInfo__Class** type_info;
        inline app::AkEventCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkEventCallbackInfo__Class>(type_info, "", "AkEventCallbackInfo");
        }
        inline app::AkEventCallbackInfo* create() {
            return il2cpp::create_object<app::AkEventCallbackInfo>(get_class());
        }
    } // namespace AkEventCallbackInfo
} // namespace app::classes::types
