#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ActivateDamageReceiverAnimator {
        namespace {
            app::ActivateDamageReceiverAnimator__Class* type_info_ref = nullptr;
        }
        app::ActivateDamageReceiverAnimator__Class** type_info = &type_info_ref;
        inline app::ActivateDamageReceiverAnimator__Class* get_class() {
            return il2cpp::get_class<app::ActivateDamageReceiverAnimator__Class>(type_info, "", "ActivateDamageReceiverAnimator");
        }
        inline app::ActivateDamageReceiverAnimator* create() {
            return il2cpp::create_object<app::ActivateDamageReceiverAnimator>(get_class());
        }
    } // namespace ActivateDamageReceiverAnimator
} // namespace app::classes::types
