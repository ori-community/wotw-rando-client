#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MusicPlayerWantsPlay_t__Class.h>
#include <Modloader/app/structs/MusicPlayerWantsPlay_t.h>
#include <Modloader/app/structs/MusicPlayerWantsPlay_t__Boxed.h>

namespace app::classes::types {
    namespace MusicPlayerWantsPlay_t {
        namespace {
            inline app::MusicPlayerWantsPlay_t__Class* type_info_ref = nullptr;
        }
        inline app::MusicPlayerWantsPlay_t__Class** type_info = &type_info_ref;
        inline app::MusicPlayerWantsPlay_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWantsPlay_t__Class>(type_info, "Steamworks", "MusicPlayerWantsPlay_t");
        }
        inline app::MusicPlayerWantsPlay_t* create() {
            return il2cpp::create_object<app::MusicPlayerWantsPlay_t>(get_class());
        }
        inline app::MusicPlayerWantsPlay_t__Boxed* box(app::MusicPlayerWantsPlay_t value) {
            return il2cpp::box_value<app::MusicPlayerWantsPlay_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWantsPlay_t
} // namespace app::classes::types
