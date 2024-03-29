#pragma once
#include <Modloader/app/structs/Ambience_AmbienceTrack.h>
#include <Modloader/app/structs/Ambience_AmbienceTrack__Array.h>
#include <Modloader/app/structs/Ambience_AmbienceTrack__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ambience_AmbienceTrack {
        inline app::Ambience_AmbienceTrack__Class** type_info() {
            static app::Ambience_AmbienceTrack__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Ambience_AmbienceTrack__Class**)(modloader::win::memory::resolve_rva(0x04745990));
            }
            return cache;
        }
        inline app::Ambience_AmbienceTrack__Class* get_class() {
            return il2cpp::get_nested_class<app::Ambience_AmbienceTrack__Class>(type_info(), "Core", "Ambience", "AmbienceTrack");
        }
        inline app::Ambience_AmbienceTrack* create() {
            return il2cpp::create_object<app::Ambience_AmbienceTrack>(get_class());
        }
        inline app::Ambience_AmbienceTrack__Array* create_array(int size) {
            return il2cpp::array_new<app::Ambience_AmbienceTrack__Array>(get_class(), size);
        }
        inline app::Ambience_AmbienceTrack__Array* create_array(const std::vector<app::Ambience_AmbienceTrack*>& items) {
            return il2cpp::array_new<app::Ambience_AmbienceTrack__Array>(get_class(), items);
        }
    } // namespace Ambience_AmbienceTrack
} // namespace app::classes::types
