#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkDurationCallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkDurationCallbackInfo__Class** type_info;
        inline app::AkDurationCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkDurationCallbackInfo__Class>(type_info, "", "AkDurationCallbackInfo");
        }
        inline app::AkDurationCallbackInfo* create() {
            return il2cpp::create_object<app::AkDurationCallbackInfo>(get_class());
        }
    } // namespace AkDurationCallbackInfo
} // namespace app::classes::types
