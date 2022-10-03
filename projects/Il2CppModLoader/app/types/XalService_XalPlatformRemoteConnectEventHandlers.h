#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalService_XalPlatformRemoteConnectEventHandlers {
        namespace {
            app::XalService_XalPlatformRemoteConnectEventHandlers__Class* type_info_ref = nullptr;
        }
        app::XalService_XalPlatformRemoteConnectEventHandlers__Class** type_info = &type_info_ref;
        inline app::XalService_XalPlatformRemoteConnectEventHandlers__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformRemoteConnectEventHandlers__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformRemoteConnectEventHandlers");
        }
        inline app::XalService_XalPlatformRemoteConnectEventHandlers* create() {
            return il2cpp::create_object<app::XalService_XalPlatformRemoteConnectEventHandlers>(get_class());
        }
        inline app::XalService_XalPlatformRemoteConnectEventHandlers__Boxed* box(app::XalService_XalPlatformRemoteConnectEventHandlers value) {
            return il2cpp::box_value<app::XalService_XalPlatformRemoteConnectEventHandlers__Boxed>(get_class(), value);
        }
    } // namespace XalService_XalPlatformRemoteConnectEventHandlers
} // namespace app::classes::types
