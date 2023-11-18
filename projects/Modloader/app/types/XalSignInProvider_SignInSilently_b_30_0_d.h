#pragma once
#include <Modloader/app/structs/XalSignInProvider_SignInSilently_b_30_0_d.h>
#include <Modloader/app/structs/XalSignInProvider_SignInSilently_b_30_0_d__Boxed.h>
#include <Modloader/app/structs/XalSignInProvider_SignInSilently_b_30_0_d__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalSignInProvider_SignInSilently_b_30_0_d {
        inline app::XalSignInProvider_SignInSilently_b_30_0_d__Class** type_info() {
            static app::XalSignInProvider_SignInSilently_b_30_0_d__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalSignInProvider_SignInSilently_b_30_0_d__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalSignInProvider_SignInSilently_b_30_0_d__Class* get_class() {
            return il2cpp::get_nested_class<app::XalSignInProvider_SignInSilently_b_30_0_d__Class>(type_info(), "SystemIntegration", "XalSignInProvider", "<<SignInSilently>b__30_0>d");
        }
        inline app::XalSignInProvider_SignInSilently_b_30_0_d* create() {
            return il2cpp::create_object<app::XalSignInProvider_SignInSilently_b_30_0_d>(get_class());
        }
        inline app::XalSignInProvider_SignInSilently_b_30_0_d__Boxed* box(app::XalSignInProvider_SignInSilently_b_30_0_d value) {
            return il2cpp::box_value<app::XalSignInProvider_SignInSilently_b_30_0_d__Boxed>(get_class(), value);
        }
    } // namespace XalSignInProvider_SignInSilently_b_30_0_d
} // namespace app::classes::types
