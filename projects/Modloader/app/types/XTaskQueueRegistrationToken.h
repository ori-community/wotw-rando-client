#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XTaskQueueRegistrationToken {
        namespace {
            inline app::XTaskQueueRegistrationToken__Class* type_info_ref = nullptr;
        }
        inline app::XTaskQueueRegistrationToken__Class** type_info = &type_info_ref;
        inline app::XTaskQueueRegistrationToken__Class* get_class() {
            return il2cpp::get_class<app::XTaskQueueRegistrationToken__Class>(type_info, "XGamingRuntime.Interop", "XTaskQueueRegistrationToken");
        }
        inline app::XTaskQueueRegistrationToken* create() {
            return il2cpp::create_object<app::XTaskQueueRegistrationToken>(get_class());
        }
        inline app::XTaskQueueRegistrationToken__Boxed* box(app::XTaskQueueRegistrationToken value) {
            return il2cpp::box_value<app::XTaskQueueRegistrationToken__Boxed>(get_class(), value);
        }
    } // namespace XTaskQueueRegistrationToken
} // namespace app::classes::types
