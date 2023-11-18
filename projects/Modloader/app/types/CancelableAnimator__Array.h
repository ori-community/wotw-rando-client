#pragma once
#include <Modloader/app/structs/CancelableAnimator__Array.h>
#include <Modloader/app/structs/CancelableAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CancelableAnimator__Array {
        inline app::CancelableAnimator__Array__Class** type_info() {
            static app::CancelableAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CancelableAnimator__Array__Class**)(modloader::win::memory::resolve_rva(0x0472FFD0));
            }
            return cache;
        }
        inline app::CancelableAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::CancelableAnimator__Array__Class>(type_info(), "Moon.Timeline", "CancelableAnimator[]");
        }
        inline app::CancelableAnimator__Array* create() {
            return il2cpp::create_object<app::CancelableAnimator__Array>(get_class());
        }
    } // namespace CancelableAnimator__Array
} // namespace app::classes::types
