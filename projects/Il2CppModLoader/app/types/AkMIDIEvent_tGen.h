#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tGen {
        inline app::AkMIDIEvent_tGen__Class** type_info = (app::AkMIDIEvent_tGen__Class**)(modloader::win::memory::resolve_rva(0x04716D60));
        inline app::AkMIDIEvent_tGen__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tGen__Class>(type_info, "", "AkMIDIEvent", "tGen");
        }
        inline app::AkMIDIEvent_tGen* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tGen>(get_class());
        }
    } // namespace AkMIDIEvent_tGen
} // namespace app::classes::types
