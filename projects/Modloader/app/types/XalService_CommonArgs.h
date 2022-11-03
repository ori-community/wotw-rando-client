#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalService_CommonArgs {
        namespace {
            inline app::XalService_CommonArgs__Class* type_info_ref = nullptr;
        }
        inline app::XalService_CommonArgs__Class** type_info = &type_info_ref;
        inline app::XalService_CommonArgs__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_CommonArgs__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "CommonArgs");
        }
        inline app::XalService_CommonArgs* create() {
            return il2cpp::create_object<app::XalService_CommonArgs>(get_class());
        }
        inline app::XalService_CommonArgs__Boxed* box(app::XalService_CommonArgs value) {
            return il2cpp::box_value<app::XalService_CommonArgs__Boxed>(get_class(), value);
        }
    } // namespace XalService_CommonArgs
} // namespace app::classes::types
