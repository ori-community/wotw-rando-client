#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkMIDIEvent_tNoteAftertouch__Class.h>
#include <Modloader/app/structs/AkMIDIEvent_tNoteAftertouch.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tNoteAftertouch {
        inline app::AkMIDIEvent_tNoteAftertouch__Class** type_info = (app::AkMIDIEvent_tNoteAftertouch__Class**)(modloader::win::memory::resolve_rva(0x04769C20));
        inline app::AkMIDIEvent_tNoteAftertouch__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tNoteAftertouch__Class>(type_info, "", "AkMIDIEvent", "tNoteAftertouch");
        }
        inline app::AkMIDIEvent_tNoteAftertouch* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tNoteAftertouch>(get_class());
        }
    } // namespace AkMIDIEvent_tNoteAftertouch
} // namespace app::classes::types
