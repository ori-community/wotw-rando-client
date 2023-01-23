#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XalService_XalPlatformWebShowUrlEventHandler__Class.h>
#include <Modloader/app/structs/XalService_XalPlatformWebShowUrlEventHandler.h>

namespace app::classes::types {
    namespace XalService_XalPlatformWebShowUrlEventHandler {
        inline app::XalService_XalPlatformWebShowUrlEventHandler__Class** type_info = (app::XalService_XalPlatformWebShowUrlEventHandler__Class**)(modloader::win::memory::resolve_rva(0x047611E0));
        inline app::XalService_XalPlatformWebShowUrlEventHandler__Class* get_class() {
            return il2cpp::get_nested_class<app::XalService_XalPlatformWebShowUrlEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "XalService", "XalPlatformWebShowUrlEventHandler");
        }
        inline app::XalService_XalPlatformWebShowUrlEventHandler* create() {
            return il2cpp::create_object<app::XalService_XalPlatformWebShowUrlEventHandler>(get_class());
        }
    } // namespace XalService_XalPlatformWebShowUrlEventHandler
} // namespace app::classes::types
