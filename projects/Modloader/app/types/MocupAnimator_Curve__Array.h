#pragma once
#include <Modloader/app/structs/MocupAnimator_Curve__Array.h>
#include <Modloader/app/structs/MocupAnimator_Curve__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MocupAnimator_Curve__Array {
        inline app::MocupAnimator_Curve__Array__Class** type_info() {
            static app::MocupAnimator_Curve__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MocupAnimator_Curve__Array__Class**)(modloader::win::memory::resolve_rva(0x0472B828));
            }
            return cache;
        }
        inline app::MocupAnimator_Curve__Array__Class* get_class() {
            return il2cpp::get_class<app::MocupAnimator_Curve__Array__Class>(type_info(), "", "MocupAnimator+Curve[]");
        }
        inline app::MocupAnimator_Curve__Array* create() {
            return il2cpp::create_object<app::MocupAnimator_Curve__Array>(get_class());
        }
    } // namespace MocupAnimator_Curve__Array
} // namespace app::classes::types
