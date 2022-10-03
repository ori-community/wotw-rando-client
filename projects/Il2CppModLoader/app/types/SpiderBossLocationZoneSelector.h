#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationZoneSelector {
        namespace {
            app::SpiderBossLocationZoneSelector__Class* type_info_ref = nullptr;
        }
        app::SpiderBossLocationZoneSelector__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationZoneSelector__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationZoneSelector__Class>(type_info, "", "SpiderBossLocationZoneSelector");
        }
        inline app::SpiderBossLocationZoneSelector* create() {
            return il2cpp::create_object<app::SpiderBossLocationZoneSelector>(get_class());
        }
    } // namespace SpiderBossLocationZoneSelector
} // namespace app::classes::types
