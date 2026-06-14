#pragma once
#include <Modloader/app/structs/TouchWalls_EffectorLink.h>
#include <Modloader/app/structs/TouchWalls_EffectorLink__Array.h>
#include <Modloader/app/structs/TouchWalls_EffectorLink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TouchWalls_EffectorLink {
        inline app::TouchWalls_EffectorLink__Class** type_info() {
            static app::TouchWalls_EffectorLink__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TouchWalls_EffectorLink__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TouchWalls_EffectorLink__Class* get_class() {
            return il2cpp::get_nested_class<app::TouchWalls_EffectorLink__Class>(type_info(), "RootMotion.Demos", "TouchWalls", "EffectorLink");
        }
        inline app::TouchWalls_EffectorLink* create() {
            return il2cpp::create_object<app::TouchWalls_EffectorLink>(get_class());
        }
        inline app::TouchWalls_EffectorLink__Array* create_array(int size) {
            return il2cpp::array_new<app::TouchWalls_EffectorLink__Array>(get_class(), size);
        }
        inline app::TouchWalls_EffectorLink__Array* create_array(const std::vector<app::TouchWalls_EffectorLink*>& items) {
            return il2cpp::array_new<app::TouchWalls_EffectorLink__Array>(get_class(), items);
        }
    } // namespace TouchWalls_EffectorLink
} // namespace app::classes::types
