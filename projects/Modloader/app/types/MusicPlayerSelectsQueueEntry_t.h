#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MusicPlayerSelectsQueueEntry_t__Class.h>
#include <Modloader/app/structs/MusicPlayerSelectsQueueEntry_t.h>
#include <Modloader/app/structs/MusicPlayerSelectsQueueEntry_t__Boxed.h>

namespace app::classes::types {
    namespace MusicPlayerSelectsQueueEntry_t {
        namespace {
            inline app::MusicPlayerSelectsQueueEntry_t__Class* type_info_ref = nullptr;
        }
        inline app::MusicPlayerSelectsQueueEntry_t__Class** type_info = &type_info_ref;
        inline app::MusicPlayerSelectsQueueEntry_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerSelectsQueueEntry_t__Class>(type_info, "Steamworks", "MusicPlayerSelectsQueueEntry_t");
        }
        inline app::MusicPlayerSelectsQueueEntry_t* create() {
            return il2cpp::create_object<app::MusicPlayerSelectsQueueEntry_t>(get_class());
        }
        inline app::MusicPlayerSelectsQueueEntry_t__Boxed* box(app::MusicPlayerSelectsQueueEntry_t value) {
            return il2cpp::box_value<app::MusicPlayerSelectsQueueEntry_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerSelectsQueueEntry_t
} // namespace app::classes::types
