#pragma once
#include <Modloader/app/structs/VaryingAmbientSoundProvider.h>
#include <Modloader/app/structs/VaryingAmbientSoundProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VaryingAmbientSoundProvider {
        inline app::VaryingAmbientSoundProvider__Class** type_info() {
            static app::VaryingAmbientSoundProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VaryingAmbientSoundProvider__Class**)(modloader::win::memory::resolve_rva(0x04774648));
            }
            return cache;
        }
        inline app::VaryingAmbientSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::VaryingAmbientSoundProvider__Class>(type_info(), "", "VaryingAmbientSoundProvider");
        }
        inline app::VaryingAmbientSoundProvider* create() {
            return il2cpp::create_object<app::VaryingAmbientSoundProvider>(get_class());
        }
    } // namespace VaryingAmbientSoundProvider
} // namespace app::classes::types
