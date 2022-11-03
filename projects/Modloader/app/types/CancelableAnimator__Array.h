#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CancelableAnimator__Array {
        inline app::CancelableAnimator__Array__Class** type_info = (app::CancelableAnimator__Array__Class**)(modloader::win::memory::resolve_rva(0x0472FFD0));
        inline app::CancelableAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::CancelableAnimator__Array__Class>(type_info, "Moon.Timeline", "CancelableAnimator[]");
        }
        inline app::CancelableAnimator__Array* create() {
            return il2cpp::create_object<app::CancelableAnimator__Array>(get_class());
        }
    } // namespace CancelableAnimator__Array
} // namespace app::classes::types
