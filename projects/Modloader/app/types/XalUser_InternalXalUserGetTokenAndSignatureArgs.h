#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalUser_InternalXalUserGetTokenAndSignatureArgs {
        namespace {
            inline app::XalUser_InternalXalUserGetTokenAndSignatureArgs__Class* type_info_ref = nullptr;
        }
        inline app::XalUser_InternalXalUserGetTokenAndSignatureArgs__Class** type_info = &type_info_ref;
        inline app::XalUser_InternalXalUserGetTokenAndSignatureArgs__Class* get_class() {
            return il2cpp::get_nested_class<app::XalUser_InternalXalUserGetTokenAndSignatureArgs__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalUser", "InternalXalUserGetTokenAndSignatureArgs");
        }
        inline app::XalUser_InternalXalUserGetTokenAndSignatureArgs* create() {
            return il2cpp::create_object<app::XalUser_InternalXalUserGetTokenAndSignatureArgs>(get_class());
        }
        inline app::XalUser_InternalXalUserGetTokenAndSignatureArgs__Boxed* box(app::XalUser_InternalXalUserGetTokenAndSignatureArgs value) {
            return il2cpp::box_value<app::XalUser_InternalXalUserGetTokenAndSignatureArgs__Boxed>(get_class(), value);
        }
    } // namespace XalUser_InternalXalUserGetTokenAndSignatureArgs
} // namespace app::classes::types
