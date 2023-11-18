#pragma once
#include <Modloader/app/structs/IGhostFrameData.h>
#include <Modloader/app/structs/IGhostFrameData__Array.h>
#include <Modloader/app/structs/IGhostFrameData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IGhostFrameData {
        inline app::IGhostFrameData__Class** type_info() {
            static app::IGhostFrameData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IGhostFrameData__Class**)(modloader::win::memory::resolve_rva(0x0470F670));
            }
            return cache;
        }
        inline app::IGhostFrameData__Class* get_class() {
            return il2cpp::get_class<app::IGhostFrameData__Class>(type_info(), "", "IGhostFrameData");
        }
        inline app::IGhostFrameData__Array* create_array(int size) {
            return il2cpp::array_new<app::IGhostFrameData__Array>(get_class(), size);
        }
        inline app::IGhostFrameData__Array* create_array(const std::vector<app::IGhostFrameData*>& items) {
            return il2cpp::array_new<app::IGhostFrameData__Array>(get_class(), items);
        }
    } // namespace IGhostFrameData
} // namespace app::classes::types
