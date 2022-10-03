#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberInteractionManager_InteractionCurveType__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberInteractionManager_InteractionCurveType__Enum__Class** type_info;
        inline app::UberInteractionManager_InteractionCurveType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberInteractionManager_InteractionCurveType__Enum__Class>(type_info, "", "UberInteractionManager", "InteractionCurveType");
        }
        inline app::UberInteractionManager_InteractionCurveType__Enum* create() {
            return il2cpp::create_object<app::UberInteractionManager_InteractionCurveType__Enum>(get_class());
        }
    } // namespace UberInteractionManager_InteractionCurveType__Enum
} // namespace app::classes::types
