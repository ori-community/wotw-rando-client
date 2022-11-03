#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossLocationZoneSelector {
        namespace {
            inline app::SpiderBossLocationZoneSelector__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLocationZoneSelector__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationZoneSelector__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationZoneSelector__Class>(type_info, "", "SpiderBossLocationZoneSelector");
        }
        inline app::SpiderBossLocationZoneSelector* create() {
            return il2cpp::create_object<app::SpiderBossLocationZoneSelector>(get_class());
        }
    } // namespace SpiderBossLocationZoneSelector
} // namespace app::classes::types
