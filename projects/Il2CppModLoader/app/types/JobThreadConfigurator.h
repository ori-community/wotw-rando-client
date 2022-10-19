#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JobThreadConfigurator {
        inline app::JobThreadConfigurator__Class** type_info = (app::JobThreadConfigurator__Class**)(modloader::win::memory::resolve_rva(0x04734E48));
        inline app::JobThreadConfigurator__Class* get_class() {
            return il2cpp::get_class<app::JobThreadConfigurator__Class>(type_info, "Moon.debugMenu.scripts.gameSpecific.menuItems", "JobThreadConfigurator");
        }
        inline app::JobThreadConfigurator* create() {
            return il2cpp::create_object<app::JobThreadConfigurator>(get_class());
        }
    } // namespace JobThreadConfigurator
} // namespace app::classes::types
