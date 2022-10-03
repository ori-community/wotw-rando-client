#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinNaruComboAnimator {
        namespace {
            app::SeinNaruComboAnimator__Class* type_info_ref = nullptr;
        }
        app::SeinNaruComboAnimator__Class** type_info = &type_info_ref;
        inline app::SeinNaruComboAnimator__Class* get_class() {
            return il2cpp::get_class<app::SeinNaruComboAnimator__Class>(type_info, "", "SeinNaruComboAnimator");
        }
        inline app::SeinNaruComboAnimator* create() {
            return il2cpp::create_object<app::SeinNaruComboAnimator>(get_class());
        }
    } // namespace SeinNaruComboAnimator
} // namespace app::classes::types
