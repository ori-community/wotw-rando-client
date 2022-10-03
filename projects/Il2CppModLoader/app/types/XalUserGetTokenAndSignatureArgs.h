#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalUserGetTokenAndSignatureArgs {
        namespace {
            app::XalUserGetTokenAndSignatureArgs__Class* type_info_ref = nullptr;
        }
        app::XalUserGetTokenAndSignatureArgs__Class** type_info = &type_info_ref;
        inline app::XalUserGetTokenAndSignatureArgs__Class* get_class() {
            return il2cpp::get_class<app::XalUserGetTokenAndSignatureArgs__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalUserGetTokenAndSignatureArgs");
        }
        inline app::XalUserGetTokenAndSignatureArgs* create() {
            return il2cpp::create_object<app::XalUserGetTokenAndSignatureArgs>(get_class());
        }
        inline app::XalUserGetTokenAndSignatureArgs__Boxed* box(app::XalUserGetTokenAndSignatureArgs value) {
            return il2cpp::box_value<app::XalUserGetTokenAndSignatureArgs__Boxed>(get_class(), value);
        }
    } // namespace XalUserGetTokenAndSignatureArgs
} // namespace app::classes::types
