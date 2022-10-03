#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEventCallbackInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMIDIEventCallbackInfo__Class** type_info;
        inline app::AkMIDIEventCallbackInfo__Class* get_class() {
            return il2cpp::get_class<app::AkMIDIEventCallbackInfo__Class>(type_info, "", "AkMIDIEventCallbackInfo");
        }
        inline app::AkMIDIEventCallbackInfo* create() {
            return il2cpp::create_object<app::AkMIDIEventCallbackInfo>(get_class());
        }
    } // namespace AkMIDIEventCallbackInfo
} // namespace app::classes::types
