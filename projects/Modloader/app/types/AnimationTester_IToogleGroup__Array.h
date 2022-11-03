#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationTester_IToogleGroup__Array {
        inline app::AnimationTester_IToogleGroup__Array__Class** type_info = (app::AnimationTester_IToogleGroup__Array__Class**)(modloader::win::memory::resolve_rva(0x04799B20));
        inline app::AnimationTester_IToogleGroup__Array__Class* get_class() {
            return il2cpp::get_class<app::AnimationTester_IToogleGroup__Array__Class>(type_info, "", "AnimationTester+IToogleGroup[]");
        }
        inline app::AnimationTester_IToogleGroup__Array* create() {
            return il2cpp::create_object<app::AnimationTester_IToogleGroup__Array>(get_class());
        }
    } // namespace AnimationTester_IToogleGroup__Array
} // namespace app::classes::types
