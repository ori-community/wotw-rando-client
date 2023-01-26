#pragma once
#include <Modloader/app/structs/Tests_DoMovementTests_d_15.h>
#include <Modloader/app/structs/Tests_DoMovementTests_d_15__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tests_DoMovementTests_d_15 {
        inline app::Tests_DoMovementTests_d_15__Class** type_info() {
            static app::Tests_DoMovementTests_d_15__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Tests_DoMovementTests_d_15__Class**)(modloader::win::memory::resolve_rva(0x047943B8));
            }
            return cache;
        }
        inline app::Tests_DoMovementTests_d_15__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_DoMovementTests_d_15__Class>(type_info(), "HierarchyPerfTest", "Tests", "<DoMovementTests>d__15");
        }
        inline app::Tests_DoMovementTests_d_15* create() {
            return il2cpp::create_object<app::Tests_DoMovementTests_d_15>(get_class());
        }
    } // namespace Tests_DoMovementTests_d_15
} // namespace app::classes::types
