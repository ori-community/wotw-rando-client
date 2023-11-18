#pragma once
#include <Modloader/app/structs/PlayableOutput.h>
#include <Modloader/app/structs/PlayableOutput__Boxed.h>
#include <Modloader/app/structs/PlayableOutput__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayableOutput {
        inline app::PlayableOutput__Class** type_info() {
            static app::PlayableOutput__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayableOutput__Class**)(modloader::win::memory::resolve_rva(0x0477C538));
            }
            return cache;
        }
        inline app::PlayableOutput__Class* get_class() {
            return il2cpp::get_class<app::PlayableOutput__Class>(type_info(), "UnityEngine.Playables", "PlayableOutput");
        }
        inline app::PlayableOutput* create() {
            return il2cpp::create_object<app::PlayableOutput>(get_class());
        }
        inline app::PlayableOutput__Boxed* box(app::PlayableOutput value) {
            return il2cpp::box_value<app::PlayableOutput__Boxed>(get_class(), value);
        }
    } // namespace PlayableOutput
} // namespace app::classes::types
