#pragma once
#include <Modloader/app/structs/RaceMenuScreenNotificationSystem__Array.h>
#include <Modloader/app/structs/RaceMenuScreenNotificationSystem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RaceMenuScreenNotificationSystem__Array {
        inline app::RaceMenuScreenNotificationSystem__Array__Class** type_info() {
            static app::RaceMenuScreenNotificationSystem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RaceMenuScreenNotificationSystem__Array__Class**)(modloader::win::memory::resolve_rva(0x0478AB28));
            }
            return cache;
        }
        inline app::RaceMenuScreenNotificationSystem__Array__Class* get_class() {
            return il2cpp::get_class<app::RaceMenuScreenNotificationSystem__Array__Class>(type_info(), "", "RaceMenuScreenNotificationSystem[]");
        }
        inline app::RaceMenuScreenNotificationSystem__Array* create() {
            return il2cpp::create_object<app::RaceMenuScreenNotificationSystem__Array>(get_class());
        }
    } // namespace RaceMenuScreenNotificationSystem__Array
} // namespace app::classes::types
