#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MusicPlayerSelectsPlaylistEntry_t {
        namespace {
            inline app::MusicPlayerSelectsPlaylistEntry_t__Class* type_info_ref = nullptr;
        }
        inline app::MusicPlayerSelectsPlaylistEntry_t__Class** type_info = &type_info_ref;
        inline app::MusicPlayerSelectsPlaylistEntry_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerSelectsPlaylistEntry_t__Class>(type_info, "Steamworks", "MusicPlayerSelectsPlaylistEntry_t");
        }
        inline app::MusicPlayerSelectsPlaylistEntry_t* create() {
            return il2cpp::create_object<app::MusicPlayerSelectsPlaylistEntry_t>(get_class());
        }
        inline app::MusicPlayerSelectsPlaylistEntry_t__Boxed* box(app::MusicPlayerSelectsPlaylistEntry_t value) {
            return il2cpp::box_value<app::MusicPlayerSelectsPlaylistEntry_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerSelectsPlaylistEntry_t
} // namespace app::classes::types
