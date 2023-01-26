#pragma once
#include <Modloader/app/structs/XalService_CommonArgs.h>
#include <Modloader/app/structs/XalService_CommonArgs__Boxed.h>
#include <Modloader/app/structs/XalService_CommonArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalService_CommonArgs {
        inline app::XalService_CommonArgs__Class** type_info() {
            static app::XalService_CommonArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalService_CommonArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalService_CommonArgs__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_CommonArgs__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalService", "CommonArgs");
        }
        inline app::XalService_CommonArgs* create() {
            return il2cpp::create_object<app::XalService_CommonArgs>(get_class());
        }
        inline app::XalService_CommonArgs__Boxed* box(app::XalService_CommonArgs value) {
            return il2cpp::box_value<app::XalService_CommonArgs__Boxed>(get_class(), value);
        }
    } // namespace XalService_CommonArgs
} // namespace app::classes::types
