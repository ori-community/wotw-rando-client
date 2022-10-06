#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Graphic {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Graphic__Class** type_info;
        inline app::Graphic__Class* get_class() {
            return il2cpp::get_class<app::Graphic__Class>(type_info, "UnityEngine.UI", "Graphic");
        }
        inline app::Graphic* create() {
            return il2cpp::create_object<app::Graphic>(get_class());
        }
        inline app::Graphic__Array* create_array(int size) {
            return il2cpp::array_new<app::Graphic__Array>(get_class(), size);
        }
        inline app::Graphic__Array* create_array(const std::vector<app::Graphic*>& items) {
            return il2cpp::array_new<app::Graphic__Array>(get_class(), items);
        }
    } // namespace Graphic
} // namespace app::classes::types
