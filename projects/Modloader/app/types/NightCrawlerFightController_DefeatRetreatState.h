#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NightCrawlerFightController_DefeatRetreatState {
        inline app::NightCrawlerFightController_DefeatRetreatState__Class** type_info = (app::NightCrawlerFightController_DefeatRetreatState__Class**)(modloader::win::memory::resolve_rva(0x0477DBB8));
        inline app::NightCrawlerFightController_DefeatRetreatState__Class* get_class() {
            return il2cpp::get_nested_class<app::NightCrawlerFightController_DefeatRetreatState__Class>(type_info, "", "NightCrawlerFightController", "DefeatRetreatState");
        }
        inline app::NightCrawlerFightController_DefeatRetreatState* create() {
            return il2cpp::create_object<app::NightCrawlerFightController_DefeatRetreatState>(get_class());
        }
    } // namespace NightCrawlerFightController_DefeatRetreatState
} // namespace app::classes::types
