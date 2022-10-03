#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationTester_Group {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationTester_Group__Class** type_info;
        inline app::AnimationTester_Group__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_Group__Class>(type_info, "", "AnimationTester", "Group");
        }
        inline app::AnimationTester_Group* create() {
            return il2cpp::create_object<app::AnimationTester_Group>(get_class());
        }
        inline app::AnimationTester_Group__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationTester_Group__Array>(get_class(), size);
        }
    } // namespace AnimationTester_Group
} // namespace app::classes::types
