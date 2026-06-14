#pragma once
#include <Modloader/app/structs/XTaskQueueRegistrationToken.h>
#include <Modloader/app/structs/XTaskQueueRegistrationToken__Boxed.h>
#include <Modloader/app/structs/XTaskQueueRegistrationToken__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XTaskQueueRegistrationToken {
        inline app::XTaskQueueRegistrationToken__Class** type_info() {
            static app::XTaskQueueRegistrationToken__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XTaskQueueRegistrationToken__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XTaskQueueRegistrationToken__Class* get_class() {
            return il2cpp::get_class<app::XTaskQueueRegistrationToken__Class>(type_info(), "XGamingRuntime.Interop", "XTaskQueueRegistrationToken");
        }
        inline app::XTaskQueueRegistrationToken* create() {
            return il2cpp::create_object<app::XTaskQueueRegistrationToken>(get_class());
        }
        inline app::XTaskQueueRegistrationToken__Boxed* box(app::XTaskQueueRegistrationToken value) {
            return il2cpp::box_value<app::XTaskQueueRegistrationToken__Boxed>(get_class(), value);
        }
    } // namespace XTaskQueueRegistrationToken
} // namespace app::classes::types
