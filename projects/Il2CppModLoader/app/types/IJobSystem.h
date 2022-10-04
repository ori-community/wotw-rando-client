#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IJobSystem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IJobSystem__Class** type_info;
        inline app::IJobSystem__Class* get_class() {
            return il2cpp::get_class<app::IJobSystem__Class>(type_info, "Moon.Jobs", "IJobSystem");
        }
        inline app::IJobSystem__Array* create_array(int size) {
            return il2cpp::array_new<app::IJobSystem__Array>(get_class(), size);
        }
    } // namespace IJobSystem
} // namespace app::classes::types
