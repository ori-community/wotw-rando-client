#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RaceMenuScreenNotificationSystem {
        inline app::RaceMenuScreenNotificationSystem__Class** type_info = (app::RaceMenuScreenNotificationSystem__Class**)(modloader::win::memory::resolve_rva(0x0470B458));
        inline app::RaceMenuScreenNotificationSystem__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenNotificationSystem__Class>(type_info, "", "RaceMenuScreenNotificationSystem");
        }
        inline app::RaceMenuScreenNotificationSystem* create() {
            return il2cpp::create_object<app::RaceMenuScreenNotificationSystem>(get_class());
        }
        inline app::RaceMenuScreenNotificationSystem__Array* create_array(int size) {
            return il2cpp::array_new<app::RaceMenuScreenNotificationSystem__Array>(get_class(), size);
        }
        inline app::RaceMenuScreenNotificationSystem__Array* create_array(const std::vector<app::RaceMenuScreenNotificationSystem*>& items) {
            return il2cpp::array_new<app::RaceMenuScreenNotificationSystem__Array>(get_class(), items);
        }
    } // namespace RaceMenuScreenNotificationSystem
} // namespace app::classes::types
