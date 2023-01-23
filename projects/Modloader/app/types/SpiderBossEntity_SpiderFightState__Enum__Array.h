#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossEntity_SpiderFightState__Enum__Array__Class.h>
#include <Modloader/app/structs/SpiderBossEntity_SpiderFightState__Enum__Array.h>

namespace app::classes::types {
    namespace SpiderBossEntity_SpiderFightState__Enum__Array {
        namespace {
            inline app::SpiderBossEntity_SpiderFightState__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossEntity_SpiderFightState__Enum__Array__Class** type_info = &type_info_ref;
        inline app::SpiderBossEntity_SpiderFightState__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossEntity_SpiderFightState__Enum__Array__Class>(type_info, "", "SpiderBossEntity+SpiderFightState[]");
        }
        inline app::SpiderBossEntity_SpiderFightState__Enum__Array* create() {
            return il2cpp::create_object<app::SpiderBossEntity_SpiderFightState__Enum__Array>(get_class());
        }
    } // namespace SpiderBossEntity_SpiderFightState__Enum__Array
} // namespace app::classes::types
