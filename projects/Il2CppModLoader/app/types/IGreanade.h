#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGreanade {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IGreanade__Class** type_info;
        inline app::IGreanade__Class* get_class() {
            return il2cpp::get_class<app::IGreanade__Class>(type_info, "", "IGreanade");
        }
        inline app::IGreanade__Array* create_array(int size) {
            return il2cpp::array_new<app::IGreanade__Array>(get_class(), size);
        }
        inline app::IGreanade__Array* create_array(const std::vector<app::IGreanade*>& items) {
            return il2cpp::array_new<app::IGreanade__Array>(get_class(), items);
        }
    } // namespace IGreanade
} // namespace app::classes::types
