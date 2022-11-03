#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMIDIPost {
        inline app::AkMIDIPost__Class** type_info = (app::AkMIDIPost__Class**)(modloader::win::memory::resolve_rva(0x0474A480));
        inline app::AkMIDIPost__Class* get_class() {
            return il2cpp::get_class<app::AkMIDIPost__Class>(type_info, "", "AkMIDIPost");
        }
        inline app::AkMIDIPost* create() {
            return il2cpp::create_object<app::AkMIDIPost>(get_class());
        }
    } // namespace AkMIDIPost
} // namespace app::classes::types
