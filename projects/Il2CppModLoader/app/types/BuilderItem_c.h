#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuilderItem_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BuilderItem_c__Class** type_info;
        inline app::BuilderItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderItem_c__Class>(type_info, "", "BuilderItem", "<>c");
        }
        inline app::BuilderItem_c* create() {
            return il2cpp::create_object<app::BuilderItem_c>(get_class());
        }
    } // namespace BuilderItem_c
} // namespace app::classes::types
