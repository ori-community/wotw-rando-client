#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGreanade {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IGreanade__Class** type_info;
        inline app::IGreanade__Class* get_class() {
            return il2cpp::get_class<app::IGreanade__Class>(type_info, "", "IGreanade");
        }
        inline app::IGreanade* create() {
            return il2cpp::create_object<app::IGreanade>(get_class());
        }
        inline app::IGreanade__Array* create_array(int size) {
            return il2cpp::array_new<app::IGreanade__Array>(get_class(), size);
        }
    } // namespace IGreanade
} // namespace app::classes::types
