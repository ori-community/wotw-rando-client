#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SoulFlameCastTrigger {
        namespace {
            inline app::SoulFlameCastTrigger__Class* type_info_ref = nullptr;
        }
        inline app::SoulFlameCastTrigger__Class** type_info = &type_info_ref;
        inline app::SoulFlameCastTrigger__Class* get_class() {
            return il2cpp::get_class<app::SoulFlameCastTrigger__Class>(type_info, "", "SoulFlameCastTrigger");
        }
        inline app::SoulFlameCastTrigger* create() {
            return il2cpp::create_object<app::SoulFlameCastTrigger>(get_class());
        }
    } // namespace SoulFlameCastTrigger
} // namespace app::classes::types
