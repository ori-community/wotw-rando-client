#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceMenuScreenNotificationSystem__Array {
        inline app::RaceMenuScreenNotificationSystem__Array__Class** type_info = (app::RaceMenuScreenNotificationSystem__Array__Class**)(modloader::win::memory::resolve_rva(0x0478AB28));
        inline app::RaceMenuScreenNotificationSystem__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenNotificationSystem__Array__Class>(type_info, "", "RaceMenuScreenNotificationSystem[]");
        }
        inline app::RaceMenuScreenNotificationSystem__Array* create() {
            return il2cpp::create_object<app::RaceMenuScreenNotificationSystem__Array>(get_class());
        }
    } // namespace RaceMenuScreenNotificationSystem__Array
} // namespace app::classes::types
