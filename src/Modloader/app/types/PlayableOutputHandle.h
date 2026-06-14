#pragma once
#include <Modloader/app/structs/PlayableOutputHandle.h>
#include <Modloader/app/structs/PlayableOutputHandle__Boxed.h>
#include <Modloader/app/structs/PlayableOutputHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayableOutputHandle {
        inline app::PlayableOutputHandle__Class** type_info() {
            static app::PlayableOutputHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayableOutputHandle__Class**)(modloader::win::memory::resolve_rva(0x04780078));
            }
            return cache;
        }
        inline app::PlayableOutputHandle__Class* get_class() {
            return il2cpp::get_class<app::PlayableOutputHandle__Class>(type_info(), "UnityEngine.Playables", "PlayableOutputHandle");
        }
        inline app::PlayableOutputHandle* create() {
            return il2cpp::create_object<app::PlayableOutputHandle>(get_class());
        }
        inline app::PlayableOutputHandle__Boxed* box(app::PlayableOutputHandle value) {
            return il2cpp::box_value<app::PlayableOutputHandle__Boxed>(get_class(), value);
        }
    } // namespace PlayableOutputHandle
} // namespace app::classes::types
