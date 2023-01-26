#pragma once
#include <Modloader/app/structs/ListenerSoundZone.h>
#include <Modloader/app/structs/ListenerSoundZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListenerSoundZone {
        inline app::ListenerSoundZone__Class** type_info() {
            static app::ListenerSoundZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ListenerSoundZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ListenerSoundZone__Class* get_class() {
            return il2cpp::get_class<app::ListenerSoundZone__Class>(type_info(), "", "ListenerSoundZone");
        }
        inline app::ListenerSoundZone* create() {
            return il2cpp::create_object<app::ListenerSoundZone>(get_class());
        }
    } // namespace ListenerSoundZone
} // namespace app::classes::types
