#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ListenerSoundZone {
        namespace {
            inline app::ListenerSoundZone__Class* type_info_ref = nullptr;
        }
        inline app::ListenerSoundZone__Class** type_info = &type_info_ref;
        inline app::ListenerSoundZone__Class* get_class() {
            return il2cpp::get_class<app::ListenerSoundZone__Class>(type_info, "", "ListenerSoundZone");
        }
        inline app::ListenerSoundZone* create() {
            return il2cpp::create_object<app::ListenerSoundZone>(get_class());
        }
    } // namespace ListenerSoundZone
} // namespace app::classes::types
