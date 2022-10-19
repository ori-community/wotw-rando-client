#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageBasedSoundProvider {
        inline app::DamageBasedSoundProvider__Class** type_info = (app::DamageBasedSoundProvider__Class**)(modloader::win::memory::resolve_rva(0x04708F28));
        inline app::DamageBasedSoundProvider__Class* get_class() {
            return il2cpp::get_class<app::DamageBasedSoundProvider__Class>(type_info, "", "DamageBasedSoundProvider");
        }
        inline app::DamageBasedSoundProvider* create() {
            return il2cpp::create_object<app::DamageBasedSoundProvider>(get_class());
        }
    } // namespace DamageBasedSoundProvider
} // namespace app::classes::types
