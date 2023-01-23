#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiderBossBehaviourZone__Enum__Class.h>
#include <Modloader/app/structs/SpiderBossBehaviourZone__Enum.h>
#include <Modloader/app/structs/SpiderBossBehaviourZone__Enum__Array.h>

namespace app::classes::types {
    namespace SpiderBossBehaviourZone__Enum {
        inline app::SpiderBossBehaviourZone__Enum__Class** type_info = (app::SpiderBossBehaviourZone__Enum__Class**)(modloader::win::memory::resolve_rva(0x0470B0F0));
        inline app::SpiderBossBehaviourZone__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiderBossBehaviourZone__Enum__Class>(type_info, "", "SpiderBossBehaviourZone");
        }
        inline app::SpiderBossBehaviourZone__Enum* create() {
            return il2cpp::create_object<app::SpiderBossBehaviourZone__Enum>(get_class());
        }
        inline app::SpiderBossBehaviourZone__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::SpiderBossBehaviourZone__Enum__Array>(get_class(), size);
        }
        inline app::SpiderBossBehaviourZone__Enum__Array* create_array(const std::vector<app::SpiderBossBehaviourZone__Enum*>& items) {
            return il2cpp::array_new<app::SpiderBossBehaviourZone__Enum__Array>(get_class(), items);
        }
    } // namespace SpiderBossBehaviourZone__Enum
} // namespace app::classes::types
