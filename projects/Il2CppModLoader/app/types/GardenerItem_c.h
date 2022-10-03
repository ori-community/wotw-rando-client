#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GardenerItem_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GardenerItem_c__Class** type_info;
        inline app::GardenerItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GardenerItem_c__Class>(type_info, "", "GardenerItem", "<>c");
        }
        inline app::GardenerItem_c* create() {
            return il2cpp::create_object<app::GardenerItem_c>(get_class());
        }
    } // namespace GardenerItem_c
} // namespace app::classes::types
