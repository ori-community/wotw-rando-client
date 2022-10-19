#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XalService_XalPlatformStorageEventHandlers {
        namespace {
            inline app::XalService_XalPlatformStorageEventHandlers__Class* type_info_ref = nullptr;
        }
        inline app::XalService_XalPlatformStorageEventHandlers__Class** type_info = &type_info_ref;
        inline app::XalService_XalPlatformStorageEventHandlers__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformStorageEventHandlers__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformStorageEventHandlers");
        }
        inline app::XalService_XalPlatformStorageEventHandlers* create() {
            return il2cpp::create_object<app::XalService_XalPlatformStorageEventHandlers>(get_class());
        }
        inline app::XalService_XalPlatformStorageEventHandlers__Boxed* box(app::XalService_XalPlatformStorageEventHandlers value) {
            return il2cpp::box_value<app::XalService_XalPlatformStorageEventHandlers__Boxed>(get_class(), value);
        }
    } // namespace XalService_XalPlatformStorageEventHandlers
} // namespace app::classes::types
