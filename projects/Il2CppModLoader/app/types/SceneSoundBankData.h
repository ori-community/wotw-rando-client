#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneSoundBankData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneSoundBankData__Class** type_info;
        inline app::SceneSoundBankData__Class* get_class() {
            return il2cpp::get_class<app::SceneSoundBankData__Class>(type_info, "Moon.Wwise", "SceneSoundBankData");
        }
        inline app::SceneSoundBankData* create() {
            return il2cpp::create_object<app::SceneSoundBankData>(get_class());
        }
    } // namespace SceneSoundBankData
} // namespace app::classes::types
