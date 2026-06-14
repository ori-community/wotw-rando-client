#pragma once
#include <Modloader/app/structs/JobThreadConfigurator.h>
#include <Modloader/app/structs/JobThreadConfigurator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace JobThreadConfigurator {
        inline app::JobThreadConfigurator__Class** type_info() {
            static app::JobThreadConfigurator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::JobThreadConfigurator__Class**)(modloader::win::memory::resolve_rva(0x04734E48));
            }
            return cache;
        }
        inline app::JobThreadConfigurator__Class* get_class() {
            return il2cpp::get_class<app::JobThreadConfigurator__Class>(type_info(), "Moon.debugMenu.scripts.gameSpecific.menuItems", "JobThreadConfigurator");
        }
        inline app::JobThreadConfigurator* create() {
            return il2cpp::create_object<app::JobThreadConfigurator>(get_class());
        }
    } // namespace JobThreadConfigurator
} // namespace app::classes::types
