#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace JobBasedAnimatorPostprocessGroupData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::JobBasedAnimatorPostprocessGroupData__Array__Class** type_info;
        inline app::JobBasedAnimatorPostprocessGroupData__Array__Class* get_class() {
            return il2cpp::get_class<app::JobBasedAnimatorPostprocessGroupData__Array__Class>(type_info, "Moon.Animation", "JobBasedAnimatorPostprocessGroupData[]");
        }
        inline app::JobBasedAnimatorPostprocessGroupData__Array* create() {
            return il2cpp::create_object<app::JobBasedAnimatorPostprocessGroupData__Array>(get_class());
        }
    } // namespace JobBasedAnimatorPostprocessGroupData__Array
} // namespace app::classes::types
