#pragma once
#include <Modloader/app/structs/AkMIDIEvent_tChanAftertouch.h>
#include <Modloader/app/structs/AkMIDIEvent_tChanAftertouch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tChanAftertouch {
        inline app::AkMIDIEvent_tChanAftertouch__Class** type_info() {
            static app::AkMIDIEvent_tChanAftertouch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMIDIEvent_tChanAftertouch__Class**)(modloader::win::memory::resolve_rva(0x04764FB8));
            }
            return cache;
        }
        inline app::AkMIDIEvent_tChanAftertouch__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tChanAftertouch__Class>(type_info(), "", "AkMIDIEvent", "tChanAftertouch");
        }
        inline app::AkMIDIEvent_tChanAftertouch* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tChanAftertouch>(get_class());
        }
    } // namespace AkMIDIEvent_tChanAftertouch
} // namespace app::classes::types
