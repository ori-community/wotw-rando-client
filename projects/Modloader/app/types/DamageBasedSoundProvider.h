#pragma once
#include <Modloader/app/structs/DamageBasedSoundProvider.h>
#include <Modloader/app/structs/DamageBasedSoundProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageBasedSoundProvider {
        inline app::DamageBasedSoundProvider__Class** type_info() {
            static app::DamageBasedSoundProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageBasedSoundProvider__Class**)(modloader::win::memory::resolve_rva(0x04708F28));
            }
            return cache;
        }
        inline app::DamageBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::DamageBasedSoundProvider__Class>(type_info(), "", "DamageBasedSoundProvider");
        }
        inline app::DamageBasedSoundProvider* create() {
            return il2cpp::create_object<app::DamageBasedSoundProvider>(get_class());
        }
    } // namespace DamageBasedSoundProvider
} // namespace app::classes::types
