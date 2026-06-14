#pragma once
#include <Modloader/app/structs/AnimationTester_IToogleGroupWithChildren.h>
#include <Modloader/app/structs/AnimationTester_IToogleGroupWithChildren__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AnimationTester_IToogleGroupWithChildren {
        inline app::AnimationTester_IToogleGroupWithChildren__Class** type_info() {
            static app::AnimationTester_IToogleGroupWithChildren__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AnimationTester_IToogleGroupWithChildren__Class**)(modloader::win::memory::resolve_rva(0x04737DD0));
            }
            return cache;
        }
        inline app::AnimationTester_IToogleGroupWithChildren__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_IToogleGroupWithChildren__Class>(type_info(), "", "AnimationTester", "IToogleGroupWithChildren");
        }
    } // namespace AnimationTester_IToogleGroupWithChildren
} // namespace app::classes::types
