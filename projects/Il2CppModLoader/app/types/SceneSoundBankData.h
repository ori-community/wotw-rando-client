#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneSoundBankData {
        inline app::SceneSoundBankData__Class** type_info = (app::SceneSoundBankData__Class**)(modloader::win::memory::resolve_rva(0x0478DD10));
        inline app::SceneSoundBankData__Class* get_class() {
            return il2cpp::get_class<app::SceneSoundBankData__Class>(type_info, "Moon.Wwise", "SceneSoundBankData");
        }
        inline app::SceneSoundBankData* create() {
            return il2cpp::create_object<app::SceneSoundBankData>(get_class());
        }
    } // namespace SceneSoundBankData
} // namespace app::classes::types
