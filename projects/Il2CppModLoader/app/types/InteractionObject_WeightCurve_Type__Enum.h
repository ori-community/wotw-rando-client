#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InteractionObject_WeightCurve_Type__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InteractionObject_WeightCurve_Type__Enum__Class** type_info;
        inline app::InteractionObject_WeightCurve_Type__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionObject_WeightCurve_Type__Enum__Class>(type_info, "RootMotion.FinalIK", "InteractionObject+WeightCurve", "Type");
        }
        inline app::InteractionObject_WeightCurve_Type__Enum* create() {
            return il2cpp::create_object<app::InteractionObject_WeightCurve_Type__Enum>(get_class());
        }
    } // namespace InteractionObject_WeightCurve_Type__Enum
} // namespace app::classes::types
