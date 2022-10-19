#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoundZoneProcessor {
        inline app::SoundZoneProcessor__Class** type_info = (app::SoundZoneProcessor__Class**)(modloader::win::memory::resolve_rva(0x0474F938));
        inline app::SoundZoneProcessor__Class* get_class() {
            return il2cpp::get_class<app::SoundZoneProcessor__Class>(type_info, "", "SoundZoneProcessor");
        }
        inline app::SoundZoneProcessor* create() {
            return il2cpp::create_object<app::SoundZoneProcessor>(get_class());
        }
    } // namespace SoundZoneProcessor
} // namespace app::classes::types
