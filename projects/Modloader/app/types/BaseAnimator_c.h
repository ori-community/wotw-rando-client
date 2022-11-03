#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BaseAnimator_c {
        inline app::BaseAnimator_c__Class** type_info = (app::BaseAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x04718588));
        inline app::BaseAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BaseAnimator_c__Class>(type_info, "", "BaseAnimator", "<>c");
        }
        inline app::BaseAnimator_c* create() {
            return il2cpp::create_object<app::BaseAnimator_c>(get_class());
        }
    } // namespace BaseAnimator_c
} // namespace app::classes::types
