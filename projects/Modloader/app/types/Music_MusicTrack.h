#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Music_MusicTrack {
        inline app::Music_MusicTrack__Class** type_info = (app::Music_MusicTrack__Class**)(modloader::win::memory::resolve_rva(0x0473DCC0));
        inline app::Music_MusicTrack__Class* get_class() {
            return il2cpp::get_nested_class<app::Music_MusicTrack__Class>(type_info, "Core", "Music", "MusicTrack");
        }
        inline app::Music_MusicTrack* create() {
            return il2cpp::create_object<app::Music_MusicTrack>(get_class());
        }
        inline app::Music_MusicTrack__Array* create_array(int size) {
            return il2cpp::array_new<app::Music_MusicTrack__Array>(get_class(), size);
        }
        inline app::Music_MusicTrack__Array* create_array(const std::vector<app::Music_MusicTrack*>& items) {
            return il2cpp::array_new<app::Music_MusicTrack__Array>(get_class(), items);
        }
    } // namespace Music_MusicTrack
} // namespace app::classes::types
