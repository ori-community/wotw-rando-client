#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WindowsInstallationType__Enum {
        namespace {
            app::WindowsInstallationType__Enum__Class* type_info_ref = nullptr;
        }
        app::WindowsInstallationType__Enum__Class** type_info = &type_info_ref;
        inline app::WindowsInstallationType__Enum__Class* get_class() {
            return il2cpp::get_class<app::WindowsInstallationType__Enum__Class>(type_info, "System.Net", "WindowsInstallationType");
        }
        inline app::WindowsInstallationType__Enum* create() {
            return il2cpp::create_object<app::WindowsInstallationType__Enum>(get_class());
        }
    } // namespace WindowsInstallationType__Enum
} // namespace app::classes::types
