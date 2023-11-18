#pragma once
#include <Modloader/app/structs/AkMIDIEvent.h>
#include <Modloader/app/structs/AkMIDIEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEvent {
        inline app::AkMIDIEvent__Class** type_info() {
            static app::AkMIDIEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkMIDIEvent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkMIDIEvent__Class* get_class() {
            return il2cpp::get_class<app::AkMIDIEvent__Class>(type_info(), "", "AkMIDIEvent");
        }
        inline app::AkMIDIEvent* create() {
            return il2cpp::create_object<app::AkMIDIEvent>(get_class());
        }
    } // namespace AkMIDIEvent
} // namespace app::classes::types
