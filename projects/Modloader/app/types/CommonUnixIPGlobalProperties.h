#pragma once
#include <Modloader/app/structs/CommonUnixIPGlobalProperties.h>
#include <Modloader/app/structs/CommonUnixIPGlobalProperties__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CommonUnixIPGlobalProperties {
        inline app::CommonUnixIPGlobalProperties__Class** type_info() {
            static app::CommonUnixIPGlobalProperties__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CommonUnixIPGlobalProperties__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CommonUnixIPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::CommonUnixIPGlobalProperties__Class>(type_info(), "System.Net.NetworkInformation", "CommonUnixIPGlobalProperties");
        }
        inline app::CommonUnixIPGlobalProperties* create() {
            return il2cpp::create_object<app::CommonUnixIPGlobalProperties>(get_class());
        }
    } // namespace CommonUnixIPGlobalProperties
} // namespace app::classes::types
