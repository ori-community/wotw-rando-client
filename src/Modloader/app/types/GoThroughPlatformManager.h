#pragma once
#include <Modloader/app/structs/GoThroughPlatformManager.h>
#include <Modloader/app/structs/GoThroughPlatformManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GoThroughPlatformManager {
        inline app::GoThroughPlatformManager__Class** type_info() {
            static app::GoThroughPlatformManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GoThroughPlatformManager__Class**)(modloader::win::memory::resolve_rva(0x0471ECD8));
            }
            return cache;
        }
        inline app::GoThroughPlatformManager__Class* get_class() {
            return il2cpp::get_class<app::GoThroughPlatformManager__Class>(type_info(), "", "GoThroughPlatformManager");
        }
        inline app::GoThroughPlatformManager* create() {
            return il2cpp::create_object<app::GoThroughPlatformManager>(get_class());
        }
    } // namespace GoThroughPlatformManager
} // namespace app::classes::types
