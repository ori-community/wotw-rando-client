#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGhostFrameData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IGhostFrameData__Class** type_info;
        inline app::IGhostFrameData__Class* get_class() {
            return il2cpp::get_class<app::IGhostFrameData__Class>(type_info, "", "IGhostFrameData");
        }
        inline app::IGhostFrameData* create() {
            return il2cpp::create_object<app::IGhostFrameData>(get_class());
        }
        inline app::IGhostFrameData__Array* create_array(int size) {
            return il2cpp::array_new<app::IGhostFrameData__Array>(get_class(), size);
        }
    } // namespace IGhostFrameData
} // namespace app::classes::types
