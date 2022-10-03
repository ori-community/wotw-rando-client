#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinHold_ThrowAnimationSet__Array {
        namespace {
            app::SeinHold_ThrowAnimationSet__Array__Class* type_info_ref = nullptr;
        }
        app::SeinHold_ThrowAnimationSet__Array__Class** type_info = &type_info_ref;
        inline app::SeinHold_ThrowAnimationSet__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinHold_ThrowAnimationSet__Array__Class>(type_info, "", "SeinHold+ThrowAnimationSet[]");
        }
        inline app::SeinHold_ThrowAnimationSet__Array* create() {
            return il2cpp::create_object<app::SeinHold_ThrowAnimationSet__Array>(get_class());
        }
    } // namespace SeinHold_ThrowAnimationSet__Array
} // namespace app::classes::types
