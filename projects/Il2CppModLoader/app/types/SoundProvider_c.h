#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundProvider_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundProvider_c__Class** type_info;
        inline app::SoundProvider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SoundProvider_c__Class>(type_info, "", "SoundProvider", "<>c");
        }
        inline app::SoundProvider_c* create() {
            return il2cpp::create_object<app::SoundProvider_c>(get_class());
        }
    } // namespace SoundProvider_c
} // namespace app::classes::types
