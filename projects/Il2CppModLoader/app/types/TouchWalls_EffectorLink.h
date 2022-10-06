#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TouchWalls_EffectorLink {
        namespace {
            app::TouchWalls_EffectorLink__Class* type_info_ref = nullptr;
        }
        app::TouchWalls_EffectorLink__Class** type_info = &type_info_ref;
        inline app::TouchWalls_EffectorLink__Class* get_class() {
            return il2cpp::get_nested_class<app::TouchWalls_EffectorLink__Class>(type_info, "RootMotion.Demos", "TouchWalls", "EffectorLink");
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
