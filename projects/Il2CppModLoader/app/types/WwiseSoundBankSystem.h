#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WwiseSoundBankSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WwiseSoundBankSystem__Class** type_info;
        inline app::WwiseSoundBankSystem__Class* get_class() {
            return il2cpp::get_class<app::WwiseSoundBankSystem__Class>(type_info, "Moon.Wwise", "WwiseSoundBankSystem");
        }
        inline app::WwiseSoundBankSystem* create() {
            return il2cpp::create_object<app::WwiseSoundBankSystem>(get_class());
        }
    } // namespace WwiseSoundBankSystem
} // namespace app::classes::types
