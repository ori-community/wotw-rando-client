#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MusicPlayerWantsPlayPrevious_t {
        namespace {
            inline app::MusicPlayerWantsPlayPrevious_t__Class* type_info_ref = nullptr;
        }
        inline app::MusicPlayerWantsPlayPrevious_t__Class** type_info = &type_info_ref;
        inline app::MusicPlayerWantsPlayPrevious_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWantsPlayPrevious_t__Class>(type_info, "Steamworks", "MusicPlayerWantsPlayPrevious_t");
        }
        inline app::MusicPlayerWantsPlayPrevious_t* create() {
            return il2cpp::create_object<app::MusicPlayerWantsPlayPrevious_t>(get_class());
        }
        inline app::MusicPlayerWantsPlayPrevious_t__Boxed* box(app::MusicPlayerWantsPlayPrevious_t value) {
            return il2cpp::box_value<app::MusicPlayerWantsPlayPrevious_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWantsPlayPrevious_t
} // namespace app::classes::types
