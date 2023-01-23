#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationTester_IHierarchyUiElement__Array__Class.h>
#include <Modloader/app/structs/AnimationTester_IHierarchyUiElement__Array.h>

namespace app::classes::types {
    namespace AnimationTester_IHierarchyUiElement__Array {
        namespace {
            inline app::AnimationTester_IHierarchyUiElement__Array__Class* type_info_ref = nullptr;
        }
        inline app::AnimationTester_IHierarchyUiElement__Array__Class** type_info = &type_info_ref;
        inline app::AnimationTester_IHierarchyUiElement__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationTester_IHierarchyUiElement__Array__Class>(type_info, "", "AnimationTester+IHierarchyUiElement[]");
        }
        inline app::AnimationTester_IHierarchyUiElement__Array* create() {
            return il2cpp::create_object<app::AnimationTester_IHierarchyUiElement__Array>(get_class());
        }
    } // namespace AnimationTester_IHierarchyUiElement__Array
} // namespace app::classes::types
