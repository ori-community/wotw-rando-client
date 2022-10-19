#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WorldEventsSelector {
        namespace {
            inline app::WorldEventsSelector__Class* type_info_ref = nullptr;
        }
        inline app::WorldEventsSelector__Class** type_info = &type_info_ref;
        inline app::WorldEventsSelector__Class* get_class() {
            return il2cpp::get_class<app::WorldEventsSelector__Class>(type_info, "", "WorldEventsSelector");
        }
        inline app::WorldEventsSelector* create() {
            return il2cpp::create_object<app::WorldEventsSelector>(get_class());
        }
    } // namespace WorldEventsSelector
} // namespace app::classes::types
