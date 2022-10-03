#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkMIDIPost {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkMIDIPost__Class** type_info;
        inline app::AkMIDIPost__Class* get_class() {
            return il2cpp::get_class<app::AkMIDIPost__Class>(type_info, "", "AkMIDIPost");
        }
        inline app::AkMIDIPost* create() {
            return il2cpp::create_object<app::AkMIDIPost>(get_class());
        }
    } // namespace AkMIDIPost
} // namespace app::classes::types
