#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkAudioAPI__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkAudioAPI__Enum__Class** type_info;
        inline app::AkAudioAPI__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkAudioAPI__Enum__Class>(type_info, "", "AkAudioAPI");
        }
        inline app::AkAudioAPI__Enum* create() {
            return il2cpp::create_object<app::AkAudioAPI__Enum>(get_class());
        }
    } // namespace AkAudioAPI__Enum
} // namespace app::classes::types
