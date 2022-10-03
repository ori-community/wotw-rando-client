#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace XalService_XalPlatformWebShowUrlEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::XalService_XalPlatformWebShowUrlEventHandler__Class** type_info;
        inline app::XalService_XalPlatformWebShowUrlEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformWebShowUrlEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformWebShowUrlEventHandler");
        }
        inline app::XalService_XalPlatformWebShowUrlEventHandler* create() {
            return il2cpp::create_object<app::XalService_XalPlatformWebShowUrlEventHandler>(get_class());
        }
    } // namespace XalService_XalPlatformWebShowUrlEventHandler
} // namespace app::classes::types
