#pragma once
#include <Modloader/app/structs/AkMIDIEvent_tNoteOnOff.h>
#include <Modloader/app/structs/AkMIDIEvent_tNoteOnOff__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tNoteOnOff {
        inline app::AkMIDIEvent_tNoteOnOff__Class** type_info() {
            static app::AkMIDIEvent_tNoteOnOff__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMIDIEvent_tNoteOnOff__Class**)(modloader::win::memory::resolve_rva(0x04702470));
            }
            return cache;
        }
        inline app::AkMIDIEvent_tNoteOnOff__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tNoteOnOff__Class>(type_info(), "", "AkMIDIEvent", "tNoteOnOff");
        }
        inline app::AkMIDIEvent_tNoteOnOff* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tNoteOnOff>(get_class());
        }
    } // namespace AkMIDIEvent_tNoteOnOff
} // namespace app::classes::types
