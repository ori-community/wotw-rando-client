#pragma once
#include <Modloader/app/structs/WorldEventsOnAwake.h>
#include <Modloader/app/structs/WorldEventsOnAwake__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldEventsOnAwake {
        inline app::WorldEventsOnAwake__Class** type_info() {
            static app::WorldEventsOnAwake__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldEventsOnAwake__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldEventsOnAwake__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsOnAwake__Class>(type_info(), "", "WorldEventsOnAwake");
        }
        inline app::WorldEventsOnAwake* create() {
            return il2cpp::create_object<app::WorldEventsOnAwake>(get_class());
        }
    } // namespace WorldEventsOnAwake
} // namespace app::classes::types
