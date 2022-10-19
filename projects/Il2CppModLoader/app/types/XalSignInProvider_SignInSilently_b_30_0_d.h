#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalSignInProvider_SignInSilently_b_30_0_d {
        namespace {
            inline app::XalSignInProvider_SignInSilently_b_30_0_d__Class* type_info_ref = nullptr;
        }
        inline app::XalSignInProvider_SignInSilently_b_30_0_d__Class** type_info = &type_info_ref;
        inline app::XalSignInProvider_SignInSilently_b_30_0_d__Class* get_class() {
            return il2cpp::get_nested_class<app::XalSignInProvider_SignInSilently_b_30_0_d__Class>(type_info, "SystemIntegration", "XalSignInProvider", "<<SignInSilently>b__30_0>d");
        }
        inline app::XalSignInProvider_SignInSilently_b_30_0_d* create() {
            return il2cpp::create_object<app::XalSignInProvider_SignInSilently_b_30_0_d>(get_class());
        }
        inline app::XalSignInProvider_SignInSilently_b_30_0_d__Boxed* box(app::XalSignInProvider_SignInSilently_b_30_0_d value) {
            return il2cpp::box_value<app::XalSignInProvider_SignInSilently_b_30_0_d__Boxed>(get_class(), value);
        }
    } // namespace XalSignInProvider_SignInSilently_b_30_0_d
} // namespace app::classes::types
