#pragma once
#include <Modloader/app/structs/WebShowUrlEventHandler.h>
#include <Modloader/app/structs/WebShowUrlEventHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WebShowUrlEventHandler {
        inline app::WebShowUrlEventHandler__Class** type_info() {
            static app::WebShowUrlEventHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WebShowUrlEventHandler__Class**)(modloader::win::memory::resolve_rva(0x0477D588));
            }
            return cache;
        }
        inline app::WebShowUrlEventHandler__Class* get_class() {
            return il2cpp::get_class<app::WebShowUrlEventHandler__Class>(type_info(), "Microsoft.Xbox.Services.Xal", "WebShowUrlEventHandler");
        }
        inline app::WebShowUrlEventHandler* create() {
            return il2cpp::create_object<app::WebShowUrlEventHandler>(get_class());
        }
    } // namespace WebShowUrlEventHandler
} // namespace app::classes::types
