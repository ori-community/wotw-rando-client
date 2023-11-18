#pragma once
#include <Modloader/app/structs/SoundZoneTrigger.h>
#include <Modloader/app/structs/SoundZoneTrigger__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SoundZoneTrigger {
        inline app::SoundZoneTrigger__Class** type_info() {
            static app::SoundZoneTrigger__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SoundZoneTrigger__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SoundZoneTrigger__Class* get_class() {
            return il2cpp::get_class<app::SoundZoneTrigger__Class>(type_info(), "", "SoundZoneTrigger");
        }
        inline app::SoundZoneTrigger* create() {
            return il2cpp::create_object<app::SoundZoneTrigger>(get_class());
        }
    } // namespace SoundZoneTrigger
} // namespace app::classes::types
