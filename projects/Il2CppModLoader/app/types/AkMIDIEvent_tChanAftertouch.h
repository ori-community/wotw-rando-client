#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tChanAftertouch {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMIDIEvent_tChanAftertouch__Class** type_info;
        inline app::AkMIDIEvent_tChanAftertouch__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tChanAftertouch__Class>(type_info, "", "AkMIDIEvent", "tChanAftertouch");
        }
        inline app::AkMIDIEvent_tChanAftertouch* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tChanAftertouch>(get_class());
        }
    } // namespace AkMIDIEvent_tChanAftertouch
} // namespace app::classes::types
