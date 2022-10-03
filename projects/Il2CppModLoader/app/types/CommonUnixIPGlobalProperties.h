#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CommonUnixIPGlobalProperties {
        namespace {
            app::CommonUnixIPGlobalProperties__Class* type_info_ref = nullptr;
        }
        app::CommonUnixIPGlobalProperties__Class** type_info = &type_info_ref;
        inline app::CommonUnixIPGlobalProperties__Class* get_class() {
            return il2cpp::get_class<app::CommonUnixIPGlobalProperties__Class>(type_info, "System.Net.NetworkInformation", "CommonUnixIPGlobalProperties");
        }
        inline app::CommonUnixIPGlobalProperties* create() {
            return il2cpp::create_object<app::CommonUnixIPGlobalProperties>(get_class());
        }
    } // namespace CommonUnixIPGlobalProperties
} // namespace app::classes::types
