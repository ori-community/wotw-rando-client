#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionObject_WeightCurve {
        namespace {
            inline app::InteractionObject_WeightCurve__Class* type_info_ref = nullptr;
        }
        inline app::InteractionObject_WeightCurve__Class** type_info = &type_info_ref;
        inline app::InteractionObject_WeightCurve__Class* get_class() {
            return il2cpp::get_nested_class<app::InteractionObject_WeightCurve__Class>(type_info, "RootMotion.FinalIK", "InteractionObject", "WeightCurve");
        }
        inline app::InteractionObject_WeightCurve* create() {
            return il2cpp::create_object<app::InteractionObject_WeightCurve>(get_class());
        }
        inline app::InteractionObject_WeightCurve__Array* create_array(int size) {
            return il2cpp::array_new<app::InteractionObject_WeightCurve__Array>(get_class(), size);
        }
        inline app::InteractionObject_WeightCurve__Array* create_array(const std::vector<app::InteractionObject_WeightCurve*>& items) {
            return il2cpp::array_new<app::InteractionObject_WeightCurve__Array>(get_class(), items);
        }
    } // namespace InteractionObject_WeightCurve
} // namespace app::classes::types
