#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AnimationTester_IHierarchyUiElement {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AnimationTester_IHierarchyUiElement__Class** type_info;
        inline app::AnimationTester_IHierarchyUiElement__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_IHierarchyUiElement__Class>(type_info, "", "AnimationTester", "IHierarchyUiElement");
        }
        inline app::AnimationTester_IHierarchyUiElement__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationTester_IHierarchyUiElement__Array>(get_class(), size);
        }
        inline app::AnimationTester_IHierarchyUiElement__Array* create_array(const std::vector<app::AnimationTester_IHierarchyUiElement*>& items) {
            return il2cpp::array_new<app::AnimationTester_IHierarchyUiElement__Array>(get_class(), items);
        }
    } // namespace AnimationTester_IHierarchyUiElement
} // namespace app::classes::types
