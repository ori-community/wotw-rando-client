#pragma once
#include <Modloader/app/structs/ActivateDamageReceiverAnimator.h>
#include <Modloader/app/structs/ActivateDamageReceiverAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivateDamageReceiverAnimator {
        inline app::ActivateDamageReceiverAnimator__Class** type_info() {
            static app::ActivateDamageReceiverAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivateDamageReceiverAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivateDamageReceiverAnimator__Class* get_class() {
            return il2cpp::get_class<app::ActivateDamageReceiverAnimator__Class>(type_info(), "", "ActivateDamageReceiverAnimator");
        }
        inline app::ActivateDamageReceiverAnimator* create() {
            return il2cpp::create_object<app::ActivateDamageReceiverAnimator>(get_class());
        }
    } // namespace ActivateDamageReceiverAnimator
} // namespace app::classes::types
