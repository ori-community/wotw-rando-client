#pragma once
#include <Modloader/app/structs/MusicPlayerWantsPlayNext_t.h>
#include <Modloader/app/structs/MusicPlayerWantsPlayNext_t__Boxed.h>
#include <Modloader/app/structs/MusicPlayerWantsPlayNext_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicPlayerWantsPlayNext_t {
        inline app::MusicPlayerWantsPlayNext_t__Class** type_info() {
            static app::MusicPlayerWantsPlayNext_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicPlayerWantsPlayNext_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicPlayerWantsPlayNext_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWantsPlayNext_t__Class>(type_info(), "Steamworks", "MusicPlayerWantsPlayNext_t");
        }
        inline app::MusicPlayerWantsPlayNext_t* create() {
            return il2cpp::create_object<app::MusicPlayerWantsPlayNext_t>(get_class());
        }
        inline app::MusicPlayerWantsPlayNext_t__Boxed* box(app::MusicPlayerWantsPlayNext_t value) {
            return il2cpp::box_value<app::MusicPlayerWantsPlayNext_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWantsPlayNext_t
} // namespace app::classes::types
