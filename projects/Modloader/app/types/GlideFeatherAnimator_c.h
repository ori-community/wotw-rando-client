#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GlideFeatherAnimator_c {
        inline app::GlideFeatherAnimator_c__Class** type_info = (app::GlideFeatherAnimator_c__Class**)(modloader::win::memory::resolve_rva(0x04747F18));
        inline app::GlideFeatherAnimator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GlideFeatherAnimator_c__Class>(type_info, "", "GlideFeatherAnimator", "<>c");
        }
        inline app::GlideFeatherAnimator_c* create() {
            return il2cpp::create_object<app::GlideFeatherAnimator_c>(get_class());
        }
    } // namespace GlideFeatherAnimator_c
} // namespace app::classes::types
