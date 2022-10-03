#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WebShowUrlEventHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::WebShowUrlEventHandler__Class** type_info;
        inline app::WebShowUrlEventHandler__Class* get_class() {
            return il2cpp::get_class<app::WebShowUrlEventHandler__Class>(type_info, "Microsoft.Xbox.Services.Xal", "WebShowUrlEventHandler");
        }
        inline app::WebShowUrlEventHandler* create() {
            return il2cpp::create_object<app::WebShowUrlEventHandler>(get_class());
        }
    } // namespace WebShowUrlEventHandler
} // namespace app::classes::types
