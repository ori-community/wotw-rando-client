#pragma once
#include <Modloader/app/structs/Tests_DoBasicFrameTimeTests_d_12.h>
#include <Modloader/app/structs/Tests_DoBasicFrameTimeTests_d_12__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Tests_DoBasicFrameTimeTests_d_12 {
        inline app::Tests_DoBasicFrameTimeTests_d_12__Class** type_info() {
            static app::Tests_DoBasicFrameTimeTests_d_12__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Tests_DoBasicFrameTimeTests_d_12__Class**)(modloader::win::memory::resolve_rva(0x04765080));
            }
            return cache;
        }
        inline app::Tests_DoBasicFrameTimeTests_d_12__Class* get_class() {
            return il2cpp::get_nested_class<app::Tests_DoBasicFrameTimeTests_d_12__Class>(type_info(), "HierarchyPerfTest", "Tests", "<DoBasicFrameTimeTests>d__12");
        }
        inline app::Tests_DoBasicFrameTimeTests_d_12* create() {
            return il2cpp::create_object<app::Tests_DoBasicFrameTimeTests_d_12>(get_class());
        }
    } // namespace Tests_DoBasicFrameTimeTests_d_12
} // namespace app::classes::types
