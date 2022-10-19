#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tNoteOnOff {
        inline app::AkMIDIEvent_tNoteOnOff__Class** type_info = (app::AkMIDIEvent_tNoteOnOff__Class**)(modloader::win::memory::resolve_rva(0x04702470));
        inline app::AkMIDIEvent_tNoteOnOff__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tNoteOnOff__Class>(type_info, "", "AkMIDIEvent", "tNoteOnOff");
        }
        inline app::AkMIDIEvent_tNoteOnOff* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tNoteOnOff>(get_class());
        }
    } // namespace AkMIDIEvent_tNoteOnOff
} // namespace app::classes::types
