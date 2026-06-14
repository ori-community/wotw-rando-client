#pragma once
#include <Modloader/app/structs/HitSoundTimelineHooks.h>
#include <Modloader/app/structs/HitSoundTimelineHooks__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HitSoundTimelineHooks {
        inline app::HitSoundTimelineHooks__Class** type_info() {
            static app::HitSoundTimelineHooks__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HitSoundTimelineHooks__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HitSoundTimelineHooks__Class* get_class() {
            return il2cpp::get_class<app::HitSoundTimelineHooks__Class>(type_info(), "", "HitSoundTimelineHooks");
        }
        inline app::HitSoundTimelineHooks* create() {
            return il2cpp::create_object<app::HitSoundTimelineHooks>(get_class());
        }
    } // namespace HitSoundTimelineHooks
} // namespace app::classes::types
