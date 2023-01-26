#pragma once
#include <Modloader/app/structs/TouchWalls.h>
#include <Modloader/app/structs/TouchWalls__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TouchWalls {
        inline app::TouchWalls__Class** type_info() {
            static app::TouchWalls__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TouchWalls__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TouchWalls__Class* get_class() {
            return il2cpp::get_class<app::TouchWalls__Class>(type_info(), "RootMotion.Demos", "TouchWalls");
        }
        inline app::TouchWalls* create() {
            return il2cpp::create_object<app::TouchWalls>(get_class());
        }
    } // namespace TouchWalls
} // namespace app::classes::types
