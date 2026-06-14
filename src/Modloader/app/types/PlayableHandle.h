#pragma once
#include <Modloader/app/structs/PlayableHandle.h>
#include <Modloader/app/structs/PlayableHandle__Boxed.h>
#include <Modloader/app/structs/PlayableHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayableHandle {
        inline app::PlayableHandle__Class** type_info() {
            static app::PlayableHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayableHandle__Class**)(modloader::win::memory::resolve_rva(0x04792F40));
            }
            return cache;
        }
        inline app::PlayableHandle__Class* get_class() {
            return il2cpp::get_class<app::PlayableHandle__Class>(type_info(), "UnityEngine.Playables", "PlayableHandle");
        }
        inline app::PlayableHandle* create() {
            return il2cpp::create_object<app::PlayableHandle>(get_class());
        }
        inline app::PlayableHandle__Boxed* box(app::PlayableHandle value) {
            return il2cpp::box_value<app::PlayableHandle__Boxed>(get_class(), value);
        }
    } // namespace PlayableHandle
} // namespace app::classes::types
