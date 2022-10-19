#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkSoundEnginePINVOKE {
        inline app::AkSoundEnginePINVOKE__Class** type_info = (app::AkSoundEnginePINVOKE__Class**)(modloader::win::memory::resolve_rva(0x0472C908));
        inline app::AkSoundEnginePINVOKE__Class* get_class() {
            return il2cpp::get_class<app::AkSoundEnginePINVOKE__Class>(type_info, "", "AkSoundEnginePINVOKE");
        }
        inline app::AkSoundEnginePINVOKE* create() {
            return il2cpp::create_object<app::AkSoundEnginePINVOKE>(get_class());
        }
    } // namespace AkSoundEnginePINVOKE
} // namespace app::classes::types
