#pragma once
#include <Modloader/app/structs/JobBasedAnimatorPostprocessGroupData__Array.h>
#include <Modloader/app/structs/JobBasedAnimatorPostprocessGroupData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JobBasedAnimatorPostprocessGroupData__Array {
        inline app::JobBasedAnimatorPostprocessGroupData__Array__Class** type_info() {
            static app::JobBasedAnimatorPostprocessGroupData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JobBasedAnimatorPostprocessGroupData__Array__Class**)(modloader::win::memory::resolve_rva(0x04730E10));
            }
            return cache;
        }
        inline app::JobBasedAnimatorPostprocessGroupData__Array__Class* get_class() {
            return il2cpp::get_class<app::JobBasedAnimatorPostprocessGroupData__Array__Class>(type_info(), "Moon.Animation", "JobBasedAnimatorPostprocessGroupData[]");
        }
        inline app::JobBasedAnimatorPostprocessGroupData__Array* create() {
            return il2cpp::create_object<app::JobBasedAnimatorPostprocessGroupData__Array>(get_class());
        }
    } // namespace JobBasedAnimatorPostprocessGroupData__Array
} // namespace app::classes::types
