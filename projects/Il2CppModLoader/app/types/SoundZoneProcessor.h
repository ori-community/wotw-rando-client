#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundZoneProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundZoneProcessor__Class** type_info;
        inline app::SoundZoneProcessor__Class* get_class() {
            return il2cpp::get_class<app::SoundZoneProcessor__Class>(type_info, "", "SoundZoneProcessor");
        }
        inline app::SoundZoneProcessor* create() {
            return il2cpp::create_object<app::SoundZoneProcessor>(get_class());
        }
    } // namespace SoundZoneProcessor
} // namespace app::classes::types
