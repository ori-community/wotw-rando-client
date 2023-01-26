#pragma once
#include <Modloader/app/structs/XRegistrationToken.h>
#include <Modloader/app/structs/XRegistrationToken__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XRegistrationToken {
        inline app::XRegistrationToken__Class** type_info() {
            static app::XRegistrationToken__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XRegistrationToken__Class**)(modloader::win::memory::resolve_rva(0x047575A8));
            }
            return cache;
        }
        inline app::XRegistrationToken__Class* get_class() {
            return il2cpp::get_class<app::XRegistrationToken__Class>(type_info(), "XGamingRuntime", "XRegistrationToken");
        }
        inline app::XRegistrationToken* create() {
            return il2cpp::create_object<app::XRegistrationToken>(get_class());
        }
    } // namespace XRegistrationToken
} // namespace app::classes::types
