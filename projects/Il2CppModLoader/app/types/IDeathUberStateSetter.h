#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDeathUberStateSetter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDeathUberStateSetter__Class** type_info;
        inline app::IDeathUberStateSetter__Class* get_class() {
            return il2cpp::get_class<app::IDeathUberStateSetter__Class>(type_info, "", "IDeathUberStateSetter");
        }
        inline app::IDeathUberStateSetter* create() {
            return il2cpp::create_object<app::IDeathUberStateSetter>(get_class());
        }
        inline app::IDeathUberStateSetter__Array* create_array(int size) {
            return il2cpp::array_new<app::IDeathUberStateSetter__Array>(get_class(), size);
        }
    } // namespace IDeathUberStateSetter
} // namespace app::classes::types
