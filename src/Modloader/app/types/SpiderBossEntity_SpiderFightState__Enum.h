#pragma once
#include <Modloader/app/structs/SpiderBossEntity_SpiderFightState__Enum.h>
#include <Modloader/app/structs/SpiderBossEntity_SpiderFightState__Enum__Array.h>
#include <Modloader/app/structs/SpiderBossEntity_SpiderFightState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossEntity_SpiderFightState__Enum {
        inline app::SpiderBossEntity_SpiderFightState__Enum__Class** type_info() {
            static app::SpiderBossEntity_SpiderFightState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiderBossEntity_SpiderFightState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiderBossEntity_SpiderFightState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossEntity_SpiderFightState__Enum__Class>(type_info(), "", "SpiderBossEntity", "SpiderFightState");
        }
        inline app::SpiderBossEntity_SpiderFightState__Enum* create() {
            return il2cpp::create_object<app::SpiderBossEntity_SpiderFightState__Enum>(get_class());
        }
        inline app::SpiderBossEntity_SpiderFightState__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossEntity_SpiderFightState__Enum__Array>(get_class(), size);
        }
        inline app::SpiderBossEntity_SpiderFightState__Enum__Array* create_array(const std::vector<app::SpiderBossEntity_SpiderFightState__Enum*>& items) {
            return il2cpp::array_new<app::SpiderBossEntity_SpiderFightState__Enum__Array>(get_class(), items);
        }
    } // namespace SpiderBossEntity_SpiderFightState__Enum
} // namespace app::classes::types
