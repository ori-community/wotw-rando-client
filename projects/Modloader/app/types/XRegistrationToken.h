#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XRegistrationToken__Class.h>
#include <Modloader/app/structs/XRegistrationToken.h>

namespace app::classes::types {
    namespace XRegistrationToken {
        inline app::XRegistrationToken__Class** type_info = (app::XRegistrationToken__Class**)(modloader::win::memory::resolve_rva(0x047575A8));
        inline app::XRegistrationToken__Class* get_class() {
            return il2cpp::get_class<app::XRegistrationToken__Class>(type_info, "XGamingRuntime", "XRegistrationToken");
        }
        inline app::XRegistrationToken* create() {
            return il2cpp::create_object<app::XRegistrationToken>(get_class());
        }
    } // namespace XRegistrationToken
} // namespace app::classes::types
