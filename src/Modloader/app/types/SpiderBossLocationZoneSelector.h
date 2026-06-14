#pragma once
#include <Modloader/app/structs/SpiderBossLocationZoneSelector.h>
#include <Modloader/app/structs/SpiderBossLocationZoneSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationZoneSelector {
        inline app::SpiderBossLocationZoneSelector__Class** type_info() {
            static app::SpiderBossLocationZoneSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocationZoneSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocationZoneSelector__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationZoneSelector__Class>(type_info(), "", "SpiderBossLocationZoneSelector");
        }
        inline app::SpiderBossLocationZoneSelector* create() {
            return il2cpp::create_object<app::SpiderBossLocationZoneSelector>(get_class());
        }
    } // namespace SpiderBossLocationZoneSelector
} // namespace app::classes::types
