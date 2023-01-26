#pragma once
#include <Modloader/app/structs/RaceMenuScreenNotificationUpdater.h>
#include <Modloader/app/structs/RaceMenuScreenNotificationUpdater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreenNotificationUpdater {
        inline app::RaceMenuScreenNotificationUpdater__Class** type_info() {
            static app::RaceMenuScreenNotificationUpdater__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RaceMenuScreenNotificationUpdater__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RaceMenuScreenNotificationUpdater__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenNotificationUpdater__Class>(type_info(), "", "RaceMenuScreenNotificationUpdater");
        }
        inline app::RaceMenuScreenNotificationUpdater* create() {
            return il2cpp::create_object<app::RaceMenuScreenNotificationUpdater>(get_class());
        }
    } // namespace RaceMenuScreenNotificationUpdater
} // namespace app::classes::types
