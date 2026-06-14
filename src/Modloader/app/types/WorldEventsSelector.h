#pragma once
#include <Modloader/app/structs/WorldEventsSelector.h>
#include <Modloader/app/structs/WorldEventsSelector__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldEventsSelector {
        inline app::WorldEventsSelector__Class** type_info() {
            static app::WorldEventsSelector__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldEventsSelector__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldEventsSelector__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsSelector__Class>(type_info(), "", "WorldEventsSelector");
        }
        inline app::WorldEventsSelector* create() {
            return il2cpp::create_object<app::WorldEventsSelector>(get_class());
        }
    } // namespace WorldEventsSelector
} // namespace app::classes::types
