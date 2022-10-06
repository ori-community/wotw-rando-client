#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IVirtualTimelineGameObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IVirtualTimelineGameObject__Class** type_info;
        inline app::IVirtualTimelineGameObject__Class* get_class() {
            return il2cpp::get_class<app::IVirtualTimelineGameObject__Class>(type_info, "", "IVirtualTimelineGameObject");
        }
        inline app::IVirtualTimelineGameObject__Array* create_array(int size) {
            return il2cpp::array_new<app::IVirtualTimelineGameObject__Array>(get_class(), size);
        }
        inline app::IVirtualTimelineGameObject__Array* create_array(const std::vector<app::IVirtualTimelineGameObject*>& items) {
            return il2cpp::array_new<app::IVirtualTimelineGameObject__Array>(get_class(), items);
        }
    } // namespace IVirtualTimelineGameObject
} // namespace app::classes::types
