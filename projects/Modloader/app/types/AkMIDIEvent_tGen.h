#pragma once
#include <Modloader/app/structs/AkMIDIEvent_tGen.h>
#include <Modloader/app/structs/AkMIDIEvent_tGen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tGen {
        inline app::AkMIDIEvent_tGen__Class** type_info() {
            static app::AkMIDIEvent_tGen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMIDIEvent_tGen__Class**)(modloader::win::memory::resolve_rva(0x04716D60));
            }
            return cache;
        }
        inline app::AkMIDIEvent_tGen__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tGen__Class>(type_info(), "", "AkMIDIEvent", "tGen");
        }
        inline app::AkMIDIEvent_tGen* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tGen>(get_class());
        }
    } // namespace AkMIDIEvent_tGen
} // namespace app::classes::types
