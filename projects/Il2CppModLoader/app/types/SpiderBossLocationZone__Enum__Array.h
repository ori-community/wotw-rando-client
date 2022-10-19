#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiderBossLocationZone__Enum__Array {
        namespace {
            inline app::SpiderBossLocationZone__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpiderBossLocationZone__Enum__Array__Class** type_info = &type_info_ref;
        inline app::SpiderBossLocationZone__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationZone__Enum__Array__Class>(type_info, "", "SpiderBossLocationZone[]");
        }
        inline app::SpiderBossLocationZone__Enum__Array* create() {
            return il2cpp::create_object<app::SpiderBossLocationZone__Enum__Array>(get_class());
        }
    } // namespace SpiderBossLocationZone__Enum__Array
} // namespace app::classes::types
