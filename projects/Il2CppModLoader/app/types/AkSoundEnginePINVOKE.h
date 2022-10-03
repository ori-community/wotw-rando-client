#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkSoundEnginePINVOKE {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkSoundEnginePINVOKE__Class** type_info;
        inline app::AkSoundEnginePINVOKE__Class* get_class() {
            return il2cpp::get_class<app::AkSoundEnginePINVOKE__Class>(type_info, "", "AkSoundEnginePINVOKE");
        }
        inline app::AkSoundEnginePINVOKE* create() {
            return il2cpp::create_object<app::AkSoundEnginePINVOKE>(get_class());
        }
    } // namespace AkSoundEnginePINVOKE
} // namespace app::classes::types
