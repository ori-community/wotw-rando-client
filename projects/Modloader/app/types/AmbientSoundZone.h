#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AmbientSoundZone {
        inline app::AmbientSoundZone__Class** type_info = (app::AmbientSoundZone__Class**)(modloader::win::memory::resolve_rva(0x04758350));
        inline app::AmbientSoundZone__Class* get_class() {
            return il2cpp::get_class<app::AmbientSoundZone__Class>(type_info, "", "AmbientSoundZone");
        }
        inline app::AmbientSoundZone* create() {
            return il2cpp::create_object<app::AmbientSoundZone>(get_class());
        }
    } // namespace AmbientSoundZone
} // namespace app::classes::types
