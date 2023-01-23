#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PreloadFirstScene__Class.h>
#include <Modloader/app/structs/PreloadFirstScene.h>

namespace app::classes::types {
    namespace PreloadFirstScene {
        inline app::PreloadFirstScene__Class** type_info = (app::PreloadFirstScene__Class**)(modloader::win::memory::resolve_rva(0x047366F8));
        inline app::PreloadFirstScene__Class* get_class() {
            return il2cpp::get_class<app::PreloadFirstScene__Class>(type_info, "Moon.Timeline", "PreloadFirstScene");
        }
        inline app::PreloadFirstScene* create() {
            return il2cpp::create_object<app::PreloadFirstScene>(get_class());
        }
    } // namespace PreloadFirstScene
} // namespace app::classes::types
