#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberStateVolitileOverrideAnimator__Array {
        namespace {
            app::UberStateVolitileOverrideAnimator__Array__Class* type_info_ref = nullptr;
        }
        app::UberStateVolitileOverrideAnimator__Array__Class** type_info = &type_info_ref;
        inline app::UberStateVolitileOverrideAnimator__Array__Class* get_class() {
            return il2cpp::get_class<app::UberStateVolitileOverrideAnimator__Array__Class>(type_info, "Moon.Timeline", "UberStateVolitileOverrideAnimator[]");
        }
        inline app::UberStateVolitileOverrideAnimator__Array* create() {
            return il2cpp::create_object<app::UberStateVolitileOverrideAnimator__Array>(get_class());
        }
    } // namespace UberStateVolitileOverrideAnimator__Array
} // namespace app::classes::types
