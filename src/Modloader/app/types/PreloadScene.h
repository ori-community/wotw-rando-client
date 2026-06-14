#pragma once
#include <Modloader/app/structs/PreloadScene.h>
#include <Modloader/app/structs/PreloadScene__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PreloadScene {
        inline app::PreloadScene__Class** type_info() {
            static app::PreloadScene__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PreloadScene__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PreloadScene__Class* get_class() {
            return il2cpp::get_class<app::PreloadScene__Class>(type_info(), "Moon.Timeline", "PreloadScene");
        }
        inline app::PreloadScene* create() {
            return il2cpp::create_object<app::PreloadScene>(get_class());
        }
    } // namespace PreloadScene
} // namespace app::classes::types
