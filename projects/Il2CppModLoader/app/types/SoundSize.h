#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundSize {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundSize__Class** type_info;
        inline app::SoundSize__Class* get_class() {
            return il2cpp::get_class<app::SoundSize__Class>(type_info, "", "SoundSize");
        }
        inline app::SoundSize* create() {
            return il2cpp::create_object<app::SoundSize>(get_class());
        }
    } // namespace SoundSize
} // namespace app::classes::types
