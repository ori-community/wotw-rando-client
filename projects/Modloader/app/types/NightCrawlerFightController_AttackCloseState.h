#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_AttackCloseState {
        inline app::NightCrawlerFightController_AttackCloseState__Class** type_info = (app::NightCrawlerFightController_AttackCloseState__Class**)(modloader::win::memory::resolve_rva(0x04776E50));
        inline app::NightCrawlerFightController_AttackCloseState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_AttackCloseState__Class>(type_info, "", "NightCrawlerFightController", "AttackCloseState");
        }
        inline app::NightCrawlerFightController_AttackCloseState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_AttackCloseState>(get_class());
        }
    } // namespace NightCrawlerFightController_AttackCloseState
} // namespace app::classes::types
