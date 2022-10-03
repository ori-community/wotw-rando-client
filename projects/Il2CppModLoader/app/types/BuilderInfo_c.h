#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuilderInfo_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BuilderInfo_c__Class** type_info;
        inline app::BuilderInfo_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BuilderInfo_c__Class>(type_info, "", "BuilderInfo", "<>c");
        }
        inline app::BuilderInfo_c* create() {
            return il2cpp::create_object<app::BuilderInfo_c>(get_class());
        }
    } // namespace BuilderInfo_c
} // namespace app::classes::types
