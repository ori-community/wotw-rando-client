#pragma once
#include <Modloader/app/structs/XboxUser.h>
#include <Modloader/app/structs/XboxUser__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XboxUser {
        inline app::XboxUser__Class** type_info() {
            static app::XboxUser__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XboxUser__Class**)(modloader::win::memory::resolve_rva(0x04728020));
            }
            return cache;
        }
        inline app::XboxUser__Class* get_class() {
            return il2cpp::get_class<app::XboxUser__Class>(type_info(), "SystemIntegration.SignIn.User", "XboxUser");
        }
        inline app::XboxUser* create() {
            return il2cpp::create_object<app::XboxUser>(get_class());
        }
    } // namespace XboxUser
} // namespace app::classes::types
