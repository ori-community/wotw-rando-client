#pragma once
#include <Modloader/app/structs/PlayableBinding__Array.h>
#include <Modloader/app/structs/PlayableBinding__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayableBinding__Array {
        inline app::PlayableBinding__Array__Class** type_info() {
            static app::PlayableBinding__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayableBinding__Array__Class**)(modloader::win::memory::resolve_rva(0x04798D10));
            }
            return cache;
        }
        inline app::PlayableBinding__Array__Class* get_class() {
            return il2cpp::get_class<app::PlayableBinding__Array__Class>(type_info(), "UnityEngine.Playables", "PlayableBinding[]");
        }
        inline app::PlayableBinding__Array* create() {
            return il2cpp::create_object<app::PlayableBinding__Array>(get_class());
        }
    } // namespace PlayableBinding__Array
} // namespace app::classes::types
