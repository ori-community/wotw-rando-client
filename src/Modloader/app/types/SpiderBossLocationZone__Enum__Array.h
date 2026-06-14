#pragma once
#include <Modloader/app/structs/SpiderBossLocationZone__Enum__Array.h>
#include <Modloader/app/structs/SpiderBossLocationZone__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationZone__Enum__Array {
        inline app::SpiderBossLocationZone__Enum__Array__Class** type_info() {
            static app::SpiderBossLocationZone__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossLocationZone__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossLocationZone__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationZone__Enum__Array__Class>(type_info(), "", "SpiderBossLocationZone[]");
        }
        inline app::SpiderBossLocationZone__Enum__Array* create() {
            return il2cpp::create_object<app::SpiderBossLocationZone__Enum__Array>(get_class());
        }
    } // namespace SpiderBossLocationZone__Enum__Array
} // namespace app::classes::types
