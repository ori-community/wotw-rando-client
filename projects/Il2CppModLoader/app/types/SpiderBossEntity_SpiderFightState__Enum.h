#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossEntity_SpiderFightState__Enum {
        namespace {
            app::SpiderBossEntity_SpiderFightState__Enum__Class* type_info_ref = nullptr;
        }
        app::SpiderBossEntity_SpiderFightState__Enum__Class** type_info = &type_info_ref;
        inline app::SpiderBossEntity_SpiderFightState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiderBossEntity_SpiderFightState__Enum__Class>(type_info, "", "SpiderBossEntity", "SpiderFightState");
        }
        inline app::SpiderBossEntity_SpiderFightState__Enum* create() {
            return il2cpp::create_object<app::SpiderBossEntity_SpiderFightState__Enum>(get_class());
        }
        inline app::SpiderBossEntity_SpiderFightState__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossEntity_SpiderFightState__Enum__Array>(get_class(), size);
        }
        inline app::SpiderBossEntity_SpiderFightState__Enum__Array* create_array(const std::vector<app::SpiderBossEntity_SpiderFightState__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::SpiderBossEntity_SpiderFightState__Enum__Array>(get_class(), items);
        }
    } // namespace SpiderBossEntity_SpiderFightState__Enum
} // namespace app::classes::types
