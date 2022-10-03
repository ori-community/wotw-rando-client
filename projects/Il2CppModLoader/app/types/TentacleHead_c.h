#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TentacleHead_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TentacleHead_c__Class** type_info;
        inline app::TentacleHead_c__Class* get_class() {
            return il2cpp::get_nested_class<app::TentacleHead_c__Class>(type_info, "", "TentacleHead", "<>c");
        }
        inline app::TentacleHead_c* create() {
            return il2cpp::create_object<app::TentacleHead_c>(get_class());
        }
    } // namespace TentacleHead_c
} // namespace app::classes::types
