#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MusicPlayerRemoteWillActivate_t__Class.h>
#include <Modloader/app/structs/MusicPlayerRemoteWillActivate_t.h>
#include <Modloader/app/structs/MusicPlayerRemoteWillActivate_t__Boxed.h>

namespace app::classes::types {
    namespace MusicPlayerRemoteWillActivate_t {
        namespace {
            inline app::MusicPlayerRemoteWillActivate_t__Class* type_info_ref = nullptr;
        }
        inline app::MusicPlayerRemoteWillActivate_t__Class** type_info = &type_info_ref;
        inline app::MusicPlayerRemoteWillActivate_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerRemoteWillActivate_t__Class>(type_info, "Steamworks", "MusicPlayerRemoteWillActivate_t");
        }
        inline app::MusicPlayerRemoteWillActivate_t* create() {
            return il2cpp::create_object<app::MusicPlayerRemoteWillActivate_t>(get_class());
        }
        inline app::MusicPlayerRemoteWillActivate_t__Boxed* box(app::MusicPlayerRemoteWillActivate_t value) {
            return il2cpp::box_value<app::MusicPlayerRemoteWillActivate_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerRemoteWillActivate_t
} // namespace app::classes::types
