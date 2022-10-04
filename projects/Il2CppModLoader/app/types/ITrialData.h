#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITrialData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITrialData__Class** type_info;
        inline app::ITrialData__Class* get_class() {
            return il2cpp::get_class<app::ITrialData__Class>(type_info, "Moon.Race", "ITrialData");
        }
        inline app::ITrialData* create() {
            return il2cpp::create_object<app::ITrialData>(get_class());
        }
    } // namespace ITrialData
} // namespace app::classes::types
