#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreenNotificationUpdater {
        namespace {
            app::RaceMenuScreenNotificationUpdater__Class* type_info_ref = nullptr;
        }
        app::RaceMenuScreenNotificationUpdater__Class** type_info = &type_info_ref;
        inline app::RaceMenuScreenNotificationUpdater__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenNotificationUpdater__Class>(type_info, "", "RaceMenuScreenNotificationUpdater");
        }
        inline app::RaceMenuScreenNotificationUpdater* create() {
            return il2cpp::create_object<app::RaceMenuScreenNotificationUpdater>(get_class());
        }
    } // namespace RaceMenuScreenNotificationUpdater
} // namespace app::classes::types
