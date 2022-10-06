#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SetupStateModifierData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SetupStateModifierData__Class** type_info;
        inline app::SetupStateModifierData__Class* get_class() {
            return il2cpp::get_class<app::SetupStateModifierData__Class>(type_info, "", "SetupStateModifierData");
        }
        inline app::SetupStateModifierData* create() {
            return il2cpp::create_object<app::SetupStateModifierData>(get_class());
        }
        inline app::SetupStateModifierData__Array* create_array(int size) {
            return il2cpp::array_new<app::SetupStateModifierData__Array>(get_class(), size);
        }
        inline app::SetupStateModifierData__Array* create_array(const std::vector<app::SetupStateModifierData*>& items) {
            return il2cpp::array_new<app::SetupStateModifierData__Array>(get_class(), items);
        }
    } // namespace SetupStateModifierData
} // namespace app::classes::types
