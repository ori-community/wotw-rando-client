#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SavePedestal {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SavePedestal__Class** type_info;
        inline app::SavePedestal__Class* get_class() {
            return il2cpp::get_class<app::SavePedestal__Class>(type_info, "", "SavePedestal");
        }
        inline app::SavePedestal* create() {
            return il2cpp::create_object<app::SavePedestal>(get_class());
        }
        inline app::SavePedestal__Array* create_array(int size) {
            return il2cpp::array_new<app::SavePedestal__Array>(get_class(), size);
        }
        inline app::SavePedestal__Array* create_array(const std::vector<app::SavePedestal*>& items) {
            return il2cpp::array_new<app::SavePedestal__Array>(get_class(), items);
        }
    } // namespace SavePedestal
} // namespace app::classes::types
