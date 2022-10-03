#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReplayValidatorData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ReplayValidatorData__Class** type_info;
        inline app::ReplayValidatorData__Class* get_class() {
            return il2cpp::get_class<app::ReplayValidatorData__Class>(type_info, "Moon.Race", "ReplayValidatorData");
        }
        inline app::ReplayValidatorData* create() {
            return il2cpp::create_object<app::ReplayValidatorData>(get_class());
        }
    } // namespace ReplayValidatorData
} // namespace app::classes::types
