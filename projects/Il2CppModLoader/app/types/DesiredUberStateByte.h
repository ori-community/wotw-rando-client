#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DesiredUberStateByte {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DesiredUberStateByte__Class** type_info;
        inline app::DesiredUberStateByte__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateByte__Class>(type_info, "", "DesiredUberStateByte");
        }
        inline app::DesiredUberStateByte* create() {
            return il2cpp::create_object<app::DesiredUberStateByte>(get_class());
        }
        inline app::DesiredUberStateByte__Array* create_array(int size) {
            return il2cpp::array_new<app::DesiredUberStateByte__Array>(get_class(), size);
        }
        inline app::DesiredUberStateByte__Array* create_array(const std::vector<app::DesiredUberStateByte*>& items) {
            return il2cpp::array_new<app::DesiredUberStateByte__Array>(get_class(), items);
        }
    } // namespace DesiredUberStateByte
} // namespace app::classes::types
