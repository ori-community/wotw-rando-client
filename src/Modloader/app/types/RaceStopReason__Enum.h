#pragma once
#include <Modloader/app/structs/RaceStopReason__Enum.h>
#include <Modloader/app/structs/RaceStopReason__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceStopReason__Enum {
        inline app::RaceStopReason__Enum__Class** type_info() {
            static app::RaceStopReason__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceStopReason__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceStopReason__Enum__Class* get_class() {
            return il2cpp::get_class<app::RaceStopReason__Enum__Class>(type_info(), "", "RaceStopReason");
        }
        inline app::RaceStopReason__Enum* create() {
            return il2cpp::create_object<app::RaceStopReason__Enum>(get_class());
        }
    } // namespace RaceStopReason__Enum
} // namespace app::classes::types
