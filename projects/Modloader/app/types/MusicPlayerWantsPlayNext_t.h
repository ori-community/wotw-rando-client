#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MusicPlayerWantsPlayNext_t {
        namespace {
            inline app::MusicPlayerWantsPlayNext_t__Class* type_info_ref = nullptr;
        }
        inline app::MusicPlayerWantsPlayNext_t__Class** type_info = &type_info_ref;
        inline app::MusicPlayerWantsPlayNext_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWantsPlayNext_t__Class>(type_info, "Steamworks", "MusicPlayerWantsPlayNext_t");
        }
        inline app::MusicPlayerWantsPlayNext_t* create() {
            return il2cpp::create_object<app::MusicPlayerWantsPlayNext_t>(get_class());
        }
        inline app::MusicPlayerWantsPlayNext_t__Boxed* box(app::MusicPlayerWantsPlayNext_t value) {
            return il2cpp::box_value<app::MusicPlayerWantsPlayNext_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWantsPlayNext_t
} // namespace app::classes::types
