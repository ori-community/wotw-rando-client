#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayableGraph {
        inline app::PlayableGraph__Class** type_info = (app::PlayableGraph__Class**)(modloader::win::memory::resolve_rva(0x04753C78));
        inline app::PlayableGraph__Class* get_class() {
            return il2cpp::get_class<app::PlayableGraph__Class>(type_info, "UnityEngine.Playables", "PlayableGraph");
        }
        inline app::PlayableGraph* create() {
            return il2cpp::create_object<app::PlayableGraph>(get_class());
        }
        inline app::PlayableGraph__Boxed* box(app::PlayableGraph value) {
            return il2cpp::box_value<app::PlayableGraph__Boxed>(get_class(), value);
        }
    } // namespace PlayableGraph
} // namespace app::classes::types
