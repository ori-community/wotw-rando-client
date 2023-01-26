#pragma once
#include <Modloader/app/structs/ServerLimitedLifetime.h>
#include <Modloader/app/structs/ServerLimitedLifetime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerLimitedLifetime {
        inline app::ServerLimitedLifetime__Class** type_info() {
            static app::ServerLimitedLifetime__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ServerLimitedLifetime__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ServerLimitedLifetime__Class* get_class() {
            return il2cpp::get_class<app::ServerLimitedLifetime__Class>(type_info(), "", "ServerLimitedLifetime");
        }
        inline app::ServerLimitedLifetime* create() {
            return il2cpp::create_object<app::ServerLimitedLifetime>(get_class());
        }
    } // namespace ServerLimitedLifetime
} // namespace app::classes::types
