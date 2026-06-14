#pragma once
#include <Modloader/app/structs/AkMIDIPost.h>
#include <Modloader/app/structs/AkMIDIPost__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkMIDIPost {
        inline app::AkMIDIPost__Class** type_info() {
            static app::AkMIDIPost__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AkMIDIPost__Class**)(modloader::win::memory::resolve_rva(0x0474A480));
            }
            return cache;
        }
        inline app::AkMIDIPost__Class* get_class() {
            return il2cpp::get_class<app::AkMIDIPost__Class>(type_info(), "", "AkMIDIPost");
        }
        inline app::AkMIDIPost* create() {
            return il2cpp::create_object<app::AkMIDIPost>(get_class());
        }
    } // namespace AkMIDIPost
} // namespace app::classes::types
