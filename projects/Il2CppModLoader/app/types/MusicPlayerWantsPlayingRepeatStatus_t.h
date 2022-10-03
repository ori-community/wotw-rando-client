#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MusicPlayerWantsPlayingRepeatStatus_t {
        namespace {
            app::MusicPlayerWantsPlayingRepeatStatus_t__Class* type_info_ref = nullptr;
        }
        app::MusicPlayerWantsPlayingRepeatStatus_t__Class** type_info = &type_info_ref;
        inline app::MusicPlayerWantsPlayingRepeatStatus_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWantsPlayingRepeatStatus_t__Class>(type_info, "Steamworks", "MusicPlayerWantsPlayingRepeatStatus_t");
        }
        inline app::MusicPlayerWantsPlayingRepeatStatus_t* create() {
            return il2cpp::create_object<app::MusicPlayerWantsPlayingRepeatStatus_t>(get_class());
        }
        inline app::MusicPlayerWantsPlayingRepeatStatus_t__Boxed* box(app::MusicPlayerWantsPlayingRepeatStatus_t value) {
            return il2cpp::box_value<app::MusicPlayerWantsPlayingRepeatStatus_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWantsPlayingRepeatStatus_t
} // namespace app::classes::types
