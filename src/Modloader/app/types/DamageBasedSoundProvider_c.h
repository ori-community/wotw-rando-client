#pragma once
#include <Modloader/app/structs/DamageBasedSoundProvider_c.h>
#include <Modloader/app/structs/DamageBasedSoundProvider_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageBasedSoundProvider_c {
        inline app::DamageBasedSoundProvider_c__Class** type_info() {
            static app::DamageBasedSoundProvider_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageBasedSoundProvider_c__Class**)(modloader::win::memory::resolve_rva(0x04729390));
            }
            return cache;
        }
        inline app::DamageBasedSoundProvider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageBasedSoundProvider_c__Class>(type_info(), "", "DamageBasedSoundProvider", "<>c");
        }
        inline app::DamageBasedSoundProvider_c* create() {
            return il2cpp::create_object<app::DamageBasedSoundProvider_c>(get_class());
        }
    } // namespace DamageBasedSoundProvider_c
} // namespace app::classes::types
