#pragma once
#include <Modloader/app/structs/UnparentTrailRenderer_ResetTrail_d_12.h>
#include <Modloader/app/structs/UnparentTrailRenderer_ResetTrail_d_12__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnparentTrailRenderer_ResetTrail_d_12 {
        inline app::UnparentTrailRenderer_ResetTrail_d_12__Class** type_info() {
            static app::UnparentTrailRenderer_ResetTrail_d_12__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnparentTrailRenderer_ResetTrail_d_12__Class**)(modloader::win::memory::resolve_rva(0x04753BE0));
            }
            return cache;
        }
        inline app::UnparentTrailRenderer_ResetTrail_d_12__Class* get_class() {
            return il2cpp::get_nested_class<app::UnparentTrailRenderer_ResetTrail_d_12__Class>(type_info(), "", "UnparentTrailRenderer", "<ResetTrail>d__12");
        }
        inline app::UnparentTrailRenderer_ResetTrail_d_12* create() {
            return il2cpp::create_object<app::UnparentTrailRenderer_ResetTrail_d_12>(get_class());
        }
    } // namespace UnparentTrailRenderer_ResetTrail_d_12
} // namespace app::classes::types
