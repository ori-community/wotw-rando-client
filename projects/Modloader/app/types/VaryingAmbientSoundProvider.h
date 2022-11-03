#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VaryingAmbientSoundProvider {
        inline app::VaryingAmbientSoundProvider__Class** type_info = (app::VaryingAmbientSoundProvider__Class**)(modloader::win::memory::resolve_rva(0x04774648));
        inline app::VaryingAmbientSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::VaryingAmbientSoundProvider__Class>(type_info, "", "VaryingAmbientSoundProvider");
        }
        inline app::VaryingAmbientSoundProvider* create() {
            return il2cpp::create_object<app::VaryingAmbientSoundProvider>(get_class());
        }
    } // namespace VaryingAmbientSoundProvider
} // namespace app::classes::types
