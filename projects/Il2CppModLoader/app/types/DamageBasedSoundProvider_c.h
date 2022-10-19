#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DamageBasedSoundProvider_c {
        inline app::DamageBasedSoundProvider_c__Class** type_info = (app::DamageBasedSoundProvider_c__Class**)(modloader::win::memory::resolve_rva(0x04729390));
        inline app::DamageBasedSoundProvider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageBasedSoundProvider_c__Class>(type_info, "", "DamageBasedSoundProvider", "<>c");
        }
        inline app::DamageBasedSoundProvider_c* create() {
            return il2cpp::create_object<app::DamageBasedSoundProvider_c>(get_class());
        }
    } // namespace DamageBasedSoundProvider_c
} // namespace app::classes::types
