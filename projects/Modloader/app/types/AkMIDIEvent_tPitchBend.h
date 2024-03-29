#pragma once
#include <Modloader/app/structs/AkMIDIEvent_tPitchBend.h>
#include <Modloader/app/structs/AkMIDIEvent_tPitchBend__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tPitchBend {
        inline app::AkMIDIEvent_tPitchBend__Class** type_info() {
            static app::AkMIDIEvent_tPitchBend__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMIDIEvent_tPitchBend__Class**)(modloader::win::memory::resolve_rva(0x0472B2C0));
            }
            return cache;
        }
        inline app::AkMIDIEvent_tPitchBend__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tPitchBend__Class>(type_info(), "", "AkMIDIEvent", "tPitchBend");
        }
        inline app::AkMIDIEvent_tPitchBend* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tPitchBend>(get_class());
        }
    } // namespace AkMIDIEvent_tPitchBend
} // namespace app::classes::types
