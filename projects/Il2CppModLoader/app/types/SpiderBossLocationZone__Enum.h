#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationZone__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpiderBossLocationZone__Enum__Class** type_info;
        inline app::SpiderBossLocationZone__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationZone__Enum__Class>(type_info, "", "SpiderBossLocationZone");
        }
        inline app::SpiderBossLocationZone__Enum* create() {
            return il2cpp::create_object<app::SpiderBossLocationZone__Enum>(get_class());
        }
        inline app::SpiderBossLocationZone__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossLocationZone__Enum__Array>(get_class(), size);
        }
        inline app::SpiderBossLocationZone__Enum__Array* create_array(const std::vector<app::SpiderBossLocationZone__Enum*>& items) {
            return il2cpp::array_new<app::SpiderBossLocationZone__Enum__Array>(get_class(), items);
        }
    } // namespace SpiderBossLocationZone__Enum
} // namespace app::classes::types
