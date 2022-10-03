#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tCc {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMIDIEvent_tCc__Class** type_info;
        inline app::AkMIDIEvent_tCc__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tCc__Class>(type_info, "", "AkMIDIEvent", "tCc");
        }
        inline app::AkMIDIEvent_tCc* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tCc>(get_class());
        }
    } // namespace AkMIDIEvent_tCc
} // namespace app::classes::types
