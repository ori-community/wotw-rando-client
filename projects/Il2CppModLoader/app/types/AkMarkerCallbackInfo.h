#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMarkerCallbackInfo {
        inline app::AkMarkerCallbackInfo__Class** type_info = (app::AkMarkerCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x047063E0));
        inline app::AkMarkerCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkMarkerCallbackInfo__Class>(type_info, "", "AkMarkerCallbackInfo");
        }
        inline app::AkMarkerCallbackInfo* create() {
            return il2cpp::create_object<app::AkMarkerCallbackInfo>(get_class());
        }
    } // namespace AkMarkerCallbackInfo
} // namespace app::classes::types
