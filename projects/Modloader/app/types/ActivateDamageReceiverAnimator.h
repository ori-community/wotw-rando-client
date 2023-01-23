#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ActivateDamageReceiverAnimator__Class.h>
#include <Modloader/app/structs/ActivateDamageReceiverAnimator.h>

namespace app::classes::types {
    namespace ActivateDamageReceiverAnimator {
        namespace {
            inline app::ActivateDamageReceiverAnimator__Class* type_info_ref = nullptr;
        }
        inline app::ActivateDamageReceiverAnimator__Class** type_info = &type_info_ref;
        inline app::ActivateDamageReceiverAnimator__Class* get_class() {
            return il2cpp::get_class<app::ActivateDamageReceiverAnimator__Class>(type_info, "", "ActivateDamageReceiverAnimator");
        }
        inline app::ActivateDamageReceiverAnimator* create() {
            return il2cpp::create_object<app::ActivateDamageReceiverAnimator>(get_class());
        }
    } // namespace ActivateDamageReceiverAnimator
} // namespace app::classes::types
