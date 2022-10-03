#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMarkerCallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMarkerCallbackInfo__Class** type_info;
        inline app::AkMarkerCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkMarkerCallbackInfo__Class>(type_info, "", "AkMarkerCallbackInfo");
        }
        inline app::AkMarkerCallbackInfo* create() {
            return il2cpp::create_object<app::AkMarkerCallbackInfo>(get_class());
        }
    } // namespace AkMarkerCallbackInfo
} // namespace app::classes::types
