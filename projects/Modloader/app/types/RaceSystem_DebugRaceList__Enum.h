#pragma once
#include <Modloader/app/structs/RaceSystem_DebugRaceList__Enum.h>
#include <Modloader/app/structs/RaceSystem_DebugRaceList__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceSystem_DebugRaceList__Enum {
        inline app::RaceSystem_DebugRaceList__Enum__Class** type_info() {
            static app::RaceSystem_DebugRaceList__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceSystem_DebugRaceList__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476F288));
            }
            return cache;
        }
        inline app::RaceSystem_DebugRaceList__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::RaceSystem_DebugRaceList__Enum__Class>(type_info(), "", "RaceSystem", "DebugRaceList");
        }
        inline app::RaceSystem_DebugRaceList__Enum* create() {
            return il2cpp::create_object<app::RaceSystem_DebugRaceList__Enum>(get_class());
        }
    } // namespace RaceSystem_DebugRaceList__Enum
} // namespace app::classes::types
