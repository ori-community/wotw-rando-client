#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationTester_Group__Array__Class.h>
#include <Modloader/app/structs/AnimationTester_Group__Array.h>

namespace app::classes::types {
    namespace AnimationTester_Group__Array {
        namespace {
            inline app::AnimationTester_Group__Array__Class* type_info_ref = nullptr;
        }
        inline app::AnimationTester_Group__Array__Class** type_info = &type_info_ref;
        inline app::AnimationTester_Group__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationTester_Group__Array__Class>(type_info, "", "AnimationTester+Group[]");
        }
        inline app::AnimationTester_Group__Array* create() {
            return il2cpp::create_object<app::AnimationTester_Group__Array>(get_class());
        }
    } // namespace AnimationTester_Group__Array
} // namespace app::classes::types
