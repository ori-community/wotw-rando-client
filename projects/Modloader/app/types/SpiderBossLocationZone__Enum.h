#pragma once
#include <Modloader/app/structs/SpiderBossLocationZone__Enum.h>
#include <Modloader/app/structs/SpiderBossLocationZone__Enum__Array.h>
#include <Modloader/app/structs/SpiderBossLocationZone__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiderBossLocationZone__Enum {
        inline app::SpiderBossLocationZone__Enum__Class** type_info() {
            static app::SpiderBossLocationZone__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiderBossLocationZone__Enum__Class**)(modloader::win::memory::resolve_rva(0x04773A48));
            }
            return cache;
        }
        inline app::SpiderBossLocationZone__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossLocationZone__Enum__Class>(type_info(), "", "SpiderBossLocationZone");
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
