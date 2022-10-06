#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationTester_AnimationTestEntry {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationTester_AnimationTestEntry__Class** type_info;
        inline app::AnimationTester_AnimationTestEntry__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_AnimationTestEntry__Class>(type_info, "", "AnimationTester", "AnimationTestEntry");
        }
        inline app::AnimationTester_AnimationTestEntry* create() {
            return il2cpp::create_object<app::AnimationTester_AnimationTestEntry>(get_class());
        }
        inline app::AnimationTester_AnimationTestEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationTester_AnimationTestEntry__Array>(get_class(), size);
        }
        inline app::AnimationTester_AnimationTestEntry__Array* create_array(const std::vector<app::AnimationTester_AnimationTestEntry*>& items) {
            return il2cpp::array_new<app::AnimationTester_AnimationTestEntry__Array>(get_class(), items);
        }
    } // namespace AnimationTester_AnimationTestEntry
} // namespace app::classes::types
