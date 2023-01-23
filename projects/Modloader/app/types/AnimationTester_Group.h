#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AnimationTester_Group__Class.h>
#include <Modloader/app/structs/AnimationTester_Group.h>
#include <Modloader/app/structs/AnimationTester_Group__Array.h>

namespace app::classes::types {
    namespace AnimationTester_Group {
        inline app::AnimationTester_Group__Class** type_info = (app::AnimationTester_Group__Class**)(modloader::win::memory::resolve_rva(0x047719F8));
        inline app::AnimationTester_Group__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_Group__Class>(type_info, "", "AnimationTester", "Group");
        }
        inline app::AnimationTester_Group* create() {
            return il2cpp::create_object<app::AnimationTester_Group>(get_class());
        }
        inline app::AnimationTester_Group__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationTester_Group__Array>(get_class(), size);
        }
        inline app::AnimationTester_Group__Array* create_array(const std::vector<app::AnimationTester_Group*>& items) {
            return il2cpp::array_new<app::AnimationTester_Group__Array>(get_class(), items);
        }
    } // namespace AnimationTester_Group
} // namespace app::classes::types
