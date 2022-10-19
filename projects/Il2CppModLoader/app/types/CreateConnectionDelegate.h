#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CreateConnectionDelegate {
        namespace {
            inline app::CreateConnectionDelegate__Class* type_info_ref = nullptr;
        }
        inline app::CreateConnectionDelegate__Class** type_info = &type_info_ref;
        inline app::CreateConnectionDelegate__Class* get_class() {
            return il2cpp::get_class<app::CreateConnectionDelegate__Class>(type_info, "System.Net", "CreateConnectionDelegate");
        }
        inline app::CreateConnectionDelegate* create() {
            return il2cpp::create_object<app::CreateConnectionDelegate>(get_class());
        }
    } // namespace CreateConnectionDelegate
} // namespace app::classes::types
