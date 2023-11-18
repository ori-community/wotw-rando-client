#pragma once
#include <Modloader/app/structs/MusicPlayerWantsPlayPrevious_t.h>
#include <Modloader/app/structs/MusicPlayerWantsPlayPrevious_t__Boxed.h>
#include <Modloader/app/structs/MusicPlayerWantsPlayPrevious_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicPlayerWantsPlayPrevious_t {
        inline app::MusicPlayerWantsPlayPrevious_t__Class** type_info() {
            static app::MusicPlayerWantsPlayPrevious_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicPlayerWantsPlayPrevious_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicPlayerWantsPlayPrevious_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWantsPlayPrevious_t__Class>(type_info(), "Steamworks", "MusicPlayerWantsPlayPrevious_t");
        }
        inline app::MusicPlayerWantsPlayPrevious_t* create() {
            return il2cpp::create_object<app::MusicPlayerWantsPlayPrevious_t>(get_class());
        }
        inline app::MusicPlayerWantsPlayPrevious_t__Boxed* box(app::MusicPlayerWantsPlayPrevious_t value) {
            return il2cpp::box_value<app::MusicPlayerWantsPlayPrevious_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWantsPlayPrevious_t
} // namespace app::classes::types
