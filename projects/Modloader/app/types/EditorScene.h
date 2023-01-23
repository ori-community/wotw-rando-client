#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EditorScene__Class.h>
#include <Modloader/app/structs/EditorScene.h>

namespace app::classes::types {
    namespace EditorScene {
        inline app::EditorScene__Class** type_info = (app::EditorScene__Class**)(modloader::win::memory::resolve_rva(0x04722870));
        inline app::EditorScene__Class* get_class() {
            return il2cpp::get_class<app::EditorScene__Class>(type_info, "", "EditorScene");
        }
        inline app::EditorScene* create() {
            return il2cpp::create_object<app::EditorScene>(get_class());
        }
    } // namespace EditorScene
} // namespace app::classes::types
