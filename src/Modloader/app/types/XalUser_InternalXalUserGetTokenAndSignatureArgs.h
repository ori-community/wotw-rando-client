#pragma once
#include <Modloader/app/structs/XalUser_InternalXalUserGetTokenAndSignatureArgs.h>
#include <Modloader/app/structs/XalUser_InternalXalUserGetTokenAndSignatureArgs__Boxed.h>
#include <Modloader/app/structs/XalUser_InternalXalUserGetTokenAndSignatureArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalUser_InternalXalUserGetTokenAndSignatureArgs {
        inline app::XalUser_InternalXalUserGetTokenAndSignatureArgs__Class** type_info() {
            static app::XalUser_InternalXalUserGetTokenAndSignatureArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalUser_InternalXalUserGetTokenAndSignatureArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalUser_InternalXalUserGetTokenAndSignatureArgs__Class* get_class() {
            return il2cpp::get_nested_class<app::XalUser_InternalXalUserGetTokenAndSignatureArgs__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalUser", "InternalXalUserGetTokenAndSignatureArgs");
        }
        inline app::XalUser_InternalXalUserGetTokenAndSignatureArgs* create() {
            return il2cpp::create_object<app::XalUser_InternalXalUserGetTokenAndSignatureArgs>(get_class());
        }
        inline app::XalUser_InternalXalUserGetTokenAndSignatureArgs__Boxed* box(app::XalUser_InternalXalUserGetTokenAndSignatureArgs value) {
            return il2cpp::box_value<app::XalUser_InternalXalUserGetTokenAndSignatureArgs__Boxed>(get_class(), value);
        }
    } // namespace XalUser_InternalXalUserGetTokenAndSignatureArgs
} // namespace app::classes::types
