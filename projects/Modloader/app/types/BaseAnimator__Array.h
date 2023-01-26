#pragma once
#include <Modloader/app/structs/BaseAnimator__Array.h>
#include <Modloader/app/structs/BaseAnimator__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaseAnimator__Array {
        inline app::BaseAnimator__Array__Class** type_info() {
            static app::BaseAnimator__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BaseAnimator__Array__Class**)(modloader::win::memory::resolve_rva(0x0474DEA8));
            }
            return cache;
        }
        inline app::BaseAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::BaseAnimator__Array__Class>(type_info(), "", "BaseAnimator[]");
        }
        inline app::BaseAnimator__Array* create() {
            return il2cpp::create_object<app::BaseAnimator__Array>(get_class());
        }
    } // namespace BaseAnimator__Array
} // namespace app::classes::types
