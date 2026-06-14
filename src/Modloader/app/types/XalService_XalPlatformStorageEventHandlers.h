#pragma once
#include <Modloader/app/structs/XalService_XalPlatformStorageEventHandlers.h>
#include <Modloader/app/structs/XalService_XalPlatformStorageEventHandlers__Boxed.h>
#include <Modloader/app/structs/XalService_XalPlatformStorageEventHandlers__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalService_XalPlatformStorageEventHandlers {
        inline app::XalService_XalPlatformStorageEventHandlers__Class** type_info() {
            static app::XalService_XalPlatformStorageEventHandlers__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalService_XalPlatformStorageEventHandlers__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalService_XalPlatformStorageEventHandlers__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformStorageEventHandlers__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformStorageEventHandlers");
        }
        inline app::XalService_XalPlatformStorageEventHandlers* create() {
            return il2cpp::create_object<app::XalService_XalPlatformStorageEventHandlers>(get_class());
        }
        inline app::XalService_XalPlatformStorageEventHandlers__Boxed* box(app::XalService_XalPlatformStorageEventHandlers value) {
            return il2cpp::box_value<app::XalService_XalPlatformStorageEventHandlers__Boxed>(get_class(), value);
        }
    } // namespace XalService_XalPlatformStorageEventHandlers
} // namespace app::classes::types
