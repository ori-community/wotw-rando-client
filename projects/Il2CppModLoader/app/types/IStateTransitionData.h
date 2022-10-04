#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IStateTransitionData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IStateTransitionData__Class** type_info;
        inline app::IStateTransitionData__Class* get_class() {
            return il2cpp::get_class<app::IStateTransitionData__Class>(type_info, "", "IStateTransitionData");
        }
        inline app::IStateTransitionData* create() {
            return il2cpp::create_object<app::IStateTransitionData>(get_class());
        }
    } // namespace IStateTransitionData
} // namespace app::classes::types
