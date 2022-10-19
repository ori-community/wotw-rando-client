#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkEventCallbackInfo {
        inline app::AkEventCallbackInfo__Class** type_info = (app::AkEventCallbackInfo__Class**)(modloader::win::memory::resolve_rva(0x0476EC38));
        inline app::AkEventCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkEventCallbackInfo__Class>(type_info, "", "AkEventCallbackInfo");
        }
        inline app::AkEventCallbackInfo* create() {
            return il2cpp::create_object<app::AkEventCallbackInfo>(get_class());
        }
    } // namespace AkEventCallbackInfo
} // namespace app::classes::types
