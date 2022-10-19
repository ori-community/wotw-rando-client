#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MocupAnimator_Curve__Array {
        inline app::MocupAnimator_Curve__Array__Class** type_info = (app::MocupAnimator_Curve__Array__Class**)(modloader::win::memory::resolve_rva(0x0472B828));
        inline app::MocupAnimator_Curve__Array__Class* get_class() {
            return il2cpp::get_class<app::MocupAnimator_Curve__Array__Class>(type_info, "", "MocupAnimator+Curve[]");
        }
        inline app::MocupAnimator_Curve__Array* create() {
            return il2cpp::create_object<app::MocupAnimator_Curve__Array>(get_class());
        }
    } // namespace MocupAnimator_Curve__Array
} // namespace app::classes::types
