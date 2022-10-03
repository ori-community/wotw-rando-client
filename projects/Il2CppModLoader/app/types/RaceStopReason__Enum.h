#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceStopReason__Enum {
        namespace {
            app::RaceStopReason__Enum__Class* type_info_ref = nullptr;
        }
        app::RaceStopReason__Enum__Class** type_info = &type_info_ref;
        inline app::RaceStopReason__Enum__Class* get_class() {
            return il2cpp::get_class<app::RaceStopReason__Enum__Class>(type_info, "", "RaceStopReason");
        }
        inline app::RaceStopReason__Enum* create() {
            return il2cpp::create_object<app::RaceStopReason__Enum>(get_class());
        }
    } // namespace RaceStopReason__Enum
} // namespace app::classes::types
