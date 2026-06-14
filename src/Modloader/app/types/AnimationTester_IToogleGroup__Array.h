#pragma once
#include <Modloader/app/structs/AnimationTester_IToogleGroup__Array.h>
#include <Modloader/app/structs/AnimationTester_IToogleGroup__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationTester_IToogleGroup__Array {
        inline app::AnimationTester_IToogleGroup__Array__Class** type_info() {
            static app::AnimationTester_IToogleGroup__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationTester_IToogleGroup__Array__Class**)(modloader::win::memory::resolve_rva(0x04799B20));
            }
            return cache;
        }
        inline app::AnimationTester_IToogleGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationTester_IToogleGroup__Array__Class>(type_info(), "", "AnimationTester+IToogleGroup[]");
        }
        inline app::AnimationTester_IToogleGroup__Array* create() {
            return il2cpp::create_object<app::AnimationTester_IToogleGroup__Array>(get_class());
        }
    } // namespace AnimationTester_IToogleGroup__Array
} // namespace app::classes::types
