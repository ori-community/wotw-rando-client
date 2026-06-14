#pragma once
#include <Modloader/app/structs/MusicPlayerSelectsPlaylistEntry_t.h>
#include <Modloader/app/structs/MusicPlayerSelectsPlaylistEntry_t__Boxed.h>
#include <Modloader/app/structs/MusicPlayerSelectsPlaylistEntry_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicPlayerSelectsPlaylistEntry_t {
        inline app::MusicPlayerSelectsPlaylistEntry_t__Class** type_info() {
            static app::MusicPlayerSelectsPlaylistEntry_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicPlayerSelectsPlaylistEntry_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicPlayerSelectsPlaylistEntry_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerSelectsPlaylistEntry_t__Class>(type_info(), "Steamworks", "MusicPlayerSelectsPlaylistEntry_t");
        }
        inline app::MusicPlayerSelectsPlaylistEntry_t* create() {
            return il2cpp::create_object<app::MusicPlayerSelectsPlaylistEntry_t>(get_class());
        }
        inline app::MusicPlayerSelectsPlaylistEntry_t__Boxed* box(app::MusicPlayerSelectsPlaylistEntry_t value) {
            return il2cpp::box_value<app::MusicPlayerSelectsPlaylistEntry_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerSelectsPlaylistEntry_t
} // namespace app::classes::types
