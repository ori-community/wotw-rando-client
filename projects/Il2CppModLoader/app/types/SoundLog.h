#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SoundLog {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SoundLog__Class** type_info;
        inline app::SoundLog__Class* get_class() {
            return il2cpp::get_class<app::SoundLog__Class>(type_info, "", "SoundLog");
        }
        inline app::SoundLog* create() {
            return il2cpp::create_object<app::SoundLog>(get_class());
        }
    } // namespace SoundLog
} // namespace app::classes::types
