#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IGhostFrameData__Array {
        inline app::IGhostFrameData__Array__Class** type_info = (app::IGhostFrameData__Array__Class**)(modloader::win::memory::resolve_rva(0x047607F8));
        inline app::IGhostFrameData__Array__Class* get_class() {
            return il2cpp::get_class<app::IGhostFrameData__Array__Class>(type_info, "", "IGhostFrameData[]");
        }
        inline app::IGhostFrameData__Array* create() {
            return il2cpp::create_object<app::IGhostFrameData__Array>(get_class());
        }
    } // namespace IGhostFrameData__Array
} // namespace app::classes::types
