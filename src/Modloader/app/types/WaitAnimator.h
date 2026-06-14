#pragma once
#include <Modloader/app/structs/WaitAnimator.h>
#include <Modloader/app/structs/WaitAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaitAnimator {
        inline app::WaitAnimator__Class** type_info() {
            static app::WaitAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaitAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaitAnimator__Class* get_class() {
            return il2cpp::get_class<app::WaitAnimator__Class>(type_info(), "", "WaitAnimator");
        }
        inline app::WaitAnimator* create() {
            return il2cpp::create_object<app::WaitAnimator>(get_class());
        }
    } // namespace WaitAnimator
} // namespace app::classes::types
