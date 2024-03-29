#pragma once
#include <Modloader/app/structs/MusicPlayerWantsLooped_t.h>
#include <Modloader/app/structs/MusicPlayerWantsLooped_t__Boxed.h>
#include <Modloader/app/structs/MusicPlayerWantsLooped_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MusicPlayerWantsLooped_t {
        inline app::MusicPlayerWantsLooped_t__Class** type_info() {
            static app::MusicPlayerWantsLooped_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MusicPlayerWantsLooped_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MusicPlayerWantsLooped_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWantsLooped_t__Class>(type_info(), "Steamworks", "MusicPlayerWantsLooped_t");
        }
        inline app::MusicPlayerWantsLooped_t* create() {
            return il2cpp::create_object<app::MusicPlayerWantsLooped_t>(get_class());
        }
        inline app::MusicPlayerWantsLooped_t__Boxed* box(app::MusicPlayerWantsLooped_t value) {
            return il2cpp::box_value<app::MusicPlayerWantsLooped_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWantsLooped_t
} // namespace app::classes::types
