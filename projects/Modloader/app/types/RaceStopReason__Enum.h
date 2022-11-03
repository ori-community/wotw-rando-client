#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceStopReason__Enum {
        namespace {
            inline app::RaceStopReason__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RaceStopReason__Enum__Class** type_info = &type_info_ref;
        inline app::RaceStopReason__Enum__Class* get_class() {
            return il2cpp::get_class<app::RaceStopReason__Enum__Class>(type_info, "", "RaceStopReason");
        }
        inline app::RaceStopReason__Enum* create() {
            return il2cpp::create_object<app::RaceStopReason__Enum>(get_class());
        }
    } // namespace RaceStopReason__Enum
} // namespace app::classes::types
