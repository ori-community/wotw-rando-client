#pragma once
#include <Modloader/app/structs/IGhostFrameData__Array.h>
#include <Modloader/app/structs/IGhostFrameData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGhostFrameData__Array {
        inline app::IGhostFrameData__Array__Class** type_info() {
            static app::IGhostFrameData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IGhostFrameData__Array__Class**)(modloader::win::memory::resolve_rva(0x047607F8));
            }
            return cache;
        }
        inline app::IGhostFrameData__Array__Class* get_class() {
            return il2cpp::get_class<app::IGhostFrameData__Array__Class>(type_info(), "", "IGhostFrameData[]");
        }
        inline app::IGhostFrameData__Array* create() {
            return il2cpp::create_object<app::IGhostFrameData__Array>(get_class());
        }
    } // namespace IGhostFrameData__Array
} // namespace app::classes::types
