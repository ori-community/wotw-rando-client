#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IGasBallBait {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IGasBallBait__Class** type_info;
        inline app::IGasBallBait__Class* get_class() {
            return il2cpp::get_class<app::IGasBallBait__Class>(type_info, "", "IGasBallBait");
        }
        inline app::IGasBallBait__Array* create_array(int size) {
            return il2cpp::array_new<app::IGasBallBait__Array>(get_class(), size);
        }
    } // namespace IGasBallBait
} // namespace app::classes::types
