#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AnimationTester_IToogleGroupWithChildren {
        inline app::AnimationTester_IToogleGroupWithChildren__Class** type_info = (app::AnimationTester_IToogleGroupWithChildren__Class**)(modloader::win::memory::resolve_rva(0x04737DD0));
        inline app::AnimationTester_IToogleGroupWithChildren__Class* get_class() {
            return il2cpp::get_nested_class<app::AnimationTester_IToogleGroupWithChildren__Class>(type_info, "", "AnimationTester", "IToogleGroupWithChildren");
        }
    } // namespace AnimationTester_IToogleGroupWithChildren
} // namespace app::classes::types
