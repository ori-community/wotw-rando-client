#pragma once
#include <Modloader/app/structs/SeinNaruComboAnimator.h>
#include <Modloader/app/structs/SeinNaruComboAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinNaruComboAnimator {
        inline app::SeinNaruComboAnimator__Class** type_info() {
            static app::SeinNaruComboAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinNaruComboAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinNaruComboAnimator__Class* get_class() {
            return il2cpp::get_class<app::SeinNaruComboAnimator__Class>(type_info(), "", "SeinNaruComboAnimator");
        }
        inline app::SeinNaruComboAnimator* create() {
            return il2cpp::create_object<app::SeinNaruComboAnimator>(get_class());
        }
    } // namespace SeinNaruComboAnimator
} // namespace app::classes::types
