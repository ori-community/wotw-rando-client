#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JobBasedAnimatorPostprocessGroupData__Array {
        inline app::JobBasedAnimatorPostprocessGroupData__Array__Class** type_info = (app::JobBasedAnimatorPostprocessGroupData__Array__Class**)(modloader::win::memory::resolve_rva(0x04730E10));
        inline app::JobBasedAnimatorPostprocessGroupData__Array__Class* get_class() {
            return il2cpp::get_class<app::JobBasedAnimatorPostprocessGroupData__Array__Class>(type_info, "Moon.Animation", "JobBasedAnimatorPostprocessGroupData[]");
        }
        inline app::JobBasedAnimatorPostprocessGroupData__Array* create() {
            return il2cpp::create_object<app::JobBasedAnimatorPostprocessGroupData__Array>(get_class());
        }
    } // namespace JobBasedAnimatorPostprocessGroupData__Array
} // namespace app::classes::types
