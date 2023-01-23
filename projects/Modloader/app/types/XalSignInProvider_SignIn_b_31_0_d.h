#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XalSignInProvider_SignIn_b_31_0_d__Class.h>
#include <Modloader/app/structs/XalSignInProvider_SignIn_b_31_0_d.h>
#include <Modloader/app/structs/XalSignInProvider_SignIn_b_31_0_d__Boxed.h>

namespace app::classes::types {
    namespace XalSignInProvider_SignIn_b_31_0_d {
        namespace {
            inline app::XalSignInProvider_SignIn_b_31_0_d__Class* type_info_ref = nullptr;
        }
        inline app::XalSignInProvider_SignIn_b_31_0_d__Class** type_info = &type_info_ref;
        inline app::XalSignInProvider_SignIn_b_31_0_d__Class* get_class() {
            return il2cpp::get_nested_class<app::XalSignInProvider_SignIn_b_31_0_d__Class>(type_info, "SystemIntegration", "XalSignInProvider", "<<SignIn>b__31_0>d");
        }
        inline app::XalSignInProvider_SignIn_b_31_0_d* create() {
            return il2cpp::create_object<app::XalSignInProvider_SignIn_b_31_0_d>(get_class());
        }
        inline app::XalSignInProvider_SignIn_b_31_0_d__Boxed* box(app::XalSignInProvider_SignIn_b_31_0_d value) {
            return il2cpp::box_value<app::XalSignInProvider_SignIn_b_31_0_d__Boxed>(get_class(), value);
        }
    } // namespace XalSignInProvider_SignIn_b_31_0_d
} // namespace app::classes::types
