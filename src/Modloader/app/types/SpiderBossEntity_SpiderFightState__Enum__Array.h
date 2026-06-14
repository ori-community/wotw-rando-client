#pragma once
#include <Modloader/app/structs/SpiderBossEntity_SpiderFightState__Enum__Array.h>
#include <Modloader/app/structs/SpiderBossEntity_SpiderFightState__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossEntity_SpiderFightState__Enum__Array {
        inline app::SpiderBossEntity_SpiderFightState__Enum__Array__Class** type_info() {
            static app::SpiderBossEntity_SpiderFightState__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossEntity_SpiderFightState__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossEntity_SpiderFightState__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossEntity_SpiderFightState__Enum__Array__Class>(type_info(), "", "SpiderBossEntity+SpiderFightState[]");
        }
        inline app::SpiderBossEntity_SpiderFightState__Enum__Array* create() {
            return il2cpp::create_object<app::SpiderBossEntity_SpiderFightState__Enum__Array>(get_class());
        }
    } // namespace SpiderBossEntity_SpiderFightState__Enum__Array
} // namespace app::classes::types
