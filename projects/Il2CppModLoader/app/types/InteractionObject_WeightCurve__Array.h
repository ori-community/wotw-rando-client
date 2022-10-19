#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionObject_WeightCurve__Array {
        namespace {
            inline app::InteractionObject_WeightCurve__Array__Class* type_info_ref = nullptr;
        }
        inline app::InteractionObject_WeightCurve__Array__Class** type_info = &type_info_ref;
        inline app::InteractionObject_WeightCurve__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionObject_WeightCurve__Array__Class>(type_info, "RootMotion.FinalIK", "InteractionObject+WeightCurve[]");
        }
        inline app::InteractionObject_WeightCurve__Array* create() {
            return il2cpp::create_object<app::InteractionObject_WeightCurve__Array>(get_class());
        }
    } // namespace InteractionObject_WeightCurve__Array
} // namespace app::classes::types
