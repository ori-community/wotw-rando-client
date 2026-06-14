#pragma once
#include <Modloader/app/structs/TouchWalls_EffectorLink__Array.h>
#include <Modloader/app/structs/TouchWalls_EffectorLink__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TouchWalls_EffectorLink__Array {
        inline app::TouchWalls_EffectorLink__Array__Class** type_info() {
            static app::TouchWalls_EffectorLink__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TouchWalls_EffectorLink__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TouchWalls_EffectorLink__Array__Class* get_class() {
            return il2cpp::get_class<app::TouchWalls_EffectorLink__Array__Class>(type_info(), "RootMotion.Demos", "TouchWalls+EffectorLink[]");
        }
        inline app::TouchWalls_EffectorLink__Array* create() {
            return il2cpp::create_object<app::TouchWalls_EffectorLink__Array>(get_class());
        }
    } // namespace TouchWalls_EffectorLink__Array
} // namespace app::classes::types
