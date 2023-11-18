#pragma once
#include <Modloader/app/structs/GoThroughPlatformHandler.h>
#include <Modloader/app/structs/GoThroughPlatformHandler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GoThroughPlatformHandler {
        inline app::GoThroughPlatformHandler__Class** type_info() {
            static app::GoThroughPlatformHandler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GoThroughPlatformHandler__Class**)(modloader::win::memory::resolve_rva(0x04742420));
            }
            return cache;
        }
        inline app::GoThroughPlatformHandler__Class* get_class() {
            return il2cpp::get_class<app::GoThroughPlatformHandler__Class>(type_info(), "", "GoThroughPlatformHandler");
        }
        inline app::GoThroughPlatformHandler* create() {
            return il2cpp::create_object<app::GoThroughPlatformHandler>(get_class());
        }
    } // namespace GoThroughPlatformHandler
} // namespace app::classes::types
