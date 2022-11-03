#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CollapsingPlatformAnimator_c {
        inline app::CollapsingPlatformAnimator_c__Class** type_info = (app::CollapsingPlatformAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x0477BEF0));
        inline app::CollapsingPlatformAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CollapsingPlatformAnimator_c__Class>(type_info, "", "CollapsingPlatformAnimator", "<>c");
        }
        inline app::CollapsingPlatformAnimator_c* create() {
            return il2cpp::create_object<app::CollapsingPlatformAnimator_c>(get_class());
        }
    } // namespace CollapsingPlatformAnimator_c
} // namespace app::classes::types
