#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tChanAftertouch {
        inline app::AkMIDIEvent_tChanAftertouch__Class** type_info = (app::AkMIDIEvent_tChanAftertouch__Class**)(modloader::win::memory::resolve_rva(0x04764FB8));
        inline app::AkMIDIEvent_tChanAftertouch__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tChanAftertouch__Class>(type_info, "", "AkMIDIEvent", "tChanAftertouch");
        }
        inline app::AkMIDIEvent_tChanAftertouch* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tChanAftertouch>(get_class());
        }
    } // namespace AkMIDIEvent_tChanAftertouch
} // namespace app::classes::types
