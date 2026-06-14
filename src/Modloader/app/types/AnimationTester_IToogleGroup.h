#pragma once
#include <Modloader/app/structs/AnimationTester_IToogleGroup.h>
#include <Modloader/app/structs/AnimationTester_IToogleGroup__Array.h>
#include <Modloader/app/structs/AnimationTester_IToogleGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationTester_IToogleGroup {
        inline app::AnimationTester_IToogleGroup__Class** type_info() {
            static app::AnimationTester_IToogleGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationTester_IToogleGroup__Class**)(modloader::win::memory::resolve_rva(0x047694C8));
            }
            return cache;
        }
        inline app::AnimationTester_IToogleGroup__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_IToogleGroup__Class>(type_info(), "", "AnimationTester", "IToogleGroup");
        }
        inline app::AnimationTester_IToogleGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::AnimationTester_IToogleGroup__Array>(get_class(), size);
        }
        inline app::AnimationTester_IToogleGroup__Array* create_array(const std::vector<app::AnimationTester_IToogleGroup*>& items) {
            return il2cpp::array_new<app::AnimationTester_IToogleGroup__Array>(get_class(), items);
        }
    } // namespace AnimationTester_IToogleGroup
} // namespace app::classes::types
