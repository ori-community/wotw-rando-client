#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SceneManagerScene {
        inline app::SceneManagerScene__Class** type_info = (app::SceneManagerScene__Class**)(modloader::win::memory::resolve_rva(0x0474D758));
        inline app::SceneManagerScene__Class* get_class() {
            return il2cpp::get_class<app::SceneManagerScene__Class>(type_info, "", "SceneManagerScene");
        }
        inline app::SceneManagerScene* create() {
            return il2cpp::create_object<app::SceneManagerScene>(get_class());
        }
        inline app::SceneManagerScene__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneManagerScene__Array>(get_class(), size);
        }
        inline app::SceneManagerScene__Array* create_array(const std::vector<app::SceneManagerScene*>& items) {
            return il2cpp::array_new<app::SceneManagerScene__Array>(get_class(), items);
        }
    } // namespace SceneManagerScene
} // namespace app::classes::types
