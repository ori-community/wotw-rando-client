#pragma once
#include <Modloader/app/structs/XalUserGetTokenAndSignatureArgs.h>
#include <Modloader/app/structs/XalUserGetTokenAndSignatureArgs__Boxed.h>
#include <Modloader/app/structs/XalUserGetTokenAndSignatureArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalUserGetTokenAndSignatureArgs {
        inline app::XalUserGetTokenAndSignatureArgs__Class** type_info() {
            static app::XalUserGetTokenAndSignatureArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalUserGetTokenAndSignatureArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalUserGetTokenAndSignatureArgs__Class* get_class() {
            return il2cpp::get_class<app::XalUserGetTokenAndSignatureArgs__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalUserGetTokenAndSignatureArgs");
        }
        inline app::XalUserGetTokenAndSignatureArgs* create() {
            return il2cpp::create_object<app::XalUserGetTokenAndSignatureArgs>(get_class());
        }
        inline app::XalUserGetTokenAndSignatureArgs__Boxed* box(app::XalUserGetTokenAndSignatureArgs value) {
            return il2cpp::box_value<app::XalUserGetTokenAndSignatureArgs__Boxed>(get_class(), value);
        }
    } // namespace XalUserGetTokenAndSignatureArgs
} // namespace app::classes::types
