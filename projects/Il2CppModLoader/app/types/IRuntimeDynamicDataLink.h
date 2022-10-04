#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRuntimeDynamicDataLink {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRuntimeDynamicDataLink__Class** type_info;
        inline app::IRuntimeDynamicDataLink__Class* get_class() {
            return il2cpp::get_class<app::IRuntimeDynamicDataLink__Class>(type_info, "Moon", "IRuntimeDynamicDataLink");
        }
        inline app::IRuntimeDynamicDataLink__Array* create_array(int size) {
            return il2cpp::array_new<app::IRuntimeDynamicDataLink__Array>(get_class(), size);
        }
    } // namespace IRuntimeDynamicDataLink
} // namespace app::classes::types
