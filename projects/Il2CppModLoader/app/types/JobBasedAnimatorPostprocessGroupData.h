#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JobBasedAnimatorPostprocessGroupData {
        namespace {
            app::JobBasedAnimatorPostprocessGroupData__Class* type_info_ref = nullptr;
        }
        app::JobBasedAnimatorPostprocessGroupData__Class** type_info = &type_info_ref;
        inline app::JobBasedAnimatorPostprocessGroupData__Class* get_class() {
            return il2cpp::get_class<app::JobBasedAnimatorPostprocessGroupData__Class>(type_info, "Moon.Animation", "JobBasedAnimatorPostprocessGroupData");
        }
        inline app::JobBasedAnimatorPostprocessGroupData* create() {
            return il2cpp::create_object<app::JobBasedAnimatorPostprocessGroupData>(get_class());
        }
        inline app::JobBasedAnimatorPostprocessGroupData__Boxed* box(app::JobBasedAnimatorPostprocessGroupData value) {
            return il2cpp::box_value<app::JobBasedAnimatorPostprocessGroupData__Boxed>(get_class(), value);
        }
        inline app::JobBasedAnimatorPostprocessGroupData__Array* create_array(int size) {
            return il2cpp::array_new<app::JobBasedAnimatorPostprocessGroupData__Array>(get_class(), size);
        }
    } // namespace JobBasedAnimatorPostprocessGroupData
} // namespace app::classes::types
