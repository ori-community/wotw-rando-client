#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tPitchBend {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMIDIEvent_tPitchBend__Class** type_info;
        inline app::AkMIDIEvent_tPitchBend__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tPitchBend__Class>(type_info, "", "AkMIDIEvent", "tPitchBend");
        }
        inline app::AkMIDIEvent_tPitchBend* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tPitchBend>(get_class());
        }
    } // namespace AkMIDIEvent_tPitchBend
} // namespace app::classes::types
