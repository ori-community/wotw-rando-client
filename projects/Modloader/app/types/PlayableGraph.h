#pragma once
#include <Modloader/app/structs/PlayableGraph.h>
#include <Modloader/app/structs/PlayableGraph__Boxed.h>
#include <Modloader/app/structs/PlayableGraph__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlayableGraph {
        inline app::PlayableGraph__Class** type_info() {
            static app::PlayableGraph__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlayableGraph__Class**)(modloader::win::memory::resolve_rva(0x04753C78));
            }
            return cache;
        }
        inline app::PlayableGraph__Class* get_class() {
            return il2cpp::get_class<app::PlayableGraph__Class>(type_info(), "UnityEngine.Playables", "PlayableGraph");
        }
        inline app::PlayableGraph* create() {
            return il2cpp::create_object<app::PlayableGraph>(get_class());
        }
        inline app::PlayableGraph__Boxed* box(app::PlayableGraph value) {
            return il2cpp::box_value<app::PlayableGraph__Boxed>(get_class(), value);
        }
    } // namespace PlayableGraph
} // namespace app::classes::types
