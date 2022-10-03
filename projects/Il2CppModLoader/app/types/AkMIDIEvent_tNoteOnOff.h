#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tNoteOnOff {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMIDIEvent_tNoteOnOff__Class** type_info;
        inline app::AkMIDIEvent_tNoteOnOff__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tNoteOnOff__Class>(type_info, "", "AkMIDIEvent", "tNoteOnOff");
        }
        inline app::AkMIDIEvent_tNoteOnOff* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tNoteOnOff>(get_class());
        }
    } // namespace AkMIDIEvent_tNoteOnOff
} // namespace app::classes::types
