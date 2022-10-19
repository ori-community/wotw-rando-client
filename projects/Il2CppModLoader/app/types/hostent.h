#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace hostent {
        namespace {
            inline app::hostent__Class* type_info_ref = nullptr;
        }
        inline app::hostent__Class** type_info = &type_info_ref;
        inline app::hostent__Class* get_class() {
            return il2cpp::get_class<app::hostent__Class>(type_info, "System.Net", "hostent");
        }
        inline app::hostent* create() {
            return il2cpp::create_object<app::hostent>(get_class());
        }
        inline app::hostent__Boxed* box(app::hostent value) {
            return il2cpp::box_value<app::hostent__Boxed>(get_class(), value);
        }
    } // namespace hostent
} // namespace app::classes::types
