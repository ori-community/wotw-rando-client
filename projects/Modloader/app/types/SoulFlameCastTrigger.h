#pragma once
#include <Modloader/app/structs/SoulFlameCastTrigger.h>
#include <Modloader/app/structs/SoulFlameCastTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoulFlameCastTrigger {
        inline app::SoulFlameCastTrigger__Class** type_info() {
            static app::SoulFlameCastTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoulFlameCastTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoulFlameCastTrigger__Class* get_class() {
            return il2cpp::get_class<app::SoulFlameCastTrigger__Class>(type_info(), "", "SoulFlameCastTrigger");
        }
        inline app::SoulFlameCastTrigger* create() {
            return il2cpp::create_object<app::SoulFlameCastTrigger>(get_class());
        }
    } // namespace SoulFlameCastTrigger
} // namespace app::classes::types
