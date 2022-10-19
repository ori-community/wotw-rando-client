#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IGhostFrameData {
        inline app::IGhostFrameData__Class** type_info = (app::IGhostFrameData__Class**)(modloader::win::memory::resolve_rva(0x0470F670));
        inline app::IGhostFrameData__Class* get_class() {
            return il2cpp::get_class<app::IGhostFrameData__Class>(type_info, "", "IGhostFrameData");
        }
        inline app::IGhostFrameData__Array* create_array(int size) {
            return il2cpp::array_new<app::IGhostFrameData__Array>(get_class(), size);
        }
        inline app::IGhostFrameData__Array* create_array(const std::vector<app::IGhostFrameData*>& items) {
            return il2cpp::array_new<app::IGhostFrameData__Array>(get_class(), items);
        }
    } // namespace IGhostFrameData
} // namespace app::classes::types
