#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMIDIEvent_tProgramChange {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMIDIEvent_tProgramChange__Class** type_info;
        inline app::AkMIDIEvent_tProgramChange__Class* get_class() {
            return il2cpp::get_nested_class<app::AkMIDIEvent_tProgramChange__Class>(type_info, "", "AkMIDIEvent", "tProgramChange");
        }
        inline app::AkMIDIEvent_tProgramChange* create() {
            return il2cpp::create_object<app::AkMIDIEvent_tProgramChange>(get_class());
        }
    } // namespace AkMIDIEvent_tProgramChange
} // namespace app::classes::types
