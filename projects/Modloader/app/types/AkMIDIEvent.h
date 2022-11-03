#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMIDIEvent {
        namespace {
            inline app::AkMIDIEvent__Class* type_info_ref = nullptr;
        }
        inline app::AkMIDIEvent__Class** type_info = &type_info_ref;
        inline app::AkMIDIEvent__Class* get_class() {
            return il2cpp::get_class<app::AkMIDIEvent__Class>(type_info, "", "AkMIDIEvent");
        }
        inline app::AkMIDIEvent* create() {
            return il2cpp::create_object<app::AkMIDIEvent>(get_class());
        }
    } // namespace AkMIDIEvent
} // namespace app::classes::types
