#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tNoteAftertouch {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMIDIEvent_tNoteAftertouch__Class** type_info;
        inline app::AkMIDIEvent_tNoteAftertouch__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tNoteAftertouch__Class>(type_info, "", "AkMIDIEvent", "tNoteAftertouch");
        }
        inline app::AkMIDIEvent_tNoteAftertouch* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tNoteAftertouch>(get_class());
        }
    } // namespace AkMIDIEvent_tNoteAftertouch
} // namespace app::classes::types
