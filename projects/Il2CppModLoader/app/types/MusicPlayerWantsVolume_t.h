#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MusicPlayerWantsVolume_t {
        namespace {
            inline app::MusicPlayerWantsVolume_t__Class* type_info_ref = nullptr;
        }
        inline app::MusicPlayerWantsVolume_t__Class** type_info = &type_info_ref;
        inline app::MusicPlayerWantsVolume_t__Class* get_class() {
            return il2cpp::get_class<app::MusicPlayerWantsVolume_t__Class>(type_info, "Steamworks", "MusicPlayerWantsVolume_t");
        }
        inline app::MusicPlayerWantsVolume_t* create() {
            return il2cpp::create_object<app::MusicPlayerWantsVolume_t>(get_class());
        }
        inline app::MusicPlayerWantsVolume_t__Boxed* box(app::MusicPlayerWantsVolume_t value) {
            return il2cpp::box_value<app::MusicPlayerWantsVolume_t__Boxed>(get_class(), value);
        }
    } // namespace MusicPlayerWantsVolume_t
} // namespace app::classes::types
