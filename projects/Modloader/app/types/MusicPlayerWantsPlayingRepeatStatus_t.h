#pragma once
#include <Modloader/app/structs/MusicPlayerWantsPlayingRepeatStatus_t.h>
#include <Modloader/app/structs/MusicPlayerWantsPlayingRepeatStatus_t__Boxed.h>
#include <Modloader/app/structs/MusicPlayerWantsPlayingRepeatStatus_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicPlayerWantsPlayingRepeatStatus_t {
        inline app::MusicPlayerWantsPlayingRepeatStatus_t__Class** type_info() {
            static app::MusicPlayerWantsPlayingRepeatStatus_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicPlayerWantsPlayingRepeatStatus_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicPlayerWantsPlayingRepeatStatus_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWantsPlayingRepeatStatus_t__Class>(type_info(), "Steamworks", "MusicPlayerWantsPlayingRepeatStatus_t");
        }
        inline app::MusicPlayerWantsPlayingRepeatStatus_t* create() {
            return il2cpp::create_object<app::MusicPlayerWantsPlayingRepeatStatus_t>(get_class());
        }
        inline app::MusicPlayerWantsPlayingRepeatStatus_t__Boxed* box(app::MusicPlayerWantsPlayingRepeatStatus_t value) {
            return il2cpp::box_value<app::MusicPlayerWantsPlayingRepeatStatus_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWantsPlayingRepeatStatus_t
} // namespace app::classes::types
