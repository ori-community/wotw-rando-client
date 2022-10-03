#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnalogueInputData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnalogueInputData__Class** type_info;
        inline app::AnalogueInputData__Class* get_class() {
            return il2cpp::get_class<app::AnalogueInputData__Class>(type_info, "", "AnalogueInputData");
        }
        inline app::AnalogueInputData* create() {
            return il2cpp::create_object<app::AnalogueInputData>(get_class());
        }
    } // namespace AnalogueInputData
} // namespace app::classes::types
